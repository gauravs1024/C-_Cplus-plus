/*//circumference OF CIRCLE
#include<stdio.h>
#define pi 3.14159
int main()
{float a,r;
printf("enter radius of circle\n");
scanf("%f",&r);
a=2*pi*r;
printf("circumference of circle = %f\n",a);
return 0;
}
*/
/*//circumference OF CIRCLE
#include<stdio.h>
#define pi 3.14159
int main()
{float a,r,;
printf("enter radius of circle\n");
scanf("%f",&r);
a=pi*r*r;
printf("area of circle = %f\n",a);
return 0;
}
*/
/*//area of triangle
#include<stdio.h>
int main()
{float a,b,h;
printf("enter base and height of right triangle\n");
scanf("%f%f",&b,&h);
a=0.5*b*h;
printf("area of triangle = %f\n",a);
return 0;
}
*/
/*//area of equilateral  triangle
#include<stdio.h>
#include<math.h>
int main()
{float a,s;
printf("enter side of equilateral  triangle\n");
scanf("%f",&s);
a=(sqrt(3)/4.0)*s*s;
printf("area of triangle = %f\n",a);
return 0;
}
*/
/*//area of rectangle
#include<stdio.h>
int main()
{float a,l,b;
printf("enter lenth and breadth of rectangle\n");
scanf("%f%f",&l,&b);
a=l*b;
printf("area of rectangle = %f\n",a);
return 0;
}

*/
/*
//area of square
#include<stdio.h>
int main()
{float a,s;
printf("enter side of square\n");
scanf("%f",&s);
a=s*s;
printf("area of square = %f\n",a);
return 0;
}
*/
/*
//area of rhombus
#include<stdio.h>
int main()
{float a,d1,d2;
printf("enter diagonal of rhombus\n");
scanf("%f%f",&d1,&d2);
a=(d1*d2)/2;
printf("area of square = %f\n",a);
return 0;
}
*/
/*
//area of pentagon
#include<stdio.h>
#include<math.h>
int main()
{float a,s;
printf("enter side of pentagon\n");
scanf("%f",&s);
a=0.25*sqrt(5*(5+2*sqrt(5))*s*s);
printf("area of pentagon = %f\n",a);
return 0;
}
*/
/*
//area of hexagon
#include<stdio.h>
#include<math.h>
int main()
{float a,s;
printf("enter side of hexagon\n");
scanf("%f",&s);
a=((3*sqrt(3))/2.0)*s*s;
printf("area of hexagon = %f\n",a);
return 0;
}
*/
/*
//area of heptagon(regular)
#include<stdio.h>
#include<math.h>
int main()
{float a,s,p;
printf("enter side of heptagon\n");
scanf("%f",&s);
printf("enter the maximum distance from centre(apothem)\n");
scanf("%f",&p);
a=(7*s*p)/2;
printf("area of heptagon = %f\n",a);
return 0;
}
*/
/*
//area of octagon
#include<stdio.h>
#include<math.h>
int main()
{float a,s,p;
printf("enter side of octagon\n");
scanf("%f",&s);
a=2*(1+sqrt(2))*s*s;
printf("area of heptagon = %f\n",a);
return 0;
}
*/
/*
//area of trapezoid
#include<stdio.h>
#include<math.h>
int main()
{float A,b,a,h,l;
printf("enter height and length of trapezoid\n");
scanf("%f%f",&h,&l);
printf("enter side of trapezoid a and b\n");
scanf("%f%f",&a,&b);
A=((a+b)*h*l)/2;
printf("area of heptagon = %f\n",A);
return 0;
}
*/
/*
//volume of sphere
#include<stdio.h>
int main()
{float a,r;
printf("enter radius of sphere\n");
scanf("%f",&r);
a=(4/3)*3.14159*r*r*r;
printf("volume of sphere = %f\n",a);
return 0;
}
*/
/*
//volume of hemisphere
#include<stdio.h>
int main()
{float a,r;
printf("enter radius of hemisphere\n");
scanf("%f",&r);
a=(2.0/3.0)*3.14159*r*r*r;
printf("volume of hemisphere = %f\n",a);
return 0;
}
*/
/*
//volume of cone
#include<stdio.h>
int main()
{float a,r,h;
printf("enter radius and height of cone\n");
scanf("%f%f",&r,&h);
a=(3.14159*r*r*h)/3;
printf("volume of cone = %f\n",a);
return 0;
}
*/
//volume of cuboid
#include<stdio.h>
int main()
{float a,l,b,h;
printf("enter lenth ,breadth and height of cuboid\n");
scanf("%f%f%f",&l,&b,&h);
a=l*b*h;
printf("volume of cuboid = %f\n",a);
return 0;
}


