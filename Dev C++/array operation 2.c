#include<stdio.h>
#define s 10
void insert(int);
void Delete();
void Display();
int array[s],pos=-1;
int main()
{int value,choice;
for(;;)
{printf("\n MENU\n");
printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
scanf("%d",&choice);
switch(choice)
{case 1:
	printf("enter the value\n");
	scanf("%d",&value);
	break;
case 2:
Delete();
break;
case 3:
Display();
break;
case 4:
exit(0);
default:
printf("wrong selection\n");
}
} 

return 0;
}
void insert(int value)
{if(pos==s-1)
printf("\narray is full\n");
else{
	pos++;
	array[pos]=value;
	printf("\n insertion succes\n");
}
}
void Delete()
{if(pos==-1)
printf("\narray is empty\n");
else
{printf("\narray elemnt are:\n");
for(int i=0;i<=pos;i++)
printf("%d",array[i]);
}
}
void Display()
{for(int i=0;i<=pos;i++)
printf("%d\n",array[i]);
}



