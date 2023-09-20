#!/bin/bash
wget -P /tmp https://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@github.com/alierrami/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so

