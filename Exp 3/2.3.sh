#!/bin/bash

echo -n "Enter the No.: "
read num
factorial=1
i=1

while [ $i -le $num ]
do
    factorial=$((factorial * i))
    ((i++))
done
    echo "Factorial of $num is : $factorial" 