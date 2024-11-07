#include<stdio.h>
#define size 10
void main(){
int arr[size]={23,45,21,5,6,3,90,76,5,92},fst_max=0,sec_max=0,i;
printf("enter 10 numbers\n");
for(i=0;i<size;i++){
scanf("%d",&arr[i]);

if(fst_max<arr[i]  ){
sec_max=fst_max;
fst_max=arr[i];
}
else if(sec_max<fst_max && sec_max<arr[i]){
sec_max=arr[i];}
}

printf("first_max= %d second max=%d",fst_max,sec_max);



}