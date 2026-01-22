#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
float x,y;
int xc,yc;
void disp();
void coordinates(int,int);
void ellipseType(int,int);
int main(){
	int gd=DETECT,gm;
	int rx,ry;
	float p1,p2;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	
	printf("Enter the center the point:");
	scanf("%d%d",&xc,&yc);
	printf("Enter the value of Rx and Ry:");
	scanf("%d%d",&rx,&ry);
	coordinates(rx,ry);
	//Starting point
	x=0;
	y=ry;
	disp();
	//Region 1(slope<-1)
	p1=(ry*ry)-(rx*rx*ry)+(rx*rx)/4;
	while((2.0*ry*ry*x)<=(2.0*rx*rx*y)){
		x++;
		if(p1<=0){
			p1=p1+(2.0*ry*ry*x)+(ry*ry);
		}
		else{
		y--;
		p1=p1+(2.0*ry*ry*x)-(2.0*rx*rx*y)+(ry*ry);
	}
	disp();
	x=-x;//symmetry across Y-axis
	disp();
	x=-x;//restore x
}
//Region 2(slope>-1)
x=rx;
y=0;
disp();
p2=(rx*rx)+(2.0*rx*rx*ry)+(ry*ry)/4;
while((2.0*ry*ry*x)>(2.0*rx*rx*y)){
	y++;
	if(p2>0){
		p2=p2+(rx*rx)-(2.0*rx*rx*y);
	}
	else{
		x--;
		p2=p2+(rx*rx)-(2.0*rx*rx*y)+(2.0*ry*ry*x);
	}
	disp();
	y=-y;//symmetry across X-axis
	disp();
	y=-y;//retore y
}
ellipseType(rx,ry);
getch();
closegraph();
return 0;
}
void disp(){
	delay(10);
	putpixel(xc+x,yc+y,10);//quad 1
	putpixel(xc-x,yc+y,10);//quad 2
	putpixel(xc+x,yc-y,10);//quad 3
	putpixel(xc-x,yc-y,10);//quad 4
}
void coordinates(int rx,int ry){
	char coord[20];
	//Center
	sprintf(coord,"(%d,%d)",xc,yc);
	outtextxy(xc,yc,coord);
    //At x=0
    sprintf(coord,"(%d,%d)",xc,yc+ry);
    outtextxy(xc,yc+ry,coord);

    sprintf(coord,"(%d,%d)",xc,yc-ry);
    outtextxy(xc,yc-ry-10,coord);
    //At y=0
    sprintf(coord,"(%d,%d)",xc+rx,yc);
    outtextxy(xc+rx,yc,coord);

    sprintf(coord,"(%d,%d)",xc-rx,yc);
    outtextxy(xc-rx-60,yc+10,coord);
}
void ellipseType(int rx,int ry){
	if(rx>ry)
		outtextxy(xc-50,yc+ry+40,"Horizontal ellipse");
	else
	outtextxy(xc-50,yc+ry+40,"Vertical ellipse");
}
