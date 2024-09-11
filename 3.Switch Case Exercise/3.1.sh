#!/bin/bash

echo -n "Enter no. a: "
read a
echo -n "Enter no. b: "
read b

echo -n "Enter operation (+, -, *, /):"
read op

case $op in
  '+') result=$(($a+$b));;
  '-') result=$(($a-$b));;
  '*') result=$(($a*$b));;
  '/') result=$(($a/$b));;
  '*') echo "Invalid operation"
     exit 1;;
esac

echo "Result: $result"
