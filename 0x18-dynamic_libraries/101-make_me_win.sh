#!/bin/bash
wget -p /tmp/ https://github.com/HudaOmer/alx-low_level_programming/tree/master/0x18-dynamic_libraries/random.so
export LD_PRELOAD=/tmp/random.so
