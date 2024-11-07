#include <stdio.h>
int size=10;
int count=0;
int max=0;
int value_counted;
void main(){
	int arr[size],i,j;
	for(i=0;i<size;i++){
		printf("\n enter the %i element of array  ",i);
		scanf("%i",&i[arr]);
	
		}
		for(i=0;i<size;i++){
			count=0;
			for(j=i+1;j<size;j++){
				if(arr[i]==arr[j]){
				count++;
				
				}
				if(count>max){
				max=count;
				value_counted=arr[i];
				}
			}
	}
		printf(" counted values %i\n ",value_counted);
	arr_print(arr);
}



void arr_print(int *arr){
	int i;
	
	printf("\n no of duplicates value are ...%i\n\n",max);

	for(i=0;i<size;i++){
		printf("%i  ",arr[i]);
	}
}