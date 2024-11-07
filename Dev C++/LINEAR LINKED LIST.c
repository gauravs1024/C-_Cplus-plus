#include<stdio.h>
#include<stdlib.h>
struct node
{	int data;
	struct node *next;
};
typedef struct node NODE;
NODE* getnode();
void implementation();
void traverse();
NODE *start=NULL,*p,*q;
int main()
{int choice;
for(;;)
{	printf("press 1 for implementation\n");
	printf("press 2 for traverse\n");
	printf("press 3 for exit\n");
	printf("press your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{case 1:
		implementation();
		break;
	case 2:
		traverse();
		break;
	case 3:
		exit(0);
	default:
	printf("invalid choice\n");
	
}
}
return 0;
}
NODE* getnode()
{NODE *ptr;
ptr=(NODE*)malloc(sizeof(NODE));
return ptr;
}
void implementation()
{int n,i;
printf("enter number of node\n");
scanf("%d",&n);
printf("enter %d node's data:\n",n);
for(i=0;i<n;i++)
{p=getnode();
printf("enter data\n");
scanf("%d",&p->data);
p->next=NULL;
if(start==NULL)
start=p;
else
q->next=p;

q=p;

}
	}
void traverse()
{if(start==NULL)
	{printf("plz create linked list first\n");
	return;
}		
printf("show all nodes data\n");
for(p=start;p!=NULL;p=p->next)
printf("%d\t",p->data);
printf("\n");
}
