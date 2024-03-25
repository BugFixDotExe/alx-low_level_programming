#!/bin/bash
export LD_PRELOAD="$PWD/gm"
echo "9 8 10 24 75 9" | ./gm
