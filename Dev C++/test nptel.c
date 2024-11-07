
/*#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);
   int i=0;
for(i=0;i<100;i++){
  if(((int)ch[i]>=65 && (int)ch[i]<=90)){
    upper++;}
  else if(((int)ch[i]>=97) && ((int)ch[i]<=122)){
    lower++;
     }  
	 
	 }
     printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
//   printf("Lowercase Letters : %d", lower); /*prints number of lowercase letters */
// 
//   return (0);
//}


/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
    
    int count=0 ,start=0,end,max=0,j=0;
scanf("%[^\n]s", str);
for(int i=0,k=0;i<100;i++,k++){
	substr[j][k]=str[i];
	if(str[i]==' '){
	substr[j++][k]='\0';
	j++;
	k=0;
	}
}
for(int i=0;i<100;i++){
	for(j=0;j<100;j++)
	printf("%c",substr[i][j]);
	printf("\n");
}


//
//}
//
//*/
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str[100]={0},substr[100][100]={0}; 
////str[100] is for storing the sentence and substr[50][50] is for storing each word.
//    
//    
//    int count=0 ,start=0,end=0,max=0,j=0,temp=0;
//scanf("%[^\n]s", str);
//int len=strlen(str);
//
//for(int i=0;i<len;i++){
//	count++;
//	if(str[i]==' ' && count>max){
//	
//		max=count;
//		//printf("%d\n",count);
//	count=0;}
//
//}
//printf("%d",max);
//
////for(int i=0;i<100;i++){
////	printf("%c",substr[0][i]);
////}
//
//
//
//}
//
//
//#include<stdio.h>
//#include<string.h>
//
//void reverse(char[], int, int);
//    int main()
//    {
//        char str1[20];
//        scanf("%s", str1); //The string is taken as input form the test data. 
//     
///* Complete the program to print the string in reverse order using the function
//void reverse(char[], int, int);
//Use the printf statement as
//printf("The string after reversing is: %s\n", str1); 
//You can use different variable also.
//*/
//
//reverse(str1,0,0);
//}
//
//
//void reverse(char a[] ,int i,int j){
// char b[20];
//  int d;i=strlen(a);
//  
//  for(j=0,d=i-1;j<i;j++,d--){
//    b[j]=a[d];
//  }
//  b[j++]='\0';
//  printf("The string after reversing is: %s\n", b); 
//
//}


/*
#include<stdio.h>
long place(int n)
{long val=1;
while(n){
	val=val*10;
	n--;
}

	return val;}
int main(){
	int a=10,count=0,r,d=0,b,flag=0;
	b=a;
	while(a){
	count++;
		a=a/2;
	}
	printf("count=%d\n",count);
	count--;
	a=b;
	while(a){
		r=a%2;
		d=r*place(count)+d;
		if(d==0)
		flag=1;
		a=a/2;
		count--;}
		if(flag==1)
		d=d*10;
		printf("%d",d);
	return 0;
}


*/


/*
#include<stdio.h>
 int main()
{
  int a[3][3], i, j;
  int determinant;
 //  9 elements of matrix is taken as input from test data
  for(i = 0 ; i < 3; i++)
      for(j = 0; j < 3; j++)
           scanf("%d", &a[i][j]);

determinant=a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))-a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]))+a[0][2]*((a[2][1]*a[1][0])-(a[2][0]*a[1][1]));                 
printf("%d",determinant);

}

*/
//#include<stdio.h>
//
//int func(int n,int r){
//	if(n>0) return(n%r+func(n/r,r));
//	else return 0;
//}
//int main(){
//	printf("%d",func(513,2));
//}



/*
#include<stdio.h>
float func(float x);
int main()
{
  int n=10; //Taking n=10 sub intervals
  float a,b,integral; //integral is the integration result
  scanf("%f",&a); // initial limit taken from test case 
  scanf("%f",&b); // Final limit taken from test case

//Use the printf statement as printf("The integral is: %0.6f\n",integral);

float sum = 0.0,x[10]={0.0},y[10]={0.0},h;int i;
h=(b-a)/10.0;
printf("%f",h);
x[0]=a;
for(i=1;i<=10;i++){
  x[i]=x[i-1]+h;
 printf("%f  \n",x[i]);
}
for(i=1;i<=9;i++){
  sum=sum+2*func(x[i]);
  }
  sum=sum+func(x[0])+func(x[10]);
 
  
  printf("%f",sum);
  integral=(h/2.0)*sum;
  printf("The integral is: %0.6f\n", integral);
  }
  float func(float n){
  return n*n;
  }

*/



/*
#include<stdio.h>
int main()
{
  float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68}; int i,j;float sum=0,num=1,deno=1;
  float a; //Value of the t to find the respective value of v(t)
  scanf("%f", &a);  // This will be taken from test cases
  for(i=0;i<5;i++){
  	num=1;deno=1;
  for(j=0;j<5;j++)
  {if(i==j){
  
  
}
  else
  {printf("%d i %d j",i,j);
  	num=num*(a-t[j]);
  	printf("%f \n",num);
  	deno=deno*(t[i]-t[j]);
}
}

sum=sum+(v[i]*(num/deno));
}
printf("%f total",sum);

return 0;
}



*/


/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; 
    float *element;

    scanf("%d", &n); //Total number of elements

    // Allocate the memory for 'n' number of elements. 
    //Then take the elements as input from test data
    
    element=(float*)calloc(n,sizeof(float));
    int i;
    for(i=0;i<n;i++){
    	scanf("%f",(element+i));
    	
    }
    
    for(i=0;i<n;i++){
    	printf("%f  \n",*(element+i));
    
    }
    
    
    
}
    
    */
    
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; 
    float rsult=50+50.0/-20*6%3+6*3;
    printf("%f",rsult);
    
    return 0;
    
}

    
 