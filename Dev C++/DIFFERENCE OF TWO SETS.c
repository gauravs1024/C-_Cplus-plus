#include<stdio.h>
void main()
{int i,j,k=0,a[50],b[50],c[100],m,n;
printf("ENTER THE NUMBER OF ELEMENTS IN SET A\n");
scanf("%d",&m);
printf("ENETER ELEMENTS IN SET A\n");
for(i=0;i<m;i++)
{scanf("%d",&a[i]);
}
printf("ENTER THE NUMBER OF ELEMENTS IN SET B\n");
scanf("%d",&n);
printf("ENTER ELEMENTS IN SET B\n");
for(i=0;i<n;i++)
{scanf("%d",&b[i]);
}
//LOGIC
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{if(a[i]==b[j])
{for(k=i;k<m;k++)
a[k]=a[k+1];
m--;
i--;
}
}
}
printf("DIFFERENCE OF SETS A-B\n");
for(i=0;i<m;i++)
printf("%d\n",a[i]);
}

	