#include<stdio.h>
int main()
{int a[10],b[10],c[10],i,j=0,in[20],u[20],m,n,k,l,z=0;
printf("ENTER NUMBER OF ELEMNTS IN SET A");
scanf("%d",&m);
printf("ENTER ELEMENTS IN SET A\n");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("ENTER NUMBER OF ELEMNTS IN SET B");
scanf("%d",&n);
printf("ENTER ELEMENTS IN SET B\n");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
//logic of intersection
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{if(a[i]==b[j])
{in[z]=a[i];
z++;
}
}
}
printf("INTERSECTION OF SETS A B\n");
for(i=0;i<z;i++)
printf("%d\n",in[i]);
//logic for  union
j=0;
for(i=0;i<m;i++)
{u[j]=a[i];
j++;
}
for(i=0;i<n;i++)
{u[j]=b[i];
j++;
}
l=m+n;
for(i=0;i<l;i++)
{for(j=i+1;j<l;j++)
{if(u[i]==u[j])
{for(int k=j;k<l;k++)
{u[k]=u[k+1];
}j--;
l--;
}
}}
printf("UNION OF SETS \n");
for(i=0;i<l;i++)
printf("%d\n",u[i]);

printf("l=%d,z=%d\n",l,z);


//logic for difference
for(i=0;i<l;i++)
{for(j=0;j<z;j++)
{if(u[i]==in[j])
{for(k=i;k<l;k++)
u[k]=u[k+1];
l--;
i--;
}
}
}


printf("SYMMETRIC DIFFERENCE OF SETS A B\n");
for(i=0;i<l;i++)
printf("%d\n",u[i]);

}

