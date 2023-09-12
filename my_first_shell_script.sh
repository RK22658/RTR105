#!/bin/bash
whoami
echo "------"
pwd
echo "------"
ls
echo "------"
echo "--- ls result after after a.txt creation: ---"
echo "12345" > a.txt
ls
echo "--- ls result after copy of a.txt: ---"
cp a.txt b.txt
ls
echo "--- ls result after ABC creation ---"
mkdir ABC
ls
echo "--- ls result after move ---"

