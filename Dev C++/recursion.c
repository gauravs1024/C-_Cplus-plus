#include <stdio.h>
int sum(int x);
    int main(){
    int num,s=0,i;
    printf("Enter the number of terms:-\n");
    scanf("%d",&num);
//    for(i=0;i<num;i++)
//    {
//        //s=s+i;
//        //printf("%d ",i);
//        printf("%d ",sum(i));
//    }
   // printf("The sum is:- %d",s);
    printf("The sum of %d is %d",num,sum(num));
    return 0;
}

int sum(int x){

    if(x==1) 
    {   
        return 1;
    }
    else 
    { 
        return sum(x)+sum(x-1);
    }
}