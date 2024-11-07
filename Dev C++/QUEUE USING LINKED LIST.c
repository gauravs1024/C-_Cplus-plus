#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *p,*front=NULL,*rear=NULL;
void insert();
void deletion();
void show();
NODE *getnode()
{p=(NODE*)malloc(sizeof(NODE));
return p;
}
int main()
{int c;
printf("queue using linked list\n");
while(1)
{printf("choose any one\n");
printf("1.insertion\n");
printf("2.deletion\n");
printf("3.show elements\n");
printf("4.EXIT!\n");
scanf("%d",&c);
switch(c)
{case 1:
	insert();
	break;
case 2:
	deletion();	
	break;
case 3:
	show();
	break;
case 4:
	exit(0);
default:
	printf("wrong choice try again\n");
}}
return 0;
}

void insert()
{p=getnode();
if(p==NULL)
{printf("overflow\n");
return;
}
printf("enter data\n");
scanf("%d",&p->data);
p->next=NULL;
if(rear==NULL)
{front =p;
rear=p;
}
else
{rear->next=p;}
rear=p;}
void deletion()
{if(front==NULL)
{printf("underflow\n");
return;
}
p=front;
printf("deleted value %d",p->data);
free(p);
}
void show()
{if(rear==NULL)
{printf("empty\n");
return;
}
printf("show all data\n");
for(p=front;p!=NULL;p=p->next)
printf("%d ",p->data);
printf("\n");
}
