#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
	float x1,x2,x3,x4,y1,y2,y3,y4,sx,sy;
	
	printf("Enter the starting point coordinates:");
	scanf("%f%f",&x1,&y1);
	printf("Enter the ending point coordinates:");
	scanf("%f%f",&x2,&y2);
	printf("Enter the scaling factors sx,sy:\n");
	scanf("%f%f",&sx,&sy);
	//Before scaling
	setcolor(5);
	line(x1,y1,x2,y2);
	outtextxy(x2+2,y2+2,"Original line");
	
	x3=x1*sx;
	y3=y1*sy;
	x4=x2*sx;
	y4=y2*sy;
	//After scaling
	setcolor(7);
	line(x3,y3,x4,y4);
	outtextxy(x4+2,y4+2,"Line after scaling");
	getch();
	closegraph();
	return 0;
}
