#include<stdio.h>
int main(){
int n,a[64],b[64],i=0,j;
scanf("%d",&n);
while(n){
a[i]=n%2;
i++;
n=n/2;
}
//a[i]='\0';
//printf("%s",a);

for(j=0;j<i;j++)
printf("%d",a[j]);
return 0;

}