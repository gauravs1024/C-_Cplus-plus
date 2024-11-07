
#include<stdio.h>
int main()
{int i,j,s,n;
printf("enter a number\n");
scanf("%d",&n);
for(j=1;j<=n;j++){// for rows
for(s=n;s>=j;s--)// for space print
printf(" ");
for(i=1;i<=j*2-1;i++)// for '*' print
printf("*");
printf("\n");}
return 0;
}

/*
//#include<math.h>
#include<stdio.h>
int main()
{int i,j,s,n;
long p=1;
printf("enter a number\n");
scanf("%d",&n);
for(j=1;j<=n;j++){// for rows
for(s=n;s>=j;s--)// for space print
printf(" ");
//for(i=1;i<=j*2-1;i++)// for '*' print
printf("%d",p);
p=p*11;
printf("\n");}
return 0;
}
*/