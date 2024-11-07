/*
// pattern 1
#include<stdio.h>
int main()
{int i ,j;
for(i=1;i<=5;i++){
for(j=1;j<=5;j++)
printf("*");
printf("\n");
}
return 0;
}
*/

/*
// pattern 2
#include<stdio.h>
int main()
{int i ,j;
for(i=1;i<=5;i++){
for(j=1;j<=5;j++)
printf("%d",i);
printf("\n");

}
return 0;
}

*/
/*
// pattern 3
#include<stdio.h>
int main()
{int i ,j;
for(i=1;i<=5;i++){
for(j=1;j<=5;j++)
printf("%d",j);
printf("\n");

}
return 0;
}
*/

/*
//pattern 4
#include<stdio.h>
int main()
{int i ,j;
for(i=5;i>=1;i--){
for(j=1;j<=5;j++)
printf("%d",i);
printf("\n");

}
return 0;
}
*/

/*
// pattern  5
#include<stdio.h>
int main()
{int i ,j;
for(i=5;i>=1;i--){
for(j=5;j>=1;j--)
printf("%d",j);
printf("\n");

}
return 0;
}
*/


// pattern 6
#include<stdio.h>
int main()
{int i ,j,p=1;
for(i=1;i<=5;i++){
for(j=1;j<=5;j++)
if(p>=9)
printf("%d  ",p++);
else 
printf(" %d  ",p++);
printf("\n");

}
return 0;
}



  
