#include<stdio.h>
#define size 10
void enqueue(int);
void dequeue();
void display();
int queue[size],front =-1,rear=-1;
int main()
{int value ,choice;
while(1)
{printf("\n\n****MENU****\n");
printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
scanf("%d",&choice);
switch(choice)
{case 1:
	printf("enter the value to be insert\n");
	scanf("%d",&value);
	enqueue(value);
	break;
	case 2:
	dequeue();
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
void enqueue(int value)
{if(rear==size-1)
printf("\nqueue is fill");
else
{
	if(front==-1)
	front=0;
	rear++;
	queue[rear]=value;
	printf("\n Insertion success");
}
}

void dequeue()
{if(front==-1||front>rear)
{
	printf("\nQueue is empty");
	return;
}
else{
printf("\n deleted %d",queue[front]);
front++;
}
}
void display()
{if(rear==-1)
printf("\nqueue is empty");
else
{int i;
printf("\n queue elements are \n");
for(i=front;i<=rear;i++)
printf("%d\t",queue[i]);
}
}

		