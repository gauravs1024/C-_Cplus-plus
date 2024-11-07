#include<stdio.h>
#define s 9
int queue[s],rear,front,value,choice,i;
void insertion(int );
void deletion();
void display();

void main()
{
while(1)
{printf("\n\n****MENU****\n");
printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
scanf("%d",&choice);
switch(choice)
{case 1:
	printf("enter the value to be insert\n");
	scanf("%d",&value);
	insertion(value);
	break;
	case 2:
	deletion();
	break;
	case 3:
	display();
	break;
	case 4:
	exit(0);
	default:
	printf("\nwrong selection");
}
}
return 0;
}
void insertion(int value)
{if((front==0&&rear==s-1)||(front==rear+1))
{printf("OVERFLOW!!");
return;
}
if(front==-1)
{front=0;
rear=0;
}
else
{if(rear==s-1)
rear=0;
else
rear++;
}
queue[rear]=value;
}
void deletion()
{if(front==-1)
{printf("UNDERFLOW!!");
return;
}
printf("Deleted value=%d",queue[value]);
if(front==rear)
{front=-1;
rear=-1;
}
else
{if(front==s-1)
front=0;
else
front++;
}
}
void display()
{if(rear==-1)
{printf("EMPTY");
return;
}
for(i=front;i<=rear;i++)
{printf("%d\t",queue[i]);
}
}