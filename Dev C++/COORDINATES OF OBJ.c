// program to calculate the coordinates of a object
#include<stdio.h>
#include<math.h>
int main()
{float a1,a2,a3,a4,l1,l2,d1,d2,x1,x2,y1,z1,x,y;
printf("enter lenth of arm 1\n");
scanf("%f",&l1);
printf("enter angle in degree of arm 1\n");
scanf("%f",&a1);
printf(" enter lenth of arm 2\n");
scanf("%f",&l2);
printf("enter angle in degree of arm 2\n");
scanf("%f",&a2);
// arc distance travel by the l1 arm
x=l1*cos(a1)+l2*cos(a1+a2);
y=l1*sin(a1)+l2*sin(a1+a2);

//a3=180-2*a1;
//a4=180-2*a2;
////x and y components of the distance
//x1=l1*sin(a3);
//y1=l1*cos(a3);
//
//x2=l2*sin(a4);
//z1=l2*cos(a4);
//printf("x1=%f x2=%f y1=%f z1=%f",x1,x2,y1,z1);
printf("coordinates of the arm x,y is (%f,%f)",x,y);
return 0;
}




