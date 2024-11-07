#include<stdio.h>
#include<stdlib.h>
int main(){
printf("enter no of elements");
int count,sum=0 ,i;
scanf("%d", &count);
int *arr=(int*)malloc(sizeof(int)*count);
for(i=0;i<count;i++)
{arr[i]=i;
sum+=arr[i];}
printf("array sum %d",sum);
return 0;
}
