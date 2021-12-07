#!/bin/bash

function printHelp {
    echo "Usage: "
    echo "smtx [input files]"
}

java -jar jars/semantaxc.jar $@
g++ -g -Iheaders -c out.cpp -o program.o
g++ -g objects/*.o program.o -o a.out