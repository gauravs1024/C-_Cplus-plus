#include<stdio.h>
#define size 9
void main(){
char char_arr[size]="malayalam";int i=0,flag=1,j=0;
while(i!=(size/2)){

if(char_arr[i]==char_arr[size-j-1]){

}
else
flag=0;
i++;
j++;
}
flag?printf("this string is pallindrome"):printf("this string is not pallindrome");

}