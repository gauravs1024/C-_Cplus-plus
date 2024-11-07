#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{ int gd=0,gm;
int x,y,i;
initgraph(&gd,&gm,"");
	x=getmaxx()/2;
	y=getmaxy()/2;
	for(i=30;i<200;i++)
	{
		delay(100);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
getch();
closegraph();
return 0;
}
