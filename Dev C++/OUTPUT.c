#include<stdio.h>
int main()
{int a,b=5;		

//a=(b-1) * (1+b);			//24,5         
//a=b--+ ++b+b--+--b;     //18,3
//a=b--+ ++b;           //10,5
//a=b--+--b;				//8,3           
//a=++b*b--+--b;        //34,4
//a=b++ + --b;          //10,5
//a=--b + ++b;             //10,5
//a=b--+b++;             //9,5
//a=b--*b--*b--*b--;        //120,1
//a=--b*3+6*b--;				//36,3
//a=--b*3*6*b--;				//216,3
//a=b--*++b*b--+--b;				//128,3
a=++b*++b+--b;               //55,6
//a=b+++7;						//12,6
printf("a= %d b= %d ",a,b);
return 0;
}