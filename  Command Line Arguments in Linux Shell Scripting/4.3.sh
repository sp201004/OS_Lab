#!/bin/bash

for a in "$@"
do
    if [ "$(echo $a | rev)" = "$a" ]; then
        echo "$a is a palindrome."
    else
        echo "$a is not a palindrome."
    fi
done