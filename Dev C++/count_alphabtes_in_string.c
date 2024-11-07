#include <stdio.h>
int size=100;

void main(){
	char arr[size],count_arr[26]={0} ,ch;int i=0;
		printf("\n kirpya karke ek waqya likhe...  ");
		scanf("%s",&arr);
	
	while(arr[i]=='\0')
		if(arr[i]>'a' && arr[i]<'z'){
			printf("%d",arr[i]-'a');
			count_arr[arr[i]-'a']++;
				i++;
			}
	
	
	
	for(i=0;i<26;i++){
	printf("%c= %d \n",'a'+i,count_arr[i]);
	
	}
}



