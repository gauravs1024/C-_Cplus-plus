#include<stdio.h>
int main(){
	int i ,j,n=3;int c;	char ch;
	for(i=n;i>=1;i--){
	c=65+n-1;
	for(j=n;j>=i;j--){
		printf("%c",c--);
	}
	printf("\n");
}
	
	return 0;
	scanf("%c",&ch);
	
}