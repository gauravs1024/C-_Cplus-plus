#include<stdio.h>
#define s 10     //s is the size of the array
#include<stdlib.h>
void insertf(int);//insertion at rear
void insertr(int);//insertion at front
void deletef();//deletion at front
void deleter(); //deletion at rear
void display();// to display element
int queue[s],f=-1,r=-1;
int main()
{
	int choice ,value;
	for(;;)
	{//system("cls");
	printf("$$$$ DOUBLE ENDED QUEUE $$$$\n");
	printf("1.INSERTION AT REAR\n");
	printf("2.INSERTION AT FRONT\n");
	printf("3.DELETION AT REAR\n");
	printf("4.DELETION AT FRONT\n");
	printf("5.DISPLAY\n");
	printf("6.EXIT\n");
	printf("    ENTER YOUR CHOICE\n");
	scanf("%d",&choice);
	switch(choice)
	{case 1:
		printf("ENTER VALUE TO BE INSERT\n");
		scanf("%d",&value);
		insertr(value);
		break;
	case 2:
		printf("ENTER VALUE TO BE INSERT\n");
		scanf("%d",&value);
		insertf(value);
		break;	
	case 3:	
		deleter();
		break;
	case 4:
		deletef();
		break;
	case 5:
		display();
		break;
	case 6:
		exit(0);	
	default:
	printf("WRONG INPUT\n\n");
}
}
return 0;
}
//for insertion at rear
void insertr(int value)
{
	if(r==s-1)	
	{printf("!!OVERFLOW!!\n");
	return;
}
else{
r++;
queue[r]=value;
if(f==-1)
f=0;}
}

//for insertion at front
void insertf(int value)
{int i;
if(r==s-1){
printf("OVERFLOW\n");
return;
}
if(f!=-1)
{for(i=r;i>=f;i--)
queue[i+1]=queue[i];
}
else
f++;

queue[f]=value;

r++;
}


void deleter()
{if(f==-1)
{printf("UNDERFLOW\n");
return;
}
printf("DELETED VALUE=%d\n",queue[r]);
if(f==r)
{f=-1;
r=-1;
}
else
r--;
}

void deletef()
{if(f==-1){
	printf("UNDERFLOW\n");
	return;
}
printf("DELETED VALUE =%d\n",queue[f]);
if(f==r)
{r=-1;
f=-1;
}
else
f++;
}

void display()
{int i;
if(f==-1){
	printf("UNDERFLOW\n");
	return;
}
printf("QUEUE ELEMENT ");
for(i=f;i<=r;i++)
printf("%d ",queue[i]);
printf("\n\n");

}


			
		