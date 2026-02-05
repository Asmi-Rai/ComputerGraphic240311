#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
char IncFlag;
int PolygonPoints[3][2]={{10,100},{110,100},{110,200}};
void Axis(){
	setcolor(GREEN);
	line(0,240,640,240);//X-axis
    line(320,0,320,480);//Y-axis
}
void polyLine()
{
    int iCnt;
    setcolor(WHITE);
    // Draw polygon outline
    for (iCnt = 0; iCnt < 3; iCnt++) {
        line(PolygonPoints[iCnt][0], PolygonPoints[iCnt][1],
             PolygonPoints[(iCnt+1)%3][0], PolygonPoints[(iCnt+1)%3][1]);
    }
    // Fill polygon directly
    setfillstyle(SOLID_FILL, 9);
    fillpoly(3, (int*)PolygonPoints);
}

void Reflect(){
	float Angle;
	int iCnt;
	int Tx,Ty;
	for(iCnt=0;iCnt<3;iCnt++){
		
		PolygonPoints[iCnt][1]=(480-PolygonPoints[iCnt][1]);
	}
}
int main(){
	int gd=DETECT,gm;
	int iCnt;
	initgraph(&gd,&gm,"");
	for(iCnt=0;iCnt<3;iCnt++){
		
		PolygonPoints[iCnt][0]+=320;
		PolygonPoints[iCnt][1]=240-PolygonPoints[iCnt][1];
	}
	Axis();
	polyLine();
	outtextxy(PolygonPoints[0][0],PolygonPoints[0][1]+20,"Original Triangle");
	Reflect();
	polyLine();
	outtextxy(PolygonPoints[0][0],PolygonPoints[0][1]-20,"Reflected Triangle");
	getch();
	return 0;
}
