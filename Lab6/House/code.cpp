#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void House(int left,int top,int right,int bottom){
	
	//bg
	setfillstyle(1,15);
	floodfill(1,1,15);
	
	setcolor(0);
	
	//roof
	line(left+240,bottom-30,right-50,bottom-85);
	line(right-50,bottom-85,right+60,bottom-30);
	line(left+240,bottom-30,left+250,bottom-30);
	line(right+55,bottom-30,right+50,bottom-30);
	
	//setfillstyle(1,4);
	floodfill(right-50,bottom-84,0);
	
	//front building
	rectangle(left+250,bottom+20,right+50,bottom+150);
	
	int points[]={left+250,bottom+20,left+250,bottom-30,right-50,bottom-80,
	right+50,bottom-30,right+50,bottom+20,left+250,bottom+20};
	drawpoly(6, points);

	
	//Window
	circle(right-50,bottom-30,25);
	
	line(right-50,bottom-30-25,right-50,bottom-30+25);
	line(right-50+25,bottom-30,right-50-25,bottom-30);
	
	//door
	arc(right-50,bottom+100,0,180,40);
	line(right-50-40,bottom+100,right-50-40,bottom+150);
	line(right-50+40,bottom+100,right-50+40,bottom+150);
	
	circle(right-50-40+20,bottom+120,8);
	
	

	//upper floor
	rectangle(left,top,right,bottom);
	
	//upper roof
	line(left-50,top,left+200,top-70);
	line(right+50,top,left+200,top-70);
	line(left-50,top,right+50,top);
	
	setfillstyle(1,4);
	floodfill(left+200,top-60,0);
	
	//Upper window
	rectangle(left+40,top+50,left+220,bottom-20);
	
	setfillstyle(1,7);
	floodfill(left+41,top+51,0);
	
	rectangle(left+50,top+60,left+125,bottom-30);
	setfillstyle(1,9);
	floodfill(left+55,top+65,0);
	rectangle(left+135,top+60,left+210,bottom-30);
	setfillstyle(1,9);
	floodfill(left+140,top+65,0);
	
	//garage
	rectangle(left-50,bottom,left+250,bottom+150);
	
	rectangle(left-50+60,bottom+40,left+250-60,bottom+150);
	
	setfillstyle(1,LIGHTRED);
	floodfill(left+15,bottom+100,0);
	setfillstyle(2,0);
	floodfill(left+15,bottom+100,0);
	
	//balcony
	rectangle(left-50,bottom-40,left,bottom);
	setfillstyle(1,LIGHTBLUE);
	floodfill(left-45,bottom-35,0);
		
}

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	House(100,120,500,300);
	getch();
	return 0;
}
