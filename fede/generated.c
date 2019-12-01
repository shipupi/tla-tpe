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
 int visibility;
 char * name;
};
int main(void){
int planet_quantity = 0;
FILE *fp;
fp = fopen("planet_info","w+");
fprintf(fp, "              ");
struct Planet sun;
sun.mass=1.000000;
sun.xpos=0.000000;
sun.ypos=0.000000;
sun.xvel=0.000000;
sun.yvel=0.000000;
sun.radius=15.000000;
sun.color=14.000000;
sun.name="SUN";
sun.visibility=1.000000;
planet_quantity++;
fprintf(fp, "%lf\n",sun.mass);
fprintf(fp, "%lf %lf\n",sun.xpos,sun.ypos);
fprintf(fp, "%lf %lf\n",sun.xvel,sun.yvel);
fprintf(fp, "%lf %d\n",sun.radius,sun.color);
fprintf(fp, "%s\n",sun.name);
fprintf(fp, "%d\n",sun.visibility);
struct Planet p;
p.mass=0.000001;
p.xpos=0.000000;
p.ypos=-13.000000;
p.xvel=0.010000;
p.yvel=0.000000;
p.radius=3.000000;
p.color=5.000000;
p.name="METEORITE";
p.visibility=1.000000;
planet_quantity++;
fprintf(fp, "%lf\n",p.mass);
fprintf(fp, "%lf %lf\n",p.xpos,p.ypos);
fprintf(fp, "%lf %lf\n",p.xvel,p.yvel);
fprintf(fp, "%lf %d\n",p.radius,p.color);
fprintf(fp, "%s\n",p.name);
fprintf(fp, "%d\n",p.visibility);
fseek(fp,0,SEEK_SET);
fprintf(fp, "0.01 %d 10000\n",planet_quantity);
printf( "planet_info generated succesfully!\n");
}