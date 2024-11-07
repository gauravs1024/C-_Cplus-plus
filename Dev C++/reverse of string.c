#include<stdio.h>
#include<string.h>
void main()
{char a[100],t;
int i=0,j=0,n,k;
printf("enter the string\n");
gets(a);
j=strlen(a)-1;
while(i<j)
{t=a[j];
a[j]=a[i];
a[i]=t;
i++;
j--;}

printf("\n the reversed string\n");
puts(a);
}