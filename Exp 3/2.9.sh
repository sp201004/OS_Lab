#!/bin/bash

echo -n "Enter No.: "
read n
sum=0

for (( i=2; i<=n; i+=2 ))
do
  sum=$((sum + i))
done

echo "Sum of all even no. between 1 to $n is: $sum"