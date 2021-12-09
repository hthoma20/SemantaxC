#!/bin/bash

REMOTE_DEBUG=false
javaArgs=''

function printHelp {
    echo "Usage: "
    echo "smtx [input files]"
}

if [ "$REMOTE_DEBUG" = true ]
then
    java -agentlib:jdwp=transport=dt_socket,server=y,suspend=y,address=5005 -jar jars/semantaxc.jar $@
else
    java -jar jars/semantaxc.jar $@
fi
g++ -g -Iheaders -c out.cpp -o program.o
g++ -g objects/*.o program.o -o a.out