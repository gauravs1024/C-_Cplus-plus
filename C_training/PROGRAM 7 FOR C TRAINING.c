//to check a number is pallindrome or not
/*#include<stdio.h>
int main()
{int m=0,n,r,t;
printf("enter a  number\n");
scanf("%d",&n);
t=n;
while(n)
{r=n%10;
m=m+r*10;
n=n/10;
}
if(m==t)
printf("the given number is pallindrome\n");
else
printf("the given number is not pallindrome\n");

return 0;
}
*/
/*
//fibonacci series
#include<stdio.h>
int main()
{int n,a=0,b=1,c,i;
printf("enter a number\n");
scanf("%d",&n);
printf("%d %d ",a,b);
for(i=1;i<=n-2;i++)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
}
return 0;
}
*/
/*
//string pallindroem
#include<stdio.h>
#include<string.h>
int main()
{char a[20],b[20];
printf("enter a string\n");
gets(a);
strcpy(b,a);
strrev(a);
if(strcmp(a,b)==0)
printf("the entered string is pallindrome\n");
else
puts(a);
printf("the entered string is not pallindrome\n");
return 0;
}
*/
//largest among n digit
#include<stdio.h>
int main()
{int a[20],i,j,n,m;
printf("enter a number\n");
scanf("%d",&n);
printf("enter %d numbers\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
a[0]=m;
for(i=0;i<n;i++)
{if(a[i]>m)
m=a[i];
}
printf("%d is the maximum value",m);
return 0;
}