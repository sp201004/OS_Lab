#!/bin/bash

echo -n "Enter an alphabet: "
read char

case $char in
  [aAeEiIoOuU])echo "$char is a vowel.";;
  *) echo "$char is not a vowel.";;
esac