#!/bin/bash
set -e

mkdir -p bin

echo "Compiling kit..."
gcc kit/main.c -o bin/kit
echo "Compiling kls..."
gcc kls/main.c -o bin/kls
echo "Compiling meow..."
gcc meow/main.c -o bin/meow
echo ""
echo "Compile succesful!"
echo "If you want to install the programs locally you can execute 'INSTALL.sh' :)"
