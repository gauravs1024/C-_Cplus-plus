#include<stdio.h>
#include<math.h>
 int main()
 {int num;
 int ivar;
 float fvar;
 printf("enter an integer number\n");
 scanf("%d",&num);
 fvar=sqrt((double)num);
 ivar=fvar;
 
 if(ivar==fvar)
 	printf("%d is a perfect number\n",num);
 else
 	printf("%d is not a perfect number\n",num);
	 return 0;
}
 