#!/bin/sh -e

BASEDIR=$(realpath "$(dirname "$0")")
ROOTDIR=$(realpath "$BASEDIR/..")

if [ -d "$ROOTDIR/build" ]; then
    rm -rf "$ROOTDIR/build"
fi

mkdir -p "$ROOTDIR/build"

cmake -S "$ROOTDIR" -B "$ROOTDIR/build"
cmake --build "$ROOTDIR/build"
