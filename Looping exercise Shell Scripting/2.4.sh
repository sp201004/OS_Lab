#!/bin/bash

echo -n "Enter a No.: "
read num
p=1

for ((i=2; i<=num/2; i++))
do
  if [ $((num % i)) -eq 0 ]; then
    p=0
    break
  fi
done

if [ $p -eq 1 ]; then
  echo "$num is a prime number."
else
  echo "$num is not a prime number."
fi