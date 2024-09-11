#!/bin/bash

echo -n "Enter the No.: "
read n

while [ $n -ge 1 ]
do
    echo $n
    ((n--))
done