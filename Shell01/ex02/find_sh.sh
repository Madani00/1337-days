#!/bin/sh
find . -type f -name "*.sh" | sed 's|.sh$||' | xargs -n 1 basename
