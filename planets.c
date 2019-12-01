#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <graphics.h>



typedef struct{
	double x,y;
}vector;
 
int bodies,timeSteps;
int *color, *radius, *visibility;
char **name;
double *masses,GravConstant;
vector *positions,*velocities,*accelerations;
 
vector addVectors(vector a,vector b){
	vector c = {a.x+b.x,a.y+b.y};
 
	return c;
}
 
vector scaleVector(double b,vector a){
	vector c = {b*a.x,b*a.y};
 
	return c;
}
 
vector subtractVectors(vector a,vector b){
	vector c = {a.x-b.x,a.y-b.y};
 
	return c;
}

static void sigterm_handler(const int signal) {
  printf("Signal detected\n");
  abort();
}
 
double mod(vector a){
	return sqrt(a.x*a.x + a.y*a.y);
}
 
void initiateSystem(char* fileName){
	int i;
	FILE* fp = fopen(fileName,"r");
 
	fscanf(fp,"%lf%d%d",&GravConstant,&bodies,&timeSteps);
 
 	fprintf(stderr, "Inicio las variables \n");
	masses = (double*)malloc(bodies*sizeof(double));
	positions = (vector*)malloc(bodies*sizeof(vector));
	velocities = (vector*)malloc(bodies*sizeof(vector));
	accelerations = (vector*)malloc(bodies*sizeof(vector));
	visibility = (int*)malloc(bodies*sizeof(int));
	radius = (int*)malloc(bodies*sizeof(int));
	color = (int*)malloc(bodies*sizeof(int));
	name = (char**)malloc(bodies*sizeof(char));

	fprintf(stderr, "Seteo las variables \n");
	for(i=0;i<bodies;i++){
		fscanf(fp,"%lf",&masses[i]);
		fprintf(stderr, "Seteo massas %lf \n",masses[i]);

		fscanf(fp,"%lf%lf",&positions[i].x,&positions[i].y);
		fprintf(stderr, "Seteo positions %lf %lf\n",positions[i].x,positions[i].y);

		fscanf(fp,"%lf%lf",&velocities[i].x,&velocities[i].y);
		fprintf(stderr, "Seteo velocidades %lf %lf\n",velocities[i].x,velocities[i].y);

		fscanf(fp,"%d%d",&radius[i],&color[i]);
		fprintf(stderr, "Seteo radio %d y color  %d\n",radius[i],color[i]);
		

		char *namebuffer=(char*)calloc(256,sizeof(char));
		char temp;
		//fprintf(stderr, "Encontre %c\n",fgetc(fp));
		fgetc(fp);
		for(int j=0;j<256;j++){
			temp=fgetc(fp);
			//fprintf(stderr, "Encontre %c\n",temp);
			if(temp!='\n' ){
				//fprintf(stderr, "Lo puse\n");
				namebuffer[j]=temp;
			}else{
				//printf(stderr, "No lo puse\n");
				namebuffer[j]='\0';
				break;
			}
		}

		//fgets(namebuffer,256,fp);
		//fscanf(fp,"%[^\n]",namebuffer);
		name[i]=namebuffer;
		fprintf(stderr, "Seteo name  %s\n",name[i]);
		fprintf(stderr, "Seteo name  %s\n",namebuffer);

		fscanf(fp,"%d",&visibility[i]);
		fprintf(stderr, "Seteo visibility  %d\n",visibility[i]);
	}
 
	fclose(fp);
}
 
void resolveCollisions(){
	int i,j;
 
	for(i=0;i<bodies-1;i++)
		for(j=i+1;j<bodies;j++){
			if(positions[i].x==positions[j].x && positions[i].y==positions[j].y){
				vector temp = velocities[i];
				velocities[i] = velocities[j];
				velocities[j] = temp;
			}
		}
}
 
void computeAccelerations(){
	int i,j;
 
	for(i=0;i<bodies;i++){
		accelerations[i].x = 0;
		accelerations[i].y = 0;
		for(j=0;j<bodies;j++){
			if(i!=j){
				accelerations[i] = addVectors(accelerations[i],scaleVector(GravConstant*masses[j]/pow(mod(subtractVectors(positions[i],positions[j])),3),subtractVectors(positions[j],positions[i])));
			}
		}
	}
}
 
void computeVelocities(){
	int i;
 
	for(i=0;i<bodies;i++)
		velocities[i] = addVectors(velocities[i],accelerations[i]);
}
 
