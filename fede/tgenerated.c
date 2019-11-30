#include <stdbool.h>
#include <stdio.h>
struct Planet{
 double xvel;
 double yvel;
 double xpos;
 double ypos;
 int color;
 double mass;
 double radius;
 bool visibility;
 char name[20];
};
int main(void){
FILE *fp;
fp = fopen("filename","w+");
fprintf(fp, "\n");
struct Planet p;
p.xvel=10.000000;
p.yvel=5.000000;
p.radius=1.000000;
p.name="yyerror  syntax error
}