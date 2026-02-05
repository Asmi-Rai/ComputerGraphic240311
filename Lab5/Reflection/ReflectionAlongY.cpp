#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>

char IncFlag;
int PolygonPoints[3][2]={{50,100},{150,100},{150,200}};

void Axis(){
	setcolor(GREEN);
    line(0,240,640,240);//X-axis
    line(320,0,320,480);//Y-axis

}
void PolyLine(){
    int iCnt;
    for(iCnt=0;iCnt<3;iCnt++){
    	//Prints the points
        printf("Edge %d:S(%d, %d), E(%d, %d)\n",iCnt+1,
            PolygonPoints[iCnt][0],PolygonPoints[iCnt][1],
            PolygonPoints[(iCnt+1)%3][0],PolygonPoints[(iCnt+1)%3][1]);
        setcolor(WHITE);
        //Draw sides of triangle
        line(PolygonPoints[iCnt][0],PolygonPoints[iCnt][1],
             PolygonPoints[(iCnt+1)%3][0],PolygonPoints[(iCnt+1)%3][1]);
    }
    setfillstyle(SOLID_FILL,3);
    fillpoly(3, (int*)PolygonPoints);  
}
void Reflect(){
	
	float angle;
	int iCnt;
	int Tx,Ty;
	for(iCnt=0;iCnt<3;iCnt++){
		PolygonPoints[iCnt][0]=(640-PolygonPoints[iCnt][0]);
	}
}
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	
	int iCnt;
	for(iCnt=0;iCnt<3;iCnt++){
		PolygonPoints[iCnt][0]+=320;
		PolygonPoints[iCnt][1]=240-PolygonPoints[iCnt][1];
	}
	Axis();
	PolyLine();
	outtextxy(PolygonPoints[0][0],PolygonPoints[0][1]+20,"Original Triangle");
	Reflect();
	printf("After Reflection\n");
	PolyLine();
	outtextxy(PolygonPoints[1][0],PolygonPoints[0][1]+20,"Reflected Triangle");
	getch();
	return 0;
	
}
