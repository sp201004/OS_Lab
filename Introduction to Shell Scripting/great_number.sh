#!/bin/bash

echo -n "Enter three numbers: "
read a b c

if [ $a -gt $b ] && [ $a -gt $c ];
then
    echo "$a is the greatest"
elif [ $b -gt $a ] && [ $b -gt $c ];
then
    echo "$b is the greatest"
else
    echo "$c is the greatest"
fi

