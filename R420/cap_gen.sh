#!/bin/bash
# Use this script to call the cap_gen utility and ensure that the proper gcrypt
# library will be used.

DIR="$( cd $( dirname ${BASH_SOURCE[0]}) && pwd )"
CAPGEN="cap_gen_$(uname -m)"
LD_LIBRARY_PATH=${DIR} ${DIR}/${CAPGEN} $@

