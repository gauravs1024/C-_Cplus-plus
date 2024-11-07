#include<stdio.h>
#define s 10
void push(int);
void pop();
void display();
int stack[s],top=-1;
int main()
{int value,choice;
for(;;)
{
	printf("\n  MENU   \n");
	printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&choice);
	switch(choice)
	{case 1:
		printf("Enter the value \n");
		scanf("%d",&value);
		push(value);
		break;
	case 2:
	 	pop();
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
void push(int value)
{if (top==s-1)
printf("\n stack is full\n");
else{
	top++;
	stack[top]=value;
	printf("\ninsertion success\n");
}
}
void pop()
{if(top==-1)
printf("\n stack is empty\n");
else
{printf("\ndeleted %d",stack[top]);
top--;
}
}
void display()
{int i;
if(top==-1)
printf("stack is empty\n");
else
{printf("\n stack element are:\n");
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}
}
	 	
		