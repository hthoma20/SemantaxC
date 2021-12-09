#!/bin/bash

STOP_ON_TEST_FAILURE=false

testCount=0
passCount=0
newCount=0

for testFile in test/input/*.smtx
do

    rm -f out.cpp out.txt a.out

    testCount=$(($testCount + 1))

    ./smtxc.sh $testFile
    ./a.out > out.txt
    
    testFile=$(basename $testFile)

    cppSnapshot="test/snapshot/$testFile.out.cpp"
    outputSnapshot="test/snapshot/$testFile.out.txt"

    if [ -f "$cppSnapshot" -a -f "$outputSnapshot" ]
    then
        cmp -s out.cpp $cppSnapshot
        snapshotMatches=$?

        cmp -s out.txt $outputSnapshot
        outputMatches=$?
        
        if [ $snapshotMatches -eq 1 ]
        then
            echo "Snapshot for cpp mismatch for $testFile"
            diff out.cpp $cppSnapshot
        fi

        if [ $outputMatches -eq 1 ]
        then
            echo "Snapshot for ouput mismatch for $testFile"
            diff out.cpp $outputSnapshot
        fi

        if [ $snapshotMatches -eq 0 -a $outputMatches -eq 0 ]
        then
            passCount=$(($passCount + 1))
        elif [ "$STOP_ON_TEST_FAILURE" = true ]
        then
            exit 1
        fi

    else
        newCount=$(($newCount + 1))
        passCount=$(($passCount + 1))

        echo "No snapshot for "$testFile", creating one"
        mv out.cpp "$cppSnapshot"
        mv out.txt "$outputSnapshot"
    fi

done

echo
echo "Passed $passCount/$testCount tests"
echo "Created $newCount new snapshots"
