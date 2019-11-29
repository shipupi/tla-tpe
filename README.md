# tla-tpe

Compilador<br />

Esta subida la Gramatica y una idea del LEX y del YACC, a los dos les faltan un monton de cosas pero creo que la estrutura general esta mas o menos bien<br />

Input file:<br />
Gravitational Constant Number of bodies(N) Time step<br />
Mass of M1<br />
Position of M1 in x,y,z co-ordinates<br />
Initial velocity of M1 in x,y,z components<br />
  
  
Run:<br />
./planets inputFile.txt<br />

Rosetta code:<br />
https://rosettacode.org/wiki/N-body_problem#C<br />


Desde el directorio fede: <br />
./make_parser.sh <br />

Genera los yacc lex y un archivo output.sh que come por entrada estandar y va haciendo las cosas <br />
