#include<stdio.h>
struct student
{int r;
int c;
} *st;
int print(student *);
int main()
{ int a;
printf("eneter any number\n");
scanf("%d",&a);
print(&a);
return 0;
}
int print(student *st)
{printf("%d",st);
return 0;
}