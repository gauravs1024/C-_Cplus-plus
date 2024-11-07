#include<stdio.h>
#include<string.h>
#define r 3				// NUMBER OF ROWS IN  THE ARRAY
#define c 50			//NUMBER OF COLUMNS OR WORD LENGTH

void  sorting_alphabets(char arr[r][c]){
													// the function is used to sort the aplhabets of words according to dictionary
	int i=0,j,k;char t;

	for(k=0;k<r;k++){
	for(i=0;i<strlen(arr[k]);i++){		// finds the stringlentgth and runs loop according with the string length
		for(j=0;j<strlen(arr[k])-i-1;j++){
			if(arr[k][j]>arr[k][j+1]){			//this logic compares the each alphabet of each word and if it find
				t=arr[k][j];					//that ascii value is greater than it swap tha alphabets
				arr[k][j]=arr[k][j+1];
				arr[k][j+1]=t;
			}
		}
	}
}
printf("\n............ Alphabets are Sorted.............\n");
}
void sorting_words(char arr[r][c]){
char temp[c];							//this function is used to sort the words according to dictionary
int i,j,k;

for(j=0;j<r;j++){
	for(i=0;i<r-1;i++){
		if(arr[i][0]>arr[i+1][0]){			//this logic compares the first letter of each word and if found the first letter is greater then 
			strcpy(temp,arr[i]);			//it swaps the whole words
			strcpy(arr[i],arr[i+1]);
			strcpy(arr[i+1],temp);
		}
	}
}
printf("\n............ Words are Sorted acc to first letter.............\n");

}
void final_word_sorting(char arr[r][c]){
char temp[c];							//this function is used to final sort the words according to dictionary
int i,j=0,k;

for(k=0;k<r;k++){
for(i=0;i<r-1;i++){
	while((arr[i][j]!='\0') || (arr[i+1][j]!='\0') ||(arr[i][j]<arr[i+1][j]) ){
		if(arr[i][j]>arr[i+1][j]){			//this logic compares the each letter of each word and if found the first letter is greater then the next letter 
			strcpy(temp,arr[i]);			//it swaps the whole words
			strcpy(arr[i],arr[i+1]);
			strcpy(arr[i+1],temp);
			printf("calls final\n");
		}
		
		j++;
	}
}
}


}
			

	

 

int main(){
char arr[r][c];int i;

for(i=0;i<r;i++){
	
	scanf("%s",&arr[i]);
	
}
//scanf("%s",&arr);
sorting_alphabets(arr);
sorting_words(arr);
	for(i=0;i<r;i++){
	
	printf("%s \n",arr[i]);
}
final_word_sorting(arr);


	for(i=0;i<r;i++){
	
	printf("%s \n",arr[i]);
}
//rintf("%s",arr);
return 0;

}
