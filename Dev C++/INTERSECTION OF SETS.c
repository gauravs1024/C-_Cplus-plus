#include<stdio.h>
void main()
{int m,n,i,j;
int a[10],b[10],in[10],k=0;
printf("ENTER THE NO.ELEMENTS IN SET A\n");
scanf("%d",&m);
printf("ENTER ELEMENTS IN SET A\n");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("ENTER THE NO.ELEMENTS IN SET B\n");
scanf("%d",&n);
printf("ENTER ELEMENTS IN SET B\n");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
//logic
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{if(a[i]==b[j])
{in[k]=a[i];
k++;
}
}
}
printf("INTERSECTION OF SET A AND B\n");
for(i=0;i<k;i++)
printf("%d\n",in[i]);
}



