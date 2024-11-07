//trapazoidal method of integration

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
