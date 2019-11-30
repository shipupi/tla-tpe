Planet p;
p.xvel = 10;
p.yvel = 5;
p.radius = 1;
p.name = "hola";
p.xpos = 0;
p.ypos = 0;
p.mass =0.5;
p.color = 5;
p.visibility = false;
int a = 7;
print_digit(p.mass);
while(p.mass>5){
	addplanet(p);
	a--;
}
