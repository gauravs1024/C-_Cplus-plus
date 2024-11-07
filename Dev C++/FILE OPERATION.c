
/*//READ EACH CHARACTER AND WRITE ITS UPPER CASE EQUIVALENT TO THE DATA FILE
#include<stdio.h>
#include<ctype.h>
int main()
{FILE *fp;
char c;
fp=fopen("sample.txt","w");
do
putc(toupper(c=getchar()),fp);
while(c!='\n');
fclose(fp);

return 0;
}
*/

#include<stdio.h>
int main()
{
	FILE *fp;
	char c[20];int i=1;
	fp=fopen("sample.txt","r");
	if(fp==NULL)
		printf("\nERROR-cannot open the designated file\n");
	else
//	do{
//	c=getchar();
//	scanf("%c",&c);
//putc(c,fp);
 //printf("%c",getc(fp));
//fprintf(fp,"gaurav_saini %d\n",5);

//	i++;}
//	while(i<10);
	//gets(c);
	//fprintf(fp,"gaurav %s",c);
	fscanf(fp,"%s",c);
	printf("%s",c);
	fclose(fp);
	return 0;
}