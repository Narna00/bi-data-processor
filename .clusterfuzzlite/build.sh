#!/bin/bash -eu

# Compile the parser source
$CC $CFLAGS -c -I./include src/parser.c -o parser.o

# Link with the fuzzer harness and libFuzzer
$CXX $CXXFLAGS $LIB_FUZZING_ENGINE fuzz/parser_fuzzer.cc parser.o -o $OUT/parser_fuzzer
