#include <stdio.h>
#define size 5
void main(){
	int arr[size],i,j;
	for(i=0;i<size;i++){
		n:
		printf("\nenter the %i element of aray  ",i);
		scanf("%i",&i[arr]);
		for(j=0;j<i;j++){
			if(arr[i]==arr[j]){
				printf("\n\nthe %i element already exist at %i \n plz re-enter value ...\n ",arr[i],i);
				goto n;
			}
		}
	}
}
	