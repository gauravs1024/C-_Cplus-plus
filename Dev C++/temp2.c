#include<stdio.h>
void main(){
	FILE *f,*n;int i=0;char c;int count=0;
	f=fopen("city.txt","r");
	n=fopen("newcity.txt","w");
	if(n==NULL)
		printf("error opening the new file...");
	if(f==NULL)
	printf("file cant be open\n");
	else

	while((c=fgetc(f))!=EOF){
		if(c==':' || c=='\n'){
		printf("\n");
		fputc("\n",n);
		printf("%d ",++count);}
		else{
		printf("%c",c);
		fputc(c,n);}
		
		
	}


		
	
	fclose(f);
	fclose(n);
	
	
}

