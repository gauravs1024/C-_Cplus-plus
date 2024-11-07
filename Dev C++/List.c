#include<stdio.h>
#include<stdlib.h>
int isempty();
void insert_new();
void display();

struct node{
	int data;
	struct node *next;
};

struct node *fst=NULL ,*last=NULL,*temp=NULL,*curr=NULL;

int main(){
	while(1){
	int choice=0;
printf("enter your choice\n");
printf("\n1.isempty()");
printf("\n2.insert a new node:");
printf("\n3.display\n");
printf("\n4.exit\n");

scanf("%d",&choice);
if(choice==1)
isempty();
else if(choice==2)
insert_new();
else if(choice==3)
display();
else if(choice==4)
exit(0);
else
printf("\n\nWRONG CHOICE\n");
}

return 0;

}


int isempty(){
return fst==NULL;

}

void insert_new(){
temp=(struct node*)malloc(sizeof(fst));
printf("\nenter the data\n");
scanf("%d",&temp->data);
temp->next=NULL;
if(fst==NULL)
last=fst;
temp->next=fst;
fst=temp;

}
void display(){

temp=fst;
while(temp!=NULL){
	printf("%d  ",temp->data);
	temp=temp->next;}


}

