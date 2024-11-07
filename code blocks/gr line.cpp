#include<iostream>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main()
{ int gd=0,gm;
initgraph(&gd,&gm,"");
line(120,230,340,320);
getch();
closegraph();
return 0;
}
