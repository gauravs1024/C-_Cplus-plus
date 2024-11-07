#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
 struct node *next;
};
typedef struct node NODE;
NODE *start,*q,*p,*r;
NODE * getnode();
void imp();
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
	imp();
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
void imp()
{int n;
printf("ENTER NO. OF NODE");
scanf("%d",&n);
printf("ENTER %d NODE'S DATA\n",n);
for(int i=0;i<n;i++)
{p=getnode();
printf("ENTER DATA\n");
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
 {printf("LINKED LIST IS NOT CREATED\n");
 return ;
}
printf("SHOW ALL NODE'S DATA\n");
for(p=start;p!=NULL;p=p->next)
printf("%d\t",p->data);
printf("\n");
}
void insertbeg()
{if(start==NULL)
{
printf("create linked list first\n");
return;
}
p=(NODE*)malloc(sizeof(NODE));
printf("ENTER DATA\n");
scanf("%d",&p->data);
p->next=start;
start=p;
}
void insertend()
{if(start==NULL)
{printf("CREATE LINKED LIST\n");
return;
}
else 
{
for(p=start;p->next!=NULL;p=p->next);

q=(NODE*)malloc(sizeof(NODE));
printf("ENTER DATA\n");
scanf("%d",&q->data);
q->next=NULL;
p->next=q;
}
}
void insertany()
{int pos;
if(start==NULL)
{printf("create linked list fist\n");
return;
}
else
{
	printf("enter position\n");
	scanf("%d",&pos);
	q=(NODE*)malloc(sizeof(NODE));
	printf("enter data\n");
	scanf("%d",&q->data);
	q->next=NULL;
	p=start;
	while(pos>1)
	{
	r=p;
	p=p->next;
	pos--;
	}
	r->next=q;
	q->next=p;
}
}
void deletebeg()
{if(start==NULL)
{printf("create list first\n");
return;
}
else{
	p=start;
	start=start->next;
}
free(p);
}

void deleteend()
{if(start==NULL)
{printf("create linked list\n");
return;
}

for(p=start;p->next!=NULL;p=p->next)
q=p;
q->next=NULL;
free(p);

}

void deleteany(){
	int pos;
	if(start==NULL)
	{printf("create linked list\n");
	return;
}
else
{printf("enter position\n");
scanf("%d",&pos);
p=start;
while(pos>1)
{q=p;
p=p->next;
pos--;
}
q->next=p->next;
free(p);
}
}
