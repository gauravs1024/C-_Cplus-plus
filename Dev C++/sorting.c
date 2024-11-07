#include<stdio.h>
#include"sorting.h"
#include<string.h>
int main()
{int i,j,n,m,t;
char a[50];
printf("enter the number of elements in array\n");
scanf("%d",&n);
printf("enter elements in array\n");
//for(i=0;i<n;i++)
//scanf("%d",&a[i]);
gets(a);
 bsort(a,n);


printf("sorted array ");
//for(i=0;i<n;i++)
//printf("%d ",a[i]);
puts(a);
return 0;
}
