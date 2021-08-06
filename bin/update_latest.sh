#!/bin/sh

unitypackage="$1"

if [ ! -d "./.git" ]
then
        echo "This script must be ran from the root of the example app."
        exit 1
fi

branch=$(git branch | sed -n -e 's/^\* \(.*\)/\1/p')
if [ "${branch}" != "enhance/add_support_for_upm" ]
then
        echo "This script may only be ran from the master branch."
        exit 1
fi

if [ -f "${unitypackage}" ]
then
        unity_package_name=$(basename $unitypackage)
        tmp_dir_name="uw-unity-$(date '+%Y-%m-%d')"
        tmp_dir=$(mktemp -d -t $tmp_dir_name)
        echo "Created temp directory ${tmp_dir}"

        ## copy our unitypackage to the tmp directory
        cp $unitypackage "${tmp_dir}/"
        echo "Copied ${unity_package_name} to the created temp directory."

        git checkout latest
else
        echo "Must provide a valid .unitypackage to generate the new 'latest' branch from."
        exit 1
fi
