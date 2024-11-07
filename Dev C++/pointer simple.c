#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{int gd=0, gm;
initgraph(&gd,&gm,"");
line(120,230,320,123);
closegraph();
return 0;
}