#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next,*prev;
};
typedef struct node NODE;
NODE *getnode()
{NODE *ptr;
ptr=(NODE*)malloc(sizeof(NODE));
return ptr;
}
NODE *start,*p,*q,*r;
void impl() {
	int n,i;
	printf("enter number of node");
	scanf("%d",&n);
	printf("enter %d nodes data\n",n);
for(i=1;i<=n;i++)
{p=getnode();
printf("enter data\n");
scanf("%d",&p->data);
p->next=p->prev=NULL;
if(start==NULL){
start=p;
p->next=start;
p->prev=start;
}
else
{q->next=p;
p->prev=q;
p->next=start;
start->prev=p;
}
q=p;
}
}
void ftraverse()
{p=start;
do
{printf("%d\t",p->data);
p=p->next;
}while(p!=start);
printf("\n");
}
void btraverse()
{q=start->prev;
do
{printf("%d\t",q->data);
q=q->prev;
}
while(q!=start->prev);
printf("\n");
}
void insertbeg()
{if(start==NULL)
{printf("linked list not created\n");
return;
}
p=getnode();
printf("enter data");
scanf("%d",&p->data);
p->next=p->prev=NULL;
q=start->prev;
p->next=start;
start->prev=p;
start=p;
start->prev=q;
q->next=start;

}
void insertend()
{if(start==NULL)
{printf("linked list not created\n");
return;
}
p=getnode();
printf("enter data");
scanf("%d",&p->data);
p->next=p->prev=NULL;
q=start->prev;
q->next=p;
p->prev=q;
p->next=start;
start->prev=p;
}
void insertany()
{int pos;
if(start==NULL)
{printf("linked list is not created");
return;
}
p=getnode();
p->next=NULL;
p->prev=NULL;
printf("enter data\n");
scanf("%d",&p->data);
printf("enter position\n");
	scanf("%d",&pos);
	q=start;
	while(pos>1)
	{r=q;
	q=q->next;
	pos--;
}
r->next=p;
p->next=q;
q->prev=p;
p->prev=r;

}
void deletebeg()
{if(start==NULL){
printf("linked list is not created\n");
return;
}
p=start;
q=start->prev;
start=p->next;
start->prev=q;
q->next=start;
free(p);
}

void deleteend()
{if(start==NULL)
{printf("linked list is not created");
return;
}
p=start->prev;
q=p->prev;
start->prev=q;
q->next=start;
free(p);
}
void deleteany()
{int pos;
if(start==NULL)
{printf("linked list is not created\n");
return;
}
printf("enter the positin to be delete node\n");
scanf("%d",&pos);
p=start;
while(pos>1)
{
p=p->next;
pos--;}
r=p->prev;
q=p->next;
r->next=q;
q->prev=r;
}



int main()
{int choice;
for(;;)
{
printf("doubly circular linked list\n");
printf("1.implement linked list\n");
printf("2.forward traverse\n");
printf("3.backward traverse\n");
printf("4.insert at begining\n");
printf("5.insert at ending\n");
printf("6.insert at anywhere\n");
printf("7.delete at begining\n");
printf("8.delete at ending\n");
printf("9.delete at anywhere\n");
printf("10.EXIT\n");
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{case 1:
	impl();
	break;
case 2:
	ftraverse();
	break;
case 3:
	btraverse();
	break;
case 4:
	insertbeg();
	break;
case 5:
	insertend();
	break;
case 6:
	insertany()	;
	break;
case 7:
	deletebeg();
	break;
case 8:
	deleteend();
	break;
case 9:
	deleteany();
	break;	
case 10:
	exit(0);
				
default:
printf("wrong choice");
}
}
return 0;
}



