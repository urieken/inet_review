#!/bin/sh

echo "Creating project: $1"

for i in include source obj lib bin
do
    echo "Creating $1/$i"
    mkdir -p $1/$i
done





