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
 char * name;
};
int main(void){
int planet_quantity = 0;FILE *fp;
fp = fopen("filename","w+");
fprintf(fp, "\n");
struct Planet p;
p.xvel=10.000000;
p.yvel=5.000000;
p.radius=1.000000;
p.name="hola";
p.xpos=0.000000;
p.ypos=0.000000;
p.mass=0.500000;
p.color=5.000000;
p.visibility=0;
float a=7.000000;
printf("%f",p.mass);
while(p.mass>5.000000){
planet_quantity++;
fprintf(fp, "%lf\n",p.mass);
fprintf(fp, "%lf %lf\n",p.xvel,p.yvel);
fprintf(fp, "%lf %lf\n",p.xpos,p.ypos);
fprintf(fp, "%lf %d\n",p.radius,p.color);
fprintf(fp, "%s\n",p.name);
fprintf(fp, "%d\n",p.visibility);
a--;
}
fseek(fp,0,SEEK_SET);
fprintf(fp, "0.01 %d 10000\n",planet_quantity);
}