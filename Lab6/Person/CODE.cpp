#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	circle(150,150,35);//face
	circle(140,150,5);//left eye
	circle(160,150,5);//right eye
	arc(150,150,250,290,20);//mouth
	line(150,185,150,300);//body
	line(150,200,120,230);//left arm
	line(150,200,180,230);//right arm
	line(150,300,120,330);//left leg
	line(150,300,180,330);//right leg
	outtextxy(190,230,"Hi! : )");
	getch();
	return 0;
	
}
