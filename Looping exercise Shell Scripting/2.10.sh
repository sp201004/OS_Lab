#!/bin/bash

echo -n "Enter No.: "
read n

echo -n "All odd numbers b/w 1 to $n is: "
for ((i=1; i<=n; i+=2))
do
    echo -n "$i "
done
echo