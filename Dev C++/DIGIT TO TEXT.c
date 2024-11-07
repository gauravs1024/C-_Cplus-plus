#include<stdio.h>
int main()
{int n,i,a[30],c=0;
printf("enter a number\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{a[i]=n%10;
n=n/10;
c++;
}
for(i=c;i<0;i--)
{if(c==1)
num(a[i]);
else if(c==2)

	
	
printf("%d\n",a[i]);
}

return 0;
}
char * num(int a)
{
if(a==1)
printf("one");
else if(a==2)
printf("two");
else if(a==3)
printf("three");
else if(a==4)
printf("four");
else if(a==5)
printf("five");
else if(a==6)
printf("six");
else if(a==7)
printf("seven");
else if(a==8)
printf("eight");
else if(a==9)
printf("nine");
}

