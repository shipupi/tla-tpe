#!/bin/bash
yacc -d testyacc
lex testlex
gcc lex.yy.c y.tab.c -o test.sh
