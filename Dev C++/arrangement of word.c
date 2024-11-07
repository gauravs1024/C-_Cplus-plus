/*
#include<stdio.h>
#include<string.h>
void swap( char [],int, int);
int main()
{int i,j,k=3,l=1,o=0;
char a[20];
printf("enter the string\n");
gets(a);
for(i=0;i<4;i++)
{
for(j=0;j<6;j++)//j<5
{
	printf("%d  =",j);

if(j==0||j==3)
swap(a,2,3);
else if(j==1||j==4)
swap(a,1,2);
else
swap(a,1,3);


puts(a);}
printf("\n");

if(i==0)
swap(a,0,1);
else if(i==1)
swap(a,0,2);
else if(i==2)
swap(a,0,3);
puts(a); //it consist of manual swapping

}

return 0;
}

void swap(char a[] ,int k ,int m)
{char t;
t=a[k];
a[k]=a[m];
a[m]=t;
}
*/


#include<stdio.h>
#include<string.h>
void swap( char [],int, int);
int main()
{int i,j,k=3,l=1,o=0,p,q;
char a[20];
printf("enter the string\n");
gets(a);
for(i=0;i<4;i++)
{p=1;q=3;
for(j=0;j<6;j++)//j<5
{
	printf("%d  =",j);
/*
if(j==2||j==5)
swap(a,2,3);
else if(j==0||j==3)
swap(a,1,2);
else if(j==1||j==4)
swap(a,1,3);

*/


puts(a);}
printf("\n");

if(i==0)
swap(a,0,1);
else if(i==1)
swap(a,0,2);
else if(i==2)
swap(a,0,3);
puts(a); //it consist of manual swapping

}

return 0;
}

void swap(char a[] ,int k ,int m)
{char t;
t=a[k];
a[k]=a[m];
a[m]=t;
}