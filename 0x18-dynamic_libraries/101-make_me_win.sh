#!/bin/bash
wget -P /tmp/ https://github.com/HudaOmer/alx-low_level_programming/row/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
