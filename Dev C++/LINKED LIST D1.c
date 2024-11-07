#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
typedef struct node NODE;

int main()
{int n,i;
NODE *start=NULL,*p,*q;
printf("enter number of node\n");
scanf("%d",&n);
printf("enter %d  node data\n",n);
for(i=0;i<n;i++)
{p=(NODE*)malloc(sizeof(NODE));
printf("enter data\n");
scanf("%d",&p->data);
p->next=NULL;
if(start==NULL)
start=p;
else
q->next=p;
q=p;
}
for(p=start;p!=NULL;p=p->next)
printf("%d\t",p->data);
return 0;
}
