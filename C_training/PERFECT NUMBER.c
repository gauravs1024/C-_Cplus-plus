/*
//perfect number
#include<stdio.h>
int main()
{int a,i,c=0;
printf("enter a number\n");
scanf("%d",&a);
for(i=1;i<=a/2;i++)
{
if(a%i==0)
c=c+i;}
if(c==a)
printf("%d is a perfect number",a);
else
printf("%d is  not a perfect number",a);
return 0;
}
*/
/*
//armstrong number
#include<stdio.h>
#include<math.h>
int main()
{int a,b,c=0,s=0,r;
printf("enter a number\n");
scanf("%d",&a);
b=a;
while(a)
{c++;
a=a/10;
}
a=b;
while(a)
{r=a%10;
s=s+pow(r,c);
a=a/10;
}
if(s==b)
printf("%d is a armstsrong number",b);
else
printf("%d is  not a armstsrong number",b);
return 0;
}
*/

/*
//strong number
int fact(int a)
{int f=1;
while(a)
{f=f*a;
a--;
}
return f;
}
#include<stdio.h>
int main()
{int a,b,c=0,s=0,r;
printf("enter a number\n");
scanf("%d",&a);
b=a;
while(a)
{r=a%10;
s=s+fact(r);
a=a/10;
}
if(s==b)
printf("%d is a strong number",b);
else
printf("%d is  not a strong number",b);
return 0;
}
*/
/*
//neon number
#include<stdio.h>
int main()
{int a,b,p,s=0,r;
printf("enter a number\n");
scanf("%d",&a);
b=a;
p=a*a;
while(p)
{
r=p%10;
s=s+r;
p=p/10;
}
if(s==b)
printf("%d is a neon number",b);
else
printf("%d is  not a neon number",b);
return 0;
}
*/
/*
//automorphic number
#include<stdio.h>
int main()
{int a,b,c=0,m,p,r,i=1;
printf("enter a number\n");
scanf("%d",&a);
b=a*a;
p=a;
printf("%d",b);
while(a)
{c++;
a=a/10;
}
printf("c=%d\n",c);
while(c)
{r=b%10;
m=r*i+m;
b=b/10;
c--;
i=i*10;
}
printf("m=%d\n",m);
if(m==p)
printf("%d is a automorphic number",p);
else
printf("%d is  not a automorphic number",p);
return 0;
}
*/
/*
//spy number
#include<stdio.h>
int main()
{int a,p=1,s=0,i,j,c;
printf("enter a number\n");
scanf("%d",&a);
for(i=2;i<a;i++)
{
c=0;
for(j=2;j<i;j++)
{if(i%j==0)
c++;
}
if(c==0&&a%j==0){
printf("%d\n",j);
s=s+j;
p=p*j;
}
}
printf("s=%dp=%d\n",++s,p);
if(a==s&&a==p)
printf("%d is a spy number",a);
else
printf("%d is  not a spy number",a);
return 0;
}
*/
/*
// happy number
#include<stdio.h>
int main()
{int a,i,res;
printf("enter a number\n");
scanf("%d",&a);
int sump(int x)
{int s=0,i=0,c,r;
c=x;
	while(x)
	{r=x%10;
	s=s+r*r;
	x=x/10;
	}
	printf("sum=%d\n",s);
	return s;
	
}
res=a;
for(i=1;i<8;i++)
{res=sump(res);
if(res==1){
printf("the given number is happy number\n");
break;}
}

if(res!=1)
printf("the given number is not happy number");
return 0;
}
*/

#include<stdio.h>
#include<math.h>
int main()
{int a,x,i,count[20]={0},k=0,sum=0,b,c,j;
printf("enter a number\n");
scanf("%d",&a);
b=a+1;
for(i=2;i<=a;i++)
{
c=0;
for(j=2;j<i;j++)
{if(i%j==0)
c++;
}
if(c==0){
	while(1){
if(b%c==0){
count[k]++;//counts the total no. of dividend
printf("%d",count[k]);}
}
k++;
}
}
for(i=0;i<k;i++)
sum=sum+count[k];
if(sum%2==0)
printf("the number is sunny number\n");
else
printf("the number is not sunny number\n");
return 0;
}