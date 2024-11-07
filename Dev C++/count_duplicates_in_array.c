#include <stdio.h>
int size=10;
int count=0;
void main(){
	int arr[size],i,j;
	for(i=0;i<size;i++){
		printf("\nenter the %i element of aray  ",i);
		scanf("%i",&i[arr]);
	
		}
		for(i=0;i<size;i++){
			for(j=i+1;j<size;j++){
				if(arr[i]==arr[j]){
					shift(arr,i);
					count++;
					j=i;
				}
			}
	}
	arr_print(arr);
}

void shift(int *arr,int i){
	int j;
	for(j=i+1;j<size;j++){
		arr[j]=arr[j+1];
}
size--;
}

void arr_print(int *arr){
	int i;
	
	printf("\n no of duplicates value are ...%i\n\n",count);
	printf("elements in the array after removing the duplicates array  \n\n ");
	for(i=0;i<size;i++){
		printf("%i  ",arr[i]);
	}
}