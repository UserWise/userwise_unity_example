#!/bin/bash

if [ ! -d "./.git" ]
then
        echo "This script must be ran from the root of the example app."
        exit 1
fi

version="$1"
if [[ ${version} == "" ]]
then
        echo "You must provide a proper version. (example: './bin/update_latest 2.1.4')"
        exit 1
fi

unity_sdk_dir="../userwise_unity_sdk"
if [ -d $unity_sdk_dir ]
then
        initbranch=$(git branch | sed -n -e 's/^\* \(.*\)/\1/p')
        if [[ $initbranch != "latest" ]]
        then
                git checkout latest
                if [[ $(git branch | sed -n -e 's/^\* \(.*\)/\1/p') != "latest" ]];
                then
                        exit 1
                fi
        fi

        ## update our changes
        rm -rf ./Runtime/Plugins/*
        cp -r "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/UserWiseSDK/Plugins/" ./Runtime

	rm README.txt # temporarily remove README.txt until next release, when we have README.txt.meta
        rm ./Runtime/UserWiseSDK.dll
        rm ./Runtime/UserWiseSDK.dll.meta
        cp "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/UserWiseSDK/UserWiseSDK.dll" ./Runtime
        cp "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/UserWiseSDK/UserWiseSDK.dll.meta" ./Runtime

        git commit -a -m $version
        git tag $version
        git push origin latest
        git push origin --tags
        git checkout $initbranch
        echo "Successfully updated 'latest' branch."
else
        echo "The example app and the unity sdk projects must be siblings within the same parent directory."
        echo "The relative path '../userwise_unity_sdk/' was not found. Exiting..."
        exit 1
fi
