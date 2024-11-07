#include<stdio.h>
#include"sorting.h"
#include<string.h>
int main()
{int a[100],t;
int i=0,j=0,n,k;
printf("enter the string\n");
gets(a);
n=strlen(a)-1;
/*for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{if(a[j]>a[j+1])
{t=a[j];
a[j]=a[j+1];
a[j+1]=t;}
}}*/
countingsort(a,n);
printf("\n the sorted string\n");
puts(a);
return 0;
}