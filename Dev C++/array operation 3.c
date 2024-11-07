/*
// insertion 
#include<stdio.h>
int main()
{int s=5;
int array[s],i;
printf("insert %d value in array\n",s);
for(i=0;i<s;i++)
scanf("%d",&array[i]);
printf ("traversing of elements\n");
for(i=0;i<s;i++)
printf("%d ",array[i]);
return 0;
}*/

/*
// deletion
#include<stdio.h>
int main()
{int s=5;
int array[s],i,v,j;
printf("insert %d value in array\n",s);
for(i=0;i<s;i++)
scanf("%d",&array[i]);
printf ("enter the element to be delete\n");
scanf("%d",&v);
for(i=0;i<s;i++)
if(array[i]==v ){
	for(j=i;j<s;j++)
	array[i]=array[i+1];
	s--;
}


	
printf("after deletion the elements are\n");
for(i=0;i<s;i++)
printf("%d ",array[i]);
return 0;
}
*/

/*
//searching
#include<stdio.h>
int main()
{int s=5;
int array[s],i,v,j;
printf("insert %d value in array\n",s);
for(i=0;i<s;i++)
scanf("%d",&array[i]);
printf ("enter the element to be search\n");
scanf("%d",&v);
for(i=0;i<s;i++)
if(array[i]==v ){
	printf("element %d found at postion %d\n",v,i+1);
}

return 0;
}
*/

#include<stdio.h>
int main()
{int s=5;
int array[10],i,v,p;
array[0]=2;
array[1]=3;
array[2]=5;
array[3]=7;
array[4]=6;

	printf("elements of the array \n");
for(i=0;i<s;i++)
printf("%d ",array[i]);
printf("\nenter the element to be insert\n");
scanf("%d",&v);
printf("enter the position on to be insert\n");
scanf("%d",&p);
for(i=0;i<s;i++)
if(i==p-1){

for(i=s-1;i<p-1;i--)
array[i+1]=array[i];
}
array[p-1]=v;
s++;
for(i=0;i<s;i++)
printf("%d ",array[i]);
return 0;
}
