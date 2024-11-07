#include<stdio.h>
#define size 10
void main(){
int arr[size]={23,45,21,5,6,3,90,99,5,44},fst_max=0,sec_max=0,thd_max=0,i;
printf("enter 10 numbers\n");
for(i=0;i<size;i++){
//scanf("%d",&arr[i]);

if(fst_max<arr[i]  ){
thd_max=sec_max;	
sec_max=fst_max;
fst_max=arr[i];
}
else if(sec_max<fst_max && sec_max<arr[i]){
thd_max=sec_max;
sec_max=arr[i];}


else if(thd_max<sec_max && thd_max<arr[i]){
	thd_max=arr[i];}
}

printf("first_max= %d second max=%d third max=%d ",fst_max,sec_max,thd_max);



}