#!/bin/bash

echo -n "Enter 24 hr Format time (HH MM): "
read h m

case $h in
  [01]|0[1-9]|1[0-1]) am_pm="AM";;
  12)                 am_pm="PM" ;;
  1[3-9]|2[0-3])      am_pm="PM";;
  *)echo "Invalid hour input"
    exit 1;;
esac
echo "Time: $h:$m $am_pm"