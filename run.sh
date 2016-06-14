#!/bin/bash
if [ $# == 4 ] ; then
	./lgc.exe $1 $2 $3 $4 > results.txt && less results.txt
else
	echo "Usage: run <X0, n, a, b>"
fi
