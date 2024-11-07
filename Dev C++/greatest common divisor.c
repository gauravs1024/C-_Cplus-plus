#include <stdio.h>

int main() {
    // Write C code here
    int a,b,large,i;
    printf("input two number");
    scanf("%d %d",&a,&b);
    if(a>b){
    large=a;
        if(a%b==0)
        printf(" %d",b);
        else{
        for(i=b;i>=2;i--){
        	if(a%i==0)
        	break;
        }
        	printf("%d",i);
    }
}
        
    
    else if(b>a){
    large=b;
     if(b%a==0){
        printf("%d",a);}
        
    else{
        for(i=a;i>=2;i--){
        	if(b%i==0)
        	break; 
        }
        printf("%d",i);
          
        }
        }
    
    
   

    return 0;
}