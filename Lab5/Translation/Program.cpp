#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TurboC3\\BGI");
	int x1,x2,x3,x4,y1,y2,y3,y4,tx,ty;
	
	printf("Enter the starting point coordinates:");
	scanf("%d%d",&x1,&y1);
	printf("Enter the ending point coordinates:");
	scanf("%d%d",&x2,&y2);
	printf("Enter the translation distances tx,ty:\n");
	scanf("%d%d",&tx,&ty);
	//Before translation
	setcolor(5);
	line(x1,y1,x2,y2);
	outtextxy(x2+2,y2+2,"Original line");
	
	x3=x1+tx;
	y3=y1+ty;
	x4=x2+tx;
	y4=y2+ty;
	//After translation
	setcolor(7);
	line(x3,y3,x4,y4);
	outtextxy(x4+2,y4+2,"Line after translation");
	getch();
	closegraph();
	return 0;
}
