#!/bin/bash
echo  -n "Enter the No.:"
read n
i=1

while [ $i -le $n ]
do
    echo $i
    ((i++))
done