#include<stdio.h>
long ackerman(int,int);
long  c=0;
int main()
{int m,n;
	printf("enter two number to put in ackerman function\n");
	scanf("%d%d",&m,&n);
	printf(" the ackerman value %ld\n",ackerman(m,n));
	printf("recursive count %ld",c);
	return 0;
}
long ackerman(int m, int n)
{c++;
if(m==0)
return n+1;
else if(m>0&&n==0)
return ackerman(m-1,1);
else if(m>0&&n>0)
return ackerman(m-1,ackerman(m,n-1));
}