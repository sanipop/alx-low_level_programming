#!/bin/bash
wget -P .. https://github.com/sanipop/alx-low_level_programming/raw/2993c7ea9126d277e72edf60e6c727943f7d92ed/0x18-dynamic_libraries/win.so
export LD_PRELOAD="$PWD/../win.so"
