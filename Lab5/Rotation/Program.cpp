#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
char coord[50];
void coordinate(int x,int y){
	sprintf(coord,"(%d,%d)",x,y);
}
int main(){
	int gd=DETECT,gm;
	float x1,y1,x2,y2,x3,y3,x4,y4,a,t;
	initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
	printf("Enter coordinates of starting point:\n");
	scanf("%f%f",&x1,&y1);
	printf("Enter the coordinates of the ending points:");
	scanf("%f%f",&x2,&y2);
	printf("Enter the angle of rotation: ");
	scanf("%f",&a);
		
	//Original line
	setcolor(5);
	line(x1,y1,x2,y2);
	outtextxy(x1,y1+5,"Original Line");
	coordinate(x1,y1);
	outtextxy(x1-2,y1-20,coord);
	coordinate(x2,y2);
	outtextxy(x2+2,y2-20,coord);
	t=a*(3.14/180);
	x3=(x1*cos(t))-(y1*sin(t));
	y3=(x1*sin(t))+(y1*cos(t));
	x4=(x2*cos(t))-(y2*sin(t));
	y4=(x2*sin(t))+(y2*cos(t));
	
	//After rotation
	setcolor(7);
	line(x3,y3,x4,y4);
	outtextxy(x4,(y3+y4)/2,"Line after Rotation");
	coordinate(x3,y3);
	outtextxy(x3-2,y3-2,coord);
	coordinate(x4,y4);
	outtextxy(x4+2,y4+2,coord);
	getch();

	return 0;
}
