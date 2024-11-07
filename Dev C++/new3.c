//#include<stdio.h>
//int main(){
////	int ar[10]={1,2,3,4,5,6},i,count=0,j;
////	j=ar[0];
////	for(i=0;i<=7;i=i+j){
////		j=ar[i];
////		count++;
////		printf("HELLO\n %d",i);
////	}
////int count=0,i=3;
////count=i++ + ++i + i++ + ++i;
//char a[20]="gaurav";
//	printf("%d",sizeof(a));
//	return 0;
//
//}

// C program to illustrate call by value
#include <stdio.h>

// Function Prototype
void swapx(int x, int y);

// Main function
int main()
{
	int a = 10, b = 20;

	// Pass by Values
	swapx(a, b); // Actual Parameters

	printf("In the Caller:\na = %d b = %d\n", a, b);

	return 0;
}

// Swap functions that swaps
// two values
void swapx(int x, int y) // Formal Parameters
{
	int t;

	t = x;
	x = y;
	y = t;

	printf("Inside Function:\nx = %d y = %d\n", x, y);
}
