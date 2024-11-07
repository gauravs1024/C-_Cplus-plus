#include <stdio.h>
int fib(int x);
    // hint;
    // fib(n)= fib(n-1)+fib(n-2);
    // fib(0)=0;
    // fib(1)=1;
    int main(){
    int num,i;
    printf("Enter the number of terms:-\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    printf("%d ",fib(i));//fib 0,1,1,2............
    return 0;
}

int fib(int x){
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else 
    {
        return fib(x-1)+fib(x-2); //Function starts calling itself untill it comes to the value of x=0,x=1.
    }
}