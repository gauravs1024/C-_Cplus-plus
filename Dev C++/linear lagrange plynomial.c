/* linear lagrange method .it will accept the value of f(x) for some test cases and find 
the output on the basis of test cases . basically it try  to trace the function path  */


#include<stdio.h>
int main()
{
  float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68}; int i,j;
  float a; //Value of the t to find the respective value of v(t)
  scanf("%f", &a);  // This will be taken from test cases
  float sum=0,num=1,deno=1;
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