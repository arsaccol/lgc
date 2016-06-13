#!/bin/bash
if [ $# == 4 ] ; then
	./test-lgc $1 $2 $3 $4 > results.txt && less results.txt
else
	echo "Usage: run <X0, a, b, n>"
fi
