#include<stdio.h>
void main(){
	int ar3[3][3];
int arr4[4][4]={1, 2, 3, 4,
			    2, 0, 1, 3,
			    8, 1, 4, 2,
			    4, 2, 7, 1};
int i,j,k,l=0,m=0;
for(i=0;i<=3;i++){
	for(j=1;j<=3;j++){
		for(k=0;k<=3;k++){
			if(i==k) 
			continue;
			else {
			printf("%d  ",arr4[j][k]);
			
		
		
			}
		
			
		}
		printf("\n");
	}
	printf("\n\n\n");
}

for(l=0;l<=2;l++){
	for(m=0;m<=2;m++){
		printf("%d",ar3[l][m]);
	}
	printf("\n");
	
}


}
