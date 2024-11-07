/*
//strcpy
#include<string.h>
int main()
{char str1[20],str2[20];

puts("enter  string 1 ");
gets(str1);
strcpy(str2,str1);
puts("after copy string 2 will be\n");
puts(str2);
return 0;

}
*/

/*
//strcmp
#include<string.h>
int main()
{char str1[20],str2[20];

puts("enter  string 1 ");
gets(str1);
puts("enter string 2 to compare");
gets(str2);
if(strcmp(str1,str2)==0)//CASE SENSTIVE COMPARISON 
puts("string is same\n");
else
puts("string is not same\n");
return 0;

}

*/

/*
//strcat
#include<string.h>
int main()
{char str1[20],str2[20];

puts("enter  string 1 ");
gets(str1);
puts("enter string 2 to cancatenate ");
gets(str2);
strcat(str1,str2);
puts("after cancatenation string 1 will be\n");
puts(str1);
return 0;

}
*/

/*
//strlen
#include<string.h>
int main()
{char str1[20];
int l;
puts("enter  string 1  to find the length");
gets(str1);

l=strlen(str1);
printf(" the length of the enetered string =%d",l);
return 0;

}
*/

/*
//strrev
#include<string.h>
int main()
{char str1[20];

puts("enter  string to reverse");
gets(str1);
strrev(str1);
puts("after reverse string  will be\n");
puts(str1);
return 0;

}
*/
/*
//strncpy
#include<string.h>
int main()
{char str1[20],str2[20];
int n;
puts("enter  string 1 ");
gets(str1);
puts("enter  no . of character  to copy\n");
scanf("%d",&n);
strncpy(str2,str1,n);
printf("%d character at beg will be\n",n);
puts(str2);
return 0;

}
*/
/*
//strncpy
#include<string.h>
int main()
{char str1[20],str2[20];
int n;
puts("enter  string 1 ");
gets(str1);
puts("enter  string 2 ");
gets(str2);
puts("enter  no . of character  to compare \n");
scanf("%d",&n);
if(strncmp(str2,str1,n)==0)// compares the n portion of string
printf("the given portion of string is same\n");
else
printf("the given portion of string is not same\n");
return 0;

}
*/
/*
//strncat
#include<string.h>
int main()
{char str1[20],str2[20];
int n;
puts("enter  string 1 ");
gets(str1);
puts("enter  string 2 to concatenate\n");
gets(str2);
puts("enter  no . of character  to concatenate \n");
scanf("%d",&n);
strncat(str1,str2,n);
printf("after the %d charecter cancatenation the string will be\n",n);
puts(str1);
return 0;

}
*/

/*
//strstr :- finds a part of string returns the address of a pointer contains 
#include<string.h>
#include<stdio.h>
int main()
{char str1[20],str2[20],*ptr;
puts("enter  string 1 ");
gets(str1);
puts("enter  string 2 \n");
gets(str2);
ptr=strstr(str1,str2);//returns the address of that part of string
printf("the  string ",ptr);
return 0;

}

*/
/*
//strlwr
#include<string.h>
#include<stdio.h>
int main()
{char str1[20];
puts("enter  string to change in lower case ");
gets(str1);
strlwr(str1);
printf("after changing in lower case %s\n",str1);
return 0;

}
*/

/*
//strupr
#include<string.h>
#include<stdio.h>
int main()
{char str1[20];
puts("enter  string to change in upper case ");
gets(str1);
strupr(str1);
printf("after changing in upper case %s\n",str1);
return 0;

}
*/

/*
//atoi
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{char str1[20];int n;
puts("enter  integer string to change in int ");
gets(str1);
n=atoi(str1);// changes number string to int data type
printf("integer = %d \t string = %s",n,str1);
return 0;

}
*/

//itoa
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{char str1[20],*ptr;int n;
puts("enter  number to change in string ");
scanf("%d",&n);
itoa(n,str1,10);// changes string to int data type
printf("%s",str1);
return 0;

}
