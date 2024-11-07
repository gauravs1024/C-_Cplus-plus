//prime or not  with logic 2
#include<stdio.h>
int main()
{int a,c=0,i;
printf("enter a  number\n");
scanf("%d",&a);
for(i=2;i<a/2;i++)
{if(a%i==0)
c++;
}
if(c==0)
printf("the given number is prime \n");
else
printf("the given number is not prime\n");
return 0;
}
