#!/bin/bash

echo -n "Enter the Number: " 
read age
if (( $age >=18 ))
then
	echo "Eligible for VOTE"
else
	echo "Not Eligible for VOTE"
fi
