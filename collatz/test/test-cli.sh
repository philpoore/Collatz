#!/bin/bash
cd $(dirname $0)

BIN=../collatz
INPUT=./numbers.txt
OUTPUT=/tmp/collatz-test-result.txt
RESULT=./result.txt


echo "[-] Testing collatz cli"
cat $INPUT | $BIN > $OUTPUT

echo "[-] Checking results"
OUTPUT_MD5=`cat $OUTPUT | md5`
KNOWN_MD5=`cat $RESULT | md5`

if [ "$OUTPUT_MD5" != "$KNOWN_MD5" ] ;
then
    echo "[!] Test failed"
    echo "KNOWN MD5: $KNOWN_MD5"
    echo "OUTPUT MD5: $OUTPUT_MD5"
    exit 1
else
    echo "[+] Test passed"
fi