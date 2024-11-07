#include<stdio.h>
#include<conio.h>
void mergesort(int [],int, int, int);
void partition(int[],int, int);
int main()
{int a[50],i,size;
//clrscr();
printf("enter total numberof elements\n");
scanf("%d",&size);
printf("enter the elements\n");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
partition(a,0,size-1);
printf("after merge sort\n");
for(i=0;i<size;i++)
{
printf("%d ",a[i]);
}
//getch();
return 0;
}
void partition(int a[],int first,int last)
{
int mid;
if(first<last)
{mid=(first+last)/2;
partition(a,first,mid);
partition(a,mid+1,last);
mergesort(a,first,mid,last);
}
}
void mergesort(int a[],int first,int mid,int last)
{int i,j,k;
int b[50];
i=first;
j=mid+1;
k=first;
while(i<=mid&&j<=last)
{
if(a[i]<=a[j])
{
b[k]=a[i];
i++;
}
else
{
b[k]=a[j];
j++;
}
k++;
}
if(i>mid)
{
while(j<=last)
{
b[k]=a[j];
j++;
k++;
}
}
else
{
while(i<=mid)
{
b[k]=a[i];
i++;
k++;
}
}
for(k=first;k<=last;k++)
a[k]=b[k];
}
