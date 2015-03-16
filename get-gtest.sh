#!/bin/bash

set -e

PACKAGE_DIR=./lib/gtest

function clean {
    rm -rf ${PACKAGE_DIR}
}

function get {
    svn checkout http://googletest.googlecode.com/svn/trunk/ ${PACKAGE_DIR}/
}

function compile {
    pushd ${PACKAGE_DIR}/
    cmake .
    make
    cp *.a ../
    popd
}

clean
get
compile

exit 0

