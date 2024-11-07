#include<stdio.h>
int exp1(int x,int y)
{if(y==0)
return 1;
else 
return (x*exp1(x,y-1));
}
void main()
{int a,b,r;
printf("enter two numbers\n");
scanf("%d %d",&a,&b);
r=exp1(a,b);
printf("\n RESULT= %d",r);
}
