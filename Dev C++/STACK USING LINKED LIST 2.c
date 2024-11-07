#include<stdio.h>
#include<stdlib.h>
struct node{
	char exp;
	struct node *prev;
};
void traversing();
void push();
void pop();
typedef struct node NODE;
NODE *top,*p,*q;
int main()
{int choice;
for(;;){
printf("enter your choice\n");
printf("1.traversing\n");
printf("2.push\n");
printf("3.pop\n");
printf("4.exit\n");
scanf("%d",&choice);
switch(choice)
{case 1:
	traversing();
	break;
case 2:
	push();
	break;
case 3:
	pop();break;
case 4:
exit(0);
default:
	printf("wrong choice \n");
}
}
return 0;
}
void traversing()
{if(top==NULL){
printf("stack is empty\n");
return;}
for(p=top;p->prev!=NULL;p=p->prev)
printf("%d",p->exp);
}

void push()
{p=(NODE*)malloc(sizeof(NODE));
printf("enter data\n");
scanf("%c",&p->exp);
if(top==NULL){
top=p;
top->prev=NULL;}
else{
q->next=p;
p->next=NULL;}
q=p;
}

void pop()
{if(start==NULL){
printf("stack is empty\n");
return;
}
for(p=start;p->next!=NULL;p=p->next)
q=p;
q->next=NULL;
free(p);
}


	