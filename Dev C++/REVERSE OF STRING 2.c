#include<stdio.h>
#include<string.h>
int main()
{char a[30],b[30];int n,i,j;
printf("ENTER A STRING\n");
gets(a);
n=strlen(a)-1;
for(i=n,j=0;i>=0;i--,j++)
b[j]=a[i];
b[j]='\0';
puts(b);
}