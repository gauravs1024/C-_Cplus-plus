#include<stdio.h>
char digit(int ,int );
char pvalue(int);
char a[30][30];
char m[50];
void main()
{int n,r,c=0;
printf("enter any number");
scanf("%d",&n);
while(n)
{r=n%10;
n=n/10;
c++;
}
}
char digit(int d,int c)
{
switch (d)
case 1:
	a[0][]="ONE";
	
	break;
case 2:
	a[1][]="TWO";
	break;
case 3:
	a[2][]="THREE";
	break;
case 4:
	a[3][]="FOUR";
	break;
case 5:
	a[4][]="FIVE";
	break;
case 6:
	a[5][]="SIX";
	break;	
case 7:
	a[6][]="SEVEN";
	break;
case 8:
	a[7][]="EIGHT";
	break;
case 9:
	a[8][]="NINE";
	break;	
}
char pvalue(int a)
{
switch(a)
{
case 1:
	m[]="one";
	break;
case 2:
	m[]="ten";
	break;
case 3:
	m[]="hundred";
	break;
case 4:
	m[]="thousand";
	break;
case 5:
	m[]="ten thousand";
	break;	
case 6:
	m[]="lakh";
	break;
case 7:
	m[]="ten lakh";
	break;		
}
							
	



