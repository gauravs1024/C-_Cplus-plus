#include<stdio.h>
void quicksort(int[],int,int);
int main()
{int a[50];
int size ,i;
printf("enter the number of elements\n");
scanf("%d",&size);
printf("enter the elements to be sorted\n");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
quicksort(a,0,size-1);
printf("after applying quick sort\n");
for(i=0;i<size;i++)
printf("%d ",a[i]);
printf("\n");
return 0;
}
void quicksort(int arr[],int first,int last)
{int key,i,j,temp;
if(first<last)
{key=first;
i=first;
j=last;
while(i<j)
{while(arr[i]<=arr[key]&&i<=last)
{i++;
}
while(arr[j]>arr[key]&&j>=first)
{j--;
}
if(i<j)
{temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
temp=arr[j];
arr[j]=arr[key];
arr[key]=temp;
quicksort(arr,first,j-1);
quicksort(arr,j+1,last);
}
}
