#!/bin/bash
export LD_PRELOAD="$PWD/gm"
echo "8 9 10 24 75 9" | $LD_PRELOAD
