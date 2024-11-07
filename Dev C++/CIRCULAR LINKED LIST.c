#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
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

void traverse()
{if(start==NULL)  {
printf("linked list not created\n");
return;}
printf("show all nodes\n");

p=start;
do{
	printf("%d\t",p->data);
	p=p->next;
}while(p!=start);

}

void impl()
{int n,i;
printf("ENTER NUMBER OF NODES\n");
scanf("%d",&n);
printf("ENTER %d NODES DATA\n",n);
for(i=0;i<n;i++) {
p=getnode();
printf("enter data\n");
scanf("%d",&p->data);
}
p->next=NULL;
if(start==NULL)
{start=p;
p->next=start;
}
else
{q->next=p;
p->next=start;
}
q=p;
}
void insertbeg()
{if(start==NULL)
{printf("linked list is not created\n");
return;
}
p=getnode();
printf("enter data");
scanf("%d",&p->data);
p->next=NULL;
for(q=start;q->next!=start;q=q->next);
p->next=start;
start=p;
q->next=start;
}
void insertend()
{if(start==NULL)
{printf("linked list not created\n");
return;
}
scanf("%d",&p->data);
p->next=NULL;
for(q=start;q->next!=start;q=q->next);
q->next=p;
p->next=start;
}
void insertany()
{int pos;
if(start==NULL)
{printf("linked list not created\n");
return;
}
printf("enter position \n");
scanf("%d",&pos);
q=(NODE*)malloc(sizeof(NODE));
printf("enter data\n");
scanf("%d",&q->data);
q->next=NULL;
p=start;
while(pos>1)
{r=p;
p=p->next;
pos--;
}
}

void deletebeg()
{if(start==NULL) {
printf("linked list not created\n");
return;
}
for(q=start;q->next!=NULL;q=q->next);
start=p->next;
q->next=start;
free(p);
}
void deleteend()
{if(start==NULL) {
printf("linked list not created\n");
return;
}
for(q=start;q->next!=start;q=q->next)
r=p;
r->next=start;
printf("deleted node data%d\n",q->data);
free(p);
}
void deleteany()
{int pos;
if(start==NULL)
{printf("linked list is not created\n");
return;
}
printf("enter position\n");
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



