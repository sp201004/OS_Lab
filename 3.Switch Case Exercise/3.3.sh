#!/bin/bash

echo -n "Enter marks for Physics,Chemistry,Biology,Mathematics & Computer: "
read a b c d e

percentage=$(((a+b+c+d+e) / 5))

echo "Percentage: $percentage%"

case $percentage in
9[0-9]|100)  grade="A";;
8[0-9])      grade="B";;
7[0-9])      grade="C";;
6[0-9])      grade="D";;
4[0-9]|5[0-9]) grade="E";;
  *)           grade="F";;
esac

echo "Grade: $grade"
