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

unitypackage="$1"
if [ -f ${unitypackage} ]
then
        unity_package_name=(basename ${unitypackage})
        tmp_dir_name="uw-unity-$(date '+%Y-%m-%d')"
        tmp_dir=$(mktemp -d -t ${tmp_dir_name})
        echo "Created temp directory ${tmp_dir}"

        ## copy our unitypackage to the tmp directory
        cp ${unitypackage} ${tmp_dir}
        echo "Copied ${unity_package_name} to the created temp directory."

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
        if [[ $REPLY = ^[Yy]$ ]]
        then
                rm -rf ./*
        else
                echo
                echo "You must remove all files from 'latest' in order to generate a new version. Exiting..."
                git checkout ${initbranch}
                exit 1
        fi

        git checkout ${initbranch}
else
        echo "Must provide a valid .unitypackage to generate the new 'latest' branch from."
        exit 1
fi
