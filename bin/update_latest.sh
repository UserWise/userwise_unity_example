#!/bin/bash

if [ ! -d "./.git" ]
then
        echo "This script must be ran from the root of the example app."
        exit 1
fi

initbranch=$(git branch | sed -n -e 's/^\* \(.*\)/\1/p')
if [ ${initbranch} != "enhance/add_support_for_upm" ]
then
        echo "This script may only be ran from the master branch."
        exit 1
fi

unity_sdk_dir="../userwise_unity_sdk"
if [ -d ${unity_sdk_dir} ]
then
        tmp_dir_name="uw-unity-$(date '+%Y-%m-%d')"
        tmp_dir=$(mktemp -d -t ${tmp_dir_name})
        echo "Created temp directory ${tmp_dir}"

        ## switch to our latest branch
        git checkout latest
        if [ $(git branch | sed -n -e 's/^\* \(.*\)/\1/p') != 'latest' ]
        then
                echo "Failed to update to 'latest' git branch. Exiting..."
                exit 1
        fi

        ## save our static README
        cp "./README.md" ${tmp_dir}

        ## remove files (DANGEROUS!)
        read -p "You are about to remove all files in the 'latest' branch. Confirm? (y/n) " -n 1 -r
        echo $REPLY
        if [[ $REPLY == ^[Yy]$ ]]
        then
                sudo rm -rf ./*
        else
                echo
                echo "You must remove all files from 'latest' in order to generate a new version. Exiting..."
                git checkout ${initbranch}
                exit 1
        fi

        ## copy README and unitypackage back
        cp "${tmp_dir}/README.md" ./

        ## copy our updated assets
        cp -r "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets" ./

        echo "Successfully updated 'latest' branch."
        #git checkout ${initbranch}
else
        echo "The example app and the unity sdk projects must be siblings within the same parent directory."
        echo "The directory '../userwise_unity_sdk/' was not found... Exiting"
        exit 1
fi
