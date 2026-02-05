#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void Building(int left,int top,int right,int bottom){
	
	//Bacground
	setfillstyle(1,15);
	floodfill(0,0,15);

	setcolor(0);
	//base
	rectangle(left,top,right,bottom);
	
	//border
	rectangle(left,top+110,right,top+120);
	setfillstyle(1,1);
	floodfill(left+1,top+111,0);
	
	//window
	rectangle(left+60,top+20,right-60,top+80);
	setfillstyle(1,11);
	floodfill(left+65,top+25,0);
    line(((left+60)+(right-60))/2,top+20,((left+60)+(right-60))/2,top+80);//v
	line(left+60,top+40,right-60,top+40);//h
	
	//garage
	rectangle(left+50,bottom-80,right-50,bottom-20);
	setfillstyle(1,7);
	floodfill(left+65,bottom-30,0);
	setfillstyle(2,15);
	floodfill(left+55,bottom-30,0);
	
	//stairs
	rectangle(left+30,bottom-20,right-30,bottom);
	setfillstyle(1,8);
	floodfill(left+31,bottom-10,0);
	
	//Roof
	line(left-10,top,(left+right)/2,top-60);
	line((left+right)/2,top-60,right+10,top);
	
	line(left+10,top,(left+right)/2,top-50);
	line((left+right)/2,top-50,right-10,top);
	line(left-10,top,right+10,top);
	
	setfillstyle(1,1);
	floodfill((left+right)/2,top-55,0);
	
	setfillstyle(1,9);
	floodfill((left+right)/2,top-5,0);
	
	//Back building
	rectangle(right,top+50,right+150,top+110);//second
	rectangle(right,top+135,right+150,bottom);//first
	
	//bottom roof
	line(right+150,top+110,right+170,top+130);
	rectangle(right,top+130,right+170,top+135);
	
	setfillstyle(1,9);
	floodfill(right+1,top+111,0);
	
	setfillstyle(1,1);
	floodfill(right+5,top+132,0);
	
	//back building top roof
	rectangle(right,top+30,right+160,top+50);
	setfillstyle(1,1);
	floodfill(right+5,top+35,0);
	
	//Window
		rectangle(right+90,top+60,right+130,top+100);
		
		setfillstyle(1,11);
	    floodfill(right+91,top+65,0);
	    
		line((right+90+right+130)/2,top+70,(right+90+right+130)/2,top+100);
	
		line(right+90,top+70,right+130,top+70);
	//Door
	rectangle(((2*right+150)/2)-25,bottom-50,((2*right+150)/2)+25,bottom);
	setfillstyle(1,6);
	floodfill(((2*right+150)/2),bottom-10,0);
	circle(((2*right+150)/2)+18,bottom-25,5);
	setfillstyle(1,0);
	floodfill(((2*right+150)/2)+18,bottom-25,0);
	
}

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	Building(50,100,300,320);
	getch();
	return 0;
}
