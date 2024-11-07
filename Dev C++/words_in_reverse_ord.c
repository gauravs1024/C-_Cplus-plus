#include<stdio.h>
void main(){
char arr[24]="hello my name is gaurav";
int len=0,i=0,j=0,start,end;
while(arr[len]!='\0'){
len++;
}
end=len-1;
printf("%d ",len);
for(i=len-1;i>=0;i--){
if(arr[i]==' ' || i==0){
if(i==0)
start=0;
else
start=i+1;
for(j=start;j<=end;j++)
printf("%c",arr[j]);
end=i-1;
printf(" ");
}
}
}