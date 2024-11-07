#include<stdlib.h>
#include<stdio.h>
struct node
{int info;
struct node *next;
};
struct node *start=NULL;
void create()
{struct node *temp ,*ptr;
temp=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the value for the node\t");
scanf("%d",&temp->info);
temp->next=NULL;
if(start==NULL)
{start=temp;}
else
{ptr=start;
while(ptr->next!=NULL)
{ptr=ptr->next;
}
ptr->next=temp;
}
}
void display()
{struct node *ptr;
printf("\n The list elements are\t");
for(ptr=start;ptr!=NULL;ptr=ptr->next)
printf("%d\n",ptr->info);
}



void main()
{int choice;
while(1){
	printf("\n1.create \n");
	printf("\n2.display \n");
	printf("\n3.exit \n");
		printf("\nEnter your choice \n");
		scanf("%d",&choice);
		switch(choice)
		{case 1: create ();break;
		case 2: display();break;
		case 3:exit(0);
		break;
		default: printf("\n wrong input");
		break;
	}}
	return 0;
}