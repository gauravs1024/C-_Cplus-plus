#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
//#include<graphics.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "SameerZaid"
#define CANDIDATE2 "Vanshika"
#define CANDIDATE3 "vanshuu"
#define CANDIDATE4 "Aman"
int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;
void castVote() 
{
int choice ,input =2003;    
printf("\n\n ### Please choose your Candidate ####\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice (1 - 4) : ");
scanf("%d",&choice);

switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");
     //hold the screen
        getchar();
}
printf("\n thanks for vote !!");
}
void votesCount(){
int input=2003;
FILE *fptr;	
	printf("\nEnter passward::");
	scanf("%d",&input);
	if(input==2003)
	
	{
	//fptr=fopen("C:\\emp.rec","w");
	printf ("thanks >>");
	fptr=fopen("rec.txt","a");
	if (fptr==NULL)
	{
		printf("File does not exit");
	}
printf("\n\n ##### Voting Statics ####");
fprintf(fptr,"\n\n ##### Voting Statics ####");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
fprintf(fptr,"\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
fprintf(fptr,"\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "Spoiled Votes", spoiledtvotes); 
}
else
printf("PLESE ENTER CORRECT PASWARD");
}

void getLeadingCandidate(){
    printf("\n\n  #### Leading Candiate ####\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("[%s]",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("[%s]",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("[%s]",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");     
}
int main()
{
	//textcolor(RED); 
int i;
int choice;
//FILE *fptr;	

do{
printf("\n\n############################################");
printf("\n\n###### Welcome to Election/Voting 2023 #####");
printf("\n\n:      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     :");
printf("\a\n\n############################################");

printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 0. Exit");
printf("\n\n Please enter your choice : ");
scanf("%d", &choice);
system("cls");
switch(choice)
{case 0:exit(0);break;
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}
} 
while(1);
//hold the screen
getchar();
//return 0;
}