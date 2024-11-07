#include<stdio.h>
#include<stdlib.h>
int find_or(int x,int y)
{
	if(x==1&&y==1)
	return 1;
	if(x==1&&y==0||x==0&&y==1)
	return 1;
	if(x==0&&y==0)
	return 0;
}
int find_and(int x,int y)
{if(x==1&&x==1)
return 1;
else
return 0;
}
int find_not(int x){
if(x==1)
return 0;
else
return 1;}
int main()
{int ch,a,b;
printf("1.OR\n");
printf("2.AND\n");
printf("3.NOT\n");
printf("4.EXIT\n");
while(1)
{
	printf("enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("give two input 1 for true and 0 for false\n");
			scanf("%d%d",&a,&b);
			printf("%d",find_or(a,b));
			exit(0);
		case 2:
			printf("give two input 1 for true and 0 for false\n");
			scanf("%d%d",&a,&b);
			printf("%d",find_and(a,b));
			exit(0);
		case 3:
			printf("give an input 1 for true and 0 for false\n");
			scanf("%d",&b);
			printf("%d",find_not(a));
			exit(0);	
		case 4:
			exit(0);
		default: 
			printf("wrong choice\n");
		}
	}
}

			