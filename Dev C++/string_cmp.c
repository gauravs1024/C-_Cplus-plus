#include<stdio.h>
#define max_size 9
void main(){
char char_arr[max_size]="malayalam",char_arr2[max_size]="hello";int i=0,flag=1,j=0;
int size1=sizeof(char_arr),size2=sizeof(char_arr2);
while(char_arr[i]!=char_arr[size2-j-1] || i<size1 || j<size2){
if(char_arr[i]!=char_arr[size2-j-1] )
flag=0;
else
flag=1;
i++;
j++;
}
flag?printf("this string is not equal"):printf("this string is equal");

}