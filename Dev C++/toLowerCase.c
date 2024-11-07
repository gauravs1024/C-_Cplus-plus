#include<stdio.h>
#define size 20
void main(){
char char_arr[size]="GAURAV";int i=0;
while(char_arr[i]!=0){
if(char_arr[i]>='A' &&char_arr[i]<='Z'){
char_arr[i]=char_arr[i]+32;

}
i++;
}
printf("%s",char_arr);

}