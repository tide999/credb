#!/bin/bash

set -e
set -x
export LD_LIBRARY_PATH=$HOME/local/lib:$HOME/local/lib/x86_64-linux-gnu:/usr/local/lib:/usr/local/lib/x86_64-linux-gnu
export LIBRARY_PATH=$HOME/local/lib:$HOME/local/lib/x86_64-linux-gnu:/usr/local/lib:/usr/local/lib/x86_64-linux-gnu
export PYTHONPATH=${HOME}/local/lib/python3.6/site-packages

if [[ "$sgx_mode" == "simulation" ]]; then
    export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/opt/intel/sgxsdk/lib64
    export LIBRARY_PATH=$LIBRARY_PATH:/opt/intel/sgxsdk/lib64
fi

cd ..

if meson doxy --prefix=$HOME/local --buildtype debug -Dsgx_mode=$sgx_mode; then
    # This has to be done with else because with '!' it won't work on Mac OS X
    true
else
    exit $? #abort on failure
fi

cd doxy
ninja doc/cpp
