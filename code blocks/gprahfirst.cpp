#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{int gd=0,gm;
initgraph(&gd,&gm,"");
circle(200,300,80);
getch();
closegraph();
return 0;
}
