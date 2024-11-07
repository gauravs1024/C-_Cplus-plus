#include<stdio.h>
/* this program can multiply matrix of different size without using the DMA*/

int main(){
	int n;
	printf("Enter the size of the matrix that is nXn\n");
	scanf("%d",&n);
	int a[n][n],b[n][n],r,c,k,i,j;
	printf("Enter the elements in the matrix A\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements in the matrix B\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}	
	int m[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			m[i][j]=0;
		}
	}		
	
	for(r=0;r<n;r++){
		for(c=0;c<n;c++){
			for(k=0;k<n;k++){
				m[r][c]=a[r][k]*b[k][c]+m[r][c];
			}
		}
	}	
	printf("after matrix multiplication\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}	
	
	return 0;
}
	