#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
};
typedef struct node NODE;
NODE *p=NULL,*top;
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
p->prev=NULL;
if(p==NULL)
{printf("empty\n");
top=p;
return;
}

printf("enter data\n");
scanf("%d",&p->data);
p->prev=top;
top=p;
}
void deletion()
{if(top==NULL)
{printf("empty\n");
return;
}
p=top;
printf("deleted value %d \n",p->data);
top=top->prev;
free(p);
}
void show()
{if(top==NULL)
{printf("empty\n");
return;
}
printf("show all data\n");
for(p=top;p!=NULL;p=p->prev)
printf("%d \n",p->data);
printf("\n");
}
