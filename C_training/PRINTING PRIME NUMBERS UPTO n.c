//to print prime numbers upto n 
#include<stdio.h>
int main()
{int a,i,j,c,;
printf("enter a number\n");
scanf("%d",&a);
for(i=2;i<=a;i++)
{
c=0;
for(j=2;j<i;j++)
{if(i%j==0)
c++;
}
if(c==0){
printf("%d\n",j);
}
}


return 0;
}

