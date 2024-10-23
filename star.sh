#!/bin/zsh

read n

for ((i=0; i<$n; i++))
do
	for ((j=$n-$i; j>0; j--))
	do
		echo -n "*"
	done
		echo
done
