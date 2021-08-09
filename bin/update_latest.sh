#!/bin/bash

if [ ! -d "./.git" ]
then
        echo "This script must be ran from the root of the example app."
        exit 1
fi

version=$1
if [ $(test ${version} = "") ]
then
        echo "You must provide a proper version. (example: './bin/update_latest 2.1.4')"
        exit 1
fi

unity_sdk_dir="../userwise_unity_sdk"
if [ -d ${unity_sdk_dir} ]
then
        initbranch=$(git branch | sed -n -e 's/^\* \(.*\)/\1/p')
        if [ ${initbranch} != "latest" ]
        then
                git checkout latest
                if [ $(git branch | sed -n -e 's/^\* \(.*\)/\1/p') != "latest" ];
                then
                        exit 1
                fi
        fi

        ## update our changes
        rm ./Editor/UserWisePostBuildProcessor.cs
        rm ./Editor/UserWisePostBuildProcessor.cs.meta
        rm ./Editor/UserWiseSDKDependencies.xml
        rm ./Editor/UserWiseSDKDependencies.xml.meta
        cp -r "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/UserWiseSDK/Editor/" ./Editor

        rm -rf ./Runtime/Plugins/*
        cp -r "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/UserWiseSDK/Plugins/" ./Runtime/Plugins/
        cp -r "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/Plugins/iOS/" ./Runtime/Plugins/iOS/
        cp -r "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/Plugins/Android/" ./Runtime/Plugins/Android/

        rm ./Runtime/UserWiseSDK.dll
        rm ./Runtime/UserWiseSDK.dll.meta
        rm ./Runtime/iOSNativePlatformProxyExtensions.cs
        rm ./Runtime/iOSNativePlatformProxyExtensions.cs.meta
        cp "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/UserWiseSDK/UserWiseSDK.dll" ./Runtime
        cp "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/UserWiseSDK/UserWiseSDK.dll.meta" ./Runtime
        cp "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/UserWiseSDK/Plugins/iOSNativePlatformProxyExtensions.cs" ./Runtime
        cp "${unity_sdk_dir}/userwise_unity_sdk_packaging/UserWiseUnitySDK/Assets/UserWiseSDK/Plugins/iOSNativePlatformProxyExtensions.cs.meta" ./Runtime

        git commit -a -m ${version}
        git tag -v ${version}
        git push origin latest
        git push origin --tags
        echo "Successfully updated 'latest' branch."
else
        echo "The example app and the unity sdk projects must be siblings within the same parent directory."
        echo "The directory '../userwise_unity_sdk/' was not found... Exiting"
        exit 1
fi
