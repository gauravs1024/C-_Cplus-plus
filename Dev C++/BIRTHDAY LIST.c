#include<stdio.h>
#include<stdlib.h>
//
#include<string.h>
void input();
void read();
void Delete();
FILE *fp;
int main()
{
int c;
for(;;)
{	printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c",2,2,2,2,2,2,2,2,2,2,2,2,2,2);
	printf("\n------WHAT YOU WANT TO DO-------\n");
	printf("1.ENTER BIRTHDAY DETAILS\n");
	printf("2.SHOW THE BIRTHDAY LIST\n");
	printf("3.TO DELETE ALL THE DATA IN FILE\n");
	printf("4.EXIT\n");
	scanf("%d",&c);
	switch(c){
		case 1:
			input();
			break;
		case 2:
			read();
			break;
		case 3:
			Delete();
			printf ("ALL SAVED DATA HAS BEEN DELETED SUCCESFULLY:)\n");
			break;	
		case 4:
			printf("THANKU FOR USING THE PROGRAM  %c%c%c%c%c%c",2,2,2,2,2,2);
			 exit(0);
		default:
			printf("!!!!!!!WRONG CHOICE!!!!!!\n");	 
		}
		
	}
	return 0;
}
void input()
{char s[100];int i=9;
fp=fopen("blist.txt","a");
if(fp==NULL)
	printf("ERROR-cannot open file\n");
else{
	printf("enter name of the person(SPACE IS NOT ALLOWED:(\n"); 
	scanf("%s",s);
//	gets(s);
	fprintf(fp," %s",s);
	printf("enter date of birth in the format ddmmyyyy\n");
	//gets(s);
	scanf("%s",s);
	fprintf(fp," %s\n",s);
}
fclose(fp);
}
	
	
void Delete()
{FILE *fp;
char ch=32;
fp=fopen("blist.txt","w");
fputc(ch,fp);
fclose(fp);
}
	
	
void read()
{char c;int i=0;
fp=fopen("blist.txt","r");
if(fp==NULL)
	printf("ERROR-cannot open file\n");
else{
	printf("birthday list\n");
	while(!feof(fp)){
		//fgets(c,50,fp);
c=fgetc(fp);
printf("%c",c);
	
//printf("%c",getc(fp));
}

}
fclose(fp);
}
	
	
				
			
	