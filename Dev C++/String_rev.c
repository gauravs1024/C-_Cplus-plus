#include<stdio.h>
#define size 6
void main(){
char char_arr[size]="GAURAV" ,char_rev[size];int i=0,j;
for(i=0,j=size-1;i<size;i++,j--){

char_rev[i]=char_arr[j];
}
char_rev[i]='\0';
printf("%s",char_rev);

}