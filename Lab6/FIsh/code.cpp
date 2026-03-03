#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<ctype.h>
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	cleardevice();
	//Body
	ellipse(520,200,35,330,80,40);
	ellipse(440,200,335,25,50,80);
	//eye
    circle(460,193,5);
    //mouth
    line(440,200,450,200);
    //tail
    ellipse(600,200,230,130,20,30);
    //Fins
    ellipse(520,200,215,120,18,13);
    ellipse(530,160,330,190,40,15);
    //Bubbles
    circle(380,180,10);
    circle(400,200,5);
	getch();
	return 0;
}
