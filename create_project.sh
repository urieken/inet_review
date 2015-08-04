#!/bin/sh

create_project()
{
    echo "Creating project $1"
    mkdir -p $1/src
    mkdir -p $1/include
    mkdir -p $1/obj
    mkdir -p $1/lib
    mkdir -p $1/bin
}

create_project
