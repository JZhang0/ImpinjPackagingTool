#!/bin/bash

OLD_VER=$1
NEW_VER=$2

if [ -z "$OLD_VER" -o -z "$NEW_VER" ]; then
    echo "You must specify both old and new version number"
    exit 1
fi

find . -name "*.xml" | xargs sed -i "s=/xml/${OLD_VER}=/xml/${NEW_VER}=g"

