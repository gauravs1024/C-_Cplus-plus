#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{char a[50];
int up=0,lw=0,sp=0,sl=0,t=0,nu=0,i=0;
printf("make your password\n");
gets(a);
for(i=0;a[i]!='\0';i++)
{t++;
if(isdigit(a[i]))
nu++;
else if(isupper(a[i]))
up++;
else if(islower(a[i]))
lw++;
else if(isspace(a[i]))
sp++;


}
printf("up=%d ,lw=%d,nu=%d,sl=%d,sp=%d,t=%d\n",up,lw,nu,sl,sp,t);
if(t<6||up==0||lw==0||sp!=0||nu==0)
printf("INVALID PASSWORD\n");
else 
printf("PASSWORD VALID\n");
return 0;
}