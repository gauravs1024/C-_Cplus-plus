#include<stdio.h>
void oned();
void twod();
void threed();
int address;
int main()
{int choice;
printf("choose any one\n");
printf("1.one dimensional array\n");
printf("2.two dimensional array\n");
printf("3.three dimensional array\n");
scanf("%d",&choice);
switch(choice)
{case 1:
	oned();
	break;
case 2:
twod();
break;
case 3:
	break;
threed();
default:
	printf("wrong input\n");
}
	return 0;
}

void oned(){
	int b;int x;int w;int lb=0,i;
printf("enter baseaddress\n");
scanf("%d",&b);
printf("enter index at where address is to find\n");
scanf("%d",&i);
printf("enter the size of each element\n");
scanf("%d",&w);
printf("enter lower bound of the array\n");
scanf("%d",&lb);
address=b+w*(i-lb);
printf("address=%d",address);
}
void twod()
{	int b,w,lr,lc,n,m,i,j;
	printf("enter base address of 2d array\n");
	scanf("%d",&b);
	printf("enter the size of each element of 2d array\n");
	scanf("%d",&w);
	printf("enter the lower bound of row\n");
	scanf("%d",&lr);
	printf("enter the lower bound of column\n");
	scanf("%d",&lc);
	printf("enter the no. of row\n");
	scanf("%d",&m);
	printf("enter the no of column\n");
	scanf("%d",&n);
	printf("enter the index of row to find the address\n");
	scanf("%d",&i);
	printf("enter the index of colomn to find the address\n");
	scanf("%d",&j);
	address=b+w*(i-lr)*n+(j-lc);
	printf("row major=%d",address);
	address=b+w*(i-lr)*m+(j-lc);
	printf("column major=%d",address);
}

void threed()
{int b,w,x,y,z,m,n,p,i,j,k;
	printf("enter base address of 2d array\n");
	scanf("%d",&b);
	printf("enter the size of each element of 2d array\n");
	scanf("%d",&w);
	printf("enter the lower bound of row\n");
	scanf("%d",&x);
	printf("enter the lower bound of column\n");
	scanf("%d",&y);
	printf("enter the lower bound of width\n");
	scanf("%d",&z);
	printf("enter the no. of cells in row\n");
	scanf("%d",&m);
	printf("enter the no  of cells in column\n");
	scanf("%d",&n);
	printf("enter the no of cells in depth\n");
	scanf("%d",&p);
	printf("enter the index of row to find the address\n");
	scanf("%d",&i);
	printf("enter the index of colomn to find the address\n");
	scanf("%d",&j);
//	printf("enter the index of width to find the address\n");
//	scanf("%d",&k);
	address=b+w*(m*n*(i-x)+n*(j-y)+(k-z));
	printf("address in row major %d\n",address);
	address=b+w*(m*n*(i-x)+m*(k-z)+(j-y));
	printf("address in column major %d",address);
	
}