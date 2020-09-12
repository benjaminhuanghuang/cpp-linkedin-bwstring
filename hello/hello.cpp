// hello.cpp by Bill Weinman <http://bw.org/>
// Copyright (c) 2014-2015 The BearHeart Group LLC

#include <cstdio>
#include "BWString.h"

void message(const char * s) {
    puts(s);
    fflush(stdout);
}

int main( int argc, char ** argv ) {
    BWString hello = "Hello, World!";
    message(hello);
    return 0;
}
