#include<stdio.h>
void disp(int ,int);
char arr[]="i.am.gaurav.hello";
void main(){
int i,start=0,end=sizeof(arr);
for(i=sizeof(arr);i>=0;i--){
	
if(arr[i]=='.'){
start=i+1;
disp(start,end);
printf(".");
end=start-1;
}
else if(i==0){
start=0;
disp(start,end);
}


}
}


void disp(int start,int end){
	int j;
	for(j=start;j<end;j++){
printf("%c",arr[j]);
}
	
}




