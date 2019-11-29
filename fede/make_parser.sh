#!/bin/bash
yacc -d algo_asi_es_yacc
lex algo_asi_es_lex
gcc lex.yy.c y.tab.c -o output.sh
