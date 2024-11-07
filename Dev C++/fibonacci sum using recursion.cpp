#include<stdio.h>

int main()
{int f,n,i;
//int fibo(int n);
printf("enter a number to find fibonacci sum\n");
scanf("%d",&n);
printf("\n fibonacci \n");
for(i=0;i<=n;i++)
{f=fibo(i);
printf(" %d ",f);}
return 0;
}
int fibo(int n)
{if(n==0)
return 0;
else if (n==1)
return 1;
else
return (fibo(n-1)+fibo(n-2));
}