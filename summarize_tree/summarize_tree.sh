#!/bin/bash

#Takes a directory as a command line input
dir=$1

#Count the number of files Recursively with "find" with -type of f or "file"
#Pipe the output of find into "wc" or word count with -l 
#flag the counts the lines of output from "find"
find "$dir" -type f | wc -l || exit

