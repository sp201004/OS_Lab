#!/bin/bash

echo -n "Enter the No.: "
read n
a=0
b=1

echo -n "The Fibonacci series of $n is : "

for (( i=0; i<n; i++ ))
do
  echo -n "$a "
  fn=$((a + b))
  a=$b
  b=$fn
done
echo ""