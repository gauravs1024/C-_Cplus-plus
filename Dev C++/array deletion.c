#include<stdio.h>
void main()
{int a[10],i,j,n,p;
printf("enter the number of elements in array\n");
scanf("%d",&n);
printf("\n enter the elements in array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n enter the elements to be search\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{  
 if(a[i]==n){
 printf("the element %d found at pos %d ",n,i+1);
 break;
}
}
/*printf("\n array after the deletion\n");
for(i=0;i<n-1;i++)
printf("%d ",a[i]);*/
}