void computePositions(){
	int i;
 
	for(i=0;i<bodies;i++)
		positions[i] = addVectors(positions[i],addVectors(velocities[i],scaleVector(0.5,accelerations[i])));
}
 
void simulate(){
	computeAccelerations();
	computePositions();
	computeVelocities();
	resolveCollisions();
}
 
int main(int argC,char* argV[])
{

	int i,j;
	int visual = true;
	int gd = DETECT, gm; 
	
	//planet settings
	//int radius[5]={3,3,3,3,3};    						//tamaño
	//int color[5]={YELLOW,BLUE,RED,4,5};    					//del 0(negro) al 16
	//char *name[5]={"1","2","3","4","5"}; 				//nombres de los planetas
	//bool visibility[5]={true,true,true,true,true};		//visibilidad


	signal(SIGTERM, sigterm_handler);
  	signal(SIGINT, sigterm_handler);

	if (visual) {
    	initgraph(&gd, &gm, NULL);
	}
	if(argC!=2)
		fprintf(stderr, "Usage : %s <file name containing system configuration data>\n",argV[0]);
	else{
		fprintf(stderr, " Pre init \n");
		initiateSystem(argV[1]);
		double xoffset = getmaxx() / 2;
		double yoffset = getmaxy() / 2;
		long scale = 1;
		if (!visual) {
			fprintf(stderr, "Body   :     x              y                |           vx              vy              vz   ");
		}
		for(i=0;i<timeSteps;i++){
			fprintf(stderr, "\nCycle %d\n",i+1);
			
			//borro de la pantalla
			//for(j=0;j<bodies;j++){
			//	if (visual)  {
				/* code */
			//		setcolor(0);
			//		if(visibility[j]){
			//			//outtextxy((positions[j].x*scale+xoffset+5),(positions[j].y*scale+yoffset+5),name[j]);
			//			setcolor(0);
			//			bar((positions[j].x*scale+xoffset+5),(positions[j].y*scale+yoffset),(positions[j].x*scale+xoffset+5)+strlen(name[j])*20, (positions[j].y*scale+yoffset)+20);
			//			setcolor(0);
			//			fillellipse((positions[j].x*scale+xoffset),(positions[j].y*scale+yoffset), radius[j], radius[j]);
			//			//circle((positions[j].x*scale+xoffset),(positions[j].y*scale+yoffset),radius[j]);
			//			//floodfill((positions[j].x*scale+xoffset),(positions[j].y*scale+yoffset),color[j]);
			//		}
			//	}				
			//	fprintf(stderr, "Body %d : %lf\t%f\t%lf\t|\t%lf\t%lf\t%lf\n",j+1,positions[j].x,positions[j].y,positions[j].z,velocities[j].x,velocities[j].y,velocities[j].z);
			//}

			simulate();

			if (i == 0) {
				double xm = 0;
				double ym = 0;
				for(j=0;j<bodies;j++){
					if (positions[j].x > xm) {
						xm = positions[j].x;
					}
					if (positions[j].y > ym) {
						ym = positions[j].y;
					}
				}
				int determining_value = MAX(xm,ym);
				if (determining_value == xm) {
					scale = (0.8 * getmaxx() / 2) / xm;
				} else {
					scale = (0.8 * getmaxy() / 2) / ym;
				}
			}
			cleardevice();
			for(j=0;j<bodies;j++){
				if (visual && (positions[j].x*scale+xoffset)<getmaxx() && (positions[j].x*scale+xoffset)>=0 && (positions[j].y*scale+yoffset)<getmaxy() && (positions[j].y*scale+yoffset) >=0 )  {
							/* code */
					setcolor(color[j]);
					if(visibility[j]){
						outtextxy((positions[j].x*scale+xoffset+radius[j]+5),(positions[j].y*scale+yoffset+radius[j]+3),name[j]);
						fillellipse((positions[j].x*scale+xoffset),(positions[j].y*scale+yoffset), radius[j], radius[j]);
						//circle((positions[j].x*scale+xoffset),(positions[j].y*scale+yoffset),radius[j]);
						//floodfill((positions[j].x*scale+xoffset),(positions[j].y*scale+yoffset),color[j]);
					}
				}else{
					fprintf(stderr, "OUT OF BOUNDS\n");

				}			
				fprintf(stderr, "Body %d : %lf\t%f\t|\t%lf\t%lf\n",j+1,positions[j].x,positions[j].y,velocities[j].x,velocities[j].y);

			}
			if (visual)  {
				delay(3);
			}

		}

		    delay(5000); 
    closegraph(); 
	}
	return 0;
}
 
 