void implementation();
void traversing();
	
struct NODE{
	int data;
	int *left ,*right;
};
typedef struct NODE node;
node *p,*r,root=NULL,m;
node *getnode(){
	node *ptr;
	ptr=(node*)malloc(sizeof(node));
	return ptr;
}
int main()
{
int choice;
printf("choose any one\n");
printf("1.implementation\n");
printf("2.traversing\n");
scanf("%d",&choice);
switch(choice)
{case 1:
	implementation();
	break;
case 2:
	traversing();
	break;
default:
printf("wrong choice\n");
}

return 0;
}

void implementation()
{
int n;
printf("enter number of nodes\n");
scanf("%d",&n);
p=getnode();
if(root==NULL)
p=getnode();
printf("ENTER DATA IN NODE\n")
scanf("%d",&p->data);
p->left=NULL;
p->right=NULL;
if(root==NULL)
{root=p;
q=p;
}
else if(q->left==NULL)
{q->left=p;
m=p;}
else if(q->right=NULL)
q->right=p;
q=m;
}

