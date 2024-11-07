#include<stdio.h>
#include<conio.h>
void main()
{
	int n,count=0,i=0;
	char a[20];
	gets(a);
//n=	strlen(a);
while(a[i]=='\0')
{count++;
i++;}
printf("%d",count);
}