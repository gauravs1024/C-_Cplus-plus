#include<stdio.h>
int fact(int n)
{if(n==0) 
return 0;
else if (n==1)
return 1;
else
return (n*fact(n-1));
}
void main()
{int f,n;
printf("enter a number to find factorial\n");
scanf("%d",&n);
f=fact(n);
printf("\n factorial = %d",f);
}
