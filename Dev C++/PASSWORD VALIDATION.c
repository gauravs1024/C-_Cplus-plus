










#include<stdio.h>
#include<string.h>
int main()
{char a[50];
int upper=0,lower=0,space=0,special=0,total=0,number=0,i;
printf("------MAKE A STRONG PASSWORD------\n");
printf("password must contain \n");
printf("atleast 1 uppercase alphabet\n");
printf("atleast 1 lowercase alphabet\n");
printf("atleast 1 number\n");
printf("atleast 1 special charecter\n");
printf("total count should be greater than 6\n");
gets(a);
for(i=0;a[i]!='\0';i++)
{total++;
if(a[i]>=48&&a[i]<=57)//FOR NUMBER COUNT
number++;
else if(a[i]>=65&&a[i]<=90)//FOR UPPER CASE COUNT
upper++;
else if(a[i]>=97&&a[i]<=122)//LOWER CASE COUNT
lower++;
else if(a[i]==32)//SPACE COUNT
space++;
else if(a[i]>=58&&a[i]<=64)//SPECIAL CHARCTER COUNT
/*58=:
        59=;
        60=<
        61==
        62=>
        63=?
        64=@*/
special++;
else if(a[i]>=91&&a[i]<=96)//SPECIAL CHARCTER COUNT
 		/*91=[
        92=\
        93=]
        94=^
        95=_
        96=`
        */
special++;
else if(a[i]>=123&&a[i]<=126)//SPECIAL CHARCTER COUNT
  	/*	123={
        124=|
        125=}
        126=~
        */
special++;
else if(a[i]>=33&&a[i]<=47)//SPECIAL CHARCTER COUNT
     /*   33=!
        34="
        35=#
        36=$
        37=%
        38=&
        39='
        40=(
        41=)
        42=*
        43=+
        44=,
        45=-
        46=.
        47=/fffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
        */
special++;

}
printf("up=%d ,lw=%d,nu=%d,sl=%d,sp=%d,t=%d\n\n\n",upper,lower,number,special,space,total);
if(total<6||upper==0||lower==0||special==0||space!=0||number==0)
printf("PASSWORD NOT STRONG:(:(:(\n");
else
printf("PASSWORD IS STRONG %c%c%c\n",2,2,2);
return 0;
}