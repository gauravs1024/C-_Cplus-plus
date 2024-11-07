#include<stdio.h>
#include"sorting.h"
int smallest(int a,int i,int n)
{int s=a[i],j,p;
for(j=i;j<n;j++)
{if(a[i]>s)
{s=a[i];
p=i;
}
}
return p;
}
void main()
{int a[]={2,3,6,1,8,3,9},i,j,n,t,p;
n=7;
for(i=0;i<n;n++)
{p=smallest(a,i,n);
t=a[i]
a[i]=a[p];
a[p]=t;

selsort(a,7);
for(i=0;i<n;i++)
printf("%d ",a[i]);
}



