#!/bin/sh

create_project()
{
    echo "Creating project $1"
    mkdir $1/src
    mkdir $1/include
    mkdir $1/obj
    mkdir $1/lib
    mkdir $1/bin
}

create_project
