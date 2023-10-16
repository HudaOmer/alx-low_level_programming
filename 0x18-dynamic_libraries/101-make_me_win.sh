#!/bin/bash
wget -P /tmp/ https://github.com/HudaOmer/alx-low_level_programming/blob/7bf05dc5550b7ed14d02f6bef56b69843433f168/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
