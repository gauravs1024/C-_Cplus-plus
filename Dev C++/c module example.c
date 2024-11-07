#include<stdio.h>
#include"sorting.h"
#include<stdlib.h>
#include<string.h>
void print();
int  n,i,c, *a;
int main()
{
system("color 0b");//FOR COLOR OF TEXT
for(i=1;i<=10;i++) 

printf("%c",5);
printf("\tTHE EXAMPLE OF SORTING MODULE\t");
for(i=1;i<=10;i++)
printf("%c",5);
printf("\n\nENTER THE SIZE OF ARRAY OF INTEGER\n");
scanf("%d",&n);
a=malloc(sizeof(char)*n);//DMA OF ARRAY
if(a==NULL)
{printf("\nTHE MEMORY OF ARRAY IS NOT ALLOCATED...\nPLEASE RUN AGAIN THE PROGRAM\n");}
else{
printf("ENTER VALUES IN  ARRAY\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("*****WHAT TYPE OF SORTING YOU WANT TO DO*****\n");
printf("PLEASE SELECT ANY OF THE OPTION GIVEN BELOW\n");
printf("1.BUBBLE SORT\n2.INSERTION SORT\n3.SELECTION SORT\n");
printf("4.QUICK SORT\n5.SHELL SORT\n6.RADIX SORT\n7.HEAP SORT\n");
printf("8.COUNT SORT\n9.BUCKET SORT\n10.MERGE SORT\n");
scanf("%d",&c);//user's choice
switch(c){
	case 1:
		bsort(a,n);
		printf("YOU HAVE SELECTED BUBBLE SORT\n");
		print();
		break;
	case 2:
		isort(a,n);
		printf("YOU HAVE SELECTED INSERTION SORT\n");
		print();
		break;
	case 3:
		selsort(a,n);
		printf("YOU HAVE SELECTED SELECTION SORT\n");
		print();
		break;
	case 4:
		quicksort(a,0,n);
		printf("YOU HAVE SELECTED QUICK SORT\n");
		print();
		break;
	case 5:
		shellsort(a,n);
		printf("YOU HAVE SELECTED SHELL SORT\n");
		print();
		break;
	case 6:
		radixsort(a,n);
		printf("YOU HAVE SELECTED RADIX SORT\n");
		print();
		break;	
	case 7:
		heapsort(a,n);
		printf("YOU HAVE SELECTED HEAP SORT\n");
		print();
		break;
	case 8:
		countingsort(a,n);
		printf("YOU HAVE SELECTED COUNT SORT\n");
		print();
		break;
	case 9:
		bucketsort(a,n);
		printf("YOU HAVE SELECTED BUCKET SORT\n");
		print();
		break;
	case 10:
		mergesort(a,0,n);
		printf("YOU HAVE SELECTED MERGE SORT\n");
		print();
		break;			
	default:
	printf(":( :( :( SORRY! YOU HAVE ENTERED WRONG OPTION :( :( :(\n");
}
}
return 0;
}
void print(){
printf("\nPLEASE WAIT WHILE YOUR DATA IS SORTING\n");
for(i=5;i>0;i--)
{
delay(100);
printf("\t\t%d%c...\n",i,2);}
printf("\nAFTER SORTING THE DATA IS :\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
for(i=0;i<5;i++)
printf("%c",2);
printf(" THANKS FOR USING THIS MODULE ");
for(i=0;i<5;i++)
printf("%c",2);

}




