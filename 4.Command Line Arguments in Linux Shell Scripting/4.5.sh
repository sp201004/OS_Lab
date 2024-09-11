#!/bin/bash

s=0
for arg in "$@"
do
    s=$((s + arg))
done
echo "Sum of the numbers: $s"