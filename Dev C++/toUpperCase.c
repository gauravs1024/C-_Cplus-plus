#include<stdio.h>
#define size 20
void main(){
char char_arr[size]="gaurav";int i=0;
while(char_arr[i]!=0){
if(char_arr[i]>='a' &&char_arr[i]<='z'){
char_arr[i]=char_arr[i]-32;

}
i++;
}
printf("%s",char_arr);

}