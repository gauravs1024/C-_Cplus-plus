#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next,*prev;
};
typedef struct node NODE;
NODE *p,*q,*r,*start=NULL;
NODE *getnode();
void impl();
void traverse();
void insertbeg();
void insertend();
void insertany();
void deletebeg();
void deleteend();
void deleteany();

int main()
{
int choice;
for(;;)
{
printf("1.IMPLEMENTATION/CREATION\n");
printf("2.TRAVERSE\n");
printf("3.INSERT AT BEGINING\n");
printf("4.INSERT AT ENDING\n");
printf("5.INSERT AT ANYWHERE\n");
printf("6.DELETE AT END\n");
printf("7.DELETE AT BEGINING\n");
printf("8.DELETE AT ANYWHERE\n");
printf("9.EXIT\n");
printf("$$$$$ ENTER YOUR CHOICE $$$$$\n");
scanf("%d",&choice);
switch(choice)
{case 1:
	impl();
	break;
case 2:
	traverse();
	break;
case 3:
	insertbeg();
	break;
case 4:
	insertend();
	break;
case 5:
	insertany();
	break;
case 6:
	deleteend();
	break;
case 7:
	deletebeg();
	break;
case 8:
	deleteany();
	break;
case 9:
	exit(0);
default:
printf("XXX INVALID CHOICE XXX\n");
}
}
return 0;
}

NODE *getnode()
{NODE *ptr;
ptr=(NODE*)malloc(sizeof(NODE));
return ptr;
}

void impl()
{int n,i;
printf("ENter no. of nodes\n");
scanf("%d",&n);
printf("enter %d NODE's data",n);
for(i=1;i<=n;i++)
{p=getnode();
printf("enter data");
scanf("%d",&p->data);
	p->next=p->prev=NULL;
	if(start==NULL)
	start=p;
	else{
	q->next=p;
	q->prev=q;
}
q=p;
}
}
void traverse()
{if(start==NULL) {
printf("linked list is not created\n");
return;
}printf("show all nodes data\n");
for(p=start;p!=NULL;p=p->next)
printf("%d\t",p->data);
}

void btraverse()
{if(start==NULL)
{printf("linked list is not created");
return;
}
else
for(q=start;q->next!=NULL;q=q->next);
for(p=q;p!=NULL;p=p->prev)
printf("%d\n",p->data);
}

void insertbeg()
{if(start==NULL){
printf("linked list is not created\n");
return;
}
p=getnode();
printf("eneter data\n");
scanf("%d",&p->data);
p->next=start;
start->prev=p;
start=p;
}

void insertend()
{if(start==NULL){
printf("linked list is not created\n");
return;
}
p=getnode();
printf("enter data\n");
scanf("%d",&p->data);
for(q=start;q->next!=NULL;q=q->next);
q->next=p;
p->prev=q;
p->next=NULL;
}
void insertany()
{if(start==NULL)
{printf("linked list not created");
return;
}
p=getnode();
p->prev=NULL;
p->next=NULL;
printf("enter data\n");
scanf("%d",&p->data);
int pos;
printf("enter position\n");
scanf("%d",&pos);
q=start;
while(pos>1)
{r=q;
q=q->next;
pos--;
}
r->next=p;
p->prev=r;
p->next=q;
q->prev=p;
}
void deletebeg()
{if(start==NULL) 
{printf("linked list not created\n");
return;
}
p=start;
start=p->next;
start->prev=NULL;
free(p);
}
void deleteend()
{if(start==NULL)
{printf("linked list not created");
return;
}
for(q=start;q->next!=NULL;q=q->next)
r=q;
r->next=NULL;
free(p);
}
void deleteany()
{if(start==NULL)
{printf("linked list not craeted\n");
return;
}

int pos;
printf("enter position\n");
scanf("%d",&pos);
q=start;
while(pos>1)
{r=q;
q=q->next;
pos--;
}
p=q->next;
r->next=p;
p->prev=r;

free(q);
}




