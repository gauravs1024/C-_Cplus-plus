#include<stdio.h>
#define s 10
void insert(int);
void Delete();
void display();
int array[s],pos=-1;
int main()
{int value,choice;
for(;;)
{
	printf("\n  MENU   \n");
	printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&choice);
	switch(choice)
	{case 1:
		printf("Enter the value \n");
		scanf("%d",&value);
		insert(value);
		break;
	case 2:
	 	Delete();
	 	break;
	case 3:
	 	display();
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
{if (pos==s-1)
printf("\n stack is full\n");
else{
	pos++;
	array[pos]=value;
	printf("\ninsertion success\n");
}
}
void Delete()
{if(pos==-1)
printf("\n array is empty\n");
else
{printf("\ndeleted %d",array[pos]);
pos--;
}
}
void display()
{int i;
if(pos==-1)
printf("stack is empty\n");
else
{printf("\n stack element are:\n");
for(i=0;i<=pos;i++)
printf("%d  ",array[i]);
}
}
	 	
		