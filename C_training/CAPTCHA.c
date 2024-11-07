#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{int i,a;char s[10],m[10];
srand(time(NULL));
printf("WELCOME TO THE GAME OF CAPTCHA FILLING %C\n\n",2);
while(1){
	printf("type the captcha shown below\n\n");
a=5+rand()%5;
for(i=0;i<a;i++){
s[i]=(char)33+rand()%93;
printf("%c",s[i]);}
printf("\n");
s[i]='\0';
gets(m);
if(strcmp(s,m)==0){
printf("CAPTCHA VERIFIED SUCCESSFULLY %c\n",2);
exit(0);}
else
printf("the entered captcha is not correct\n");
}
return 0;
}