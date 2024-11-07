#include<string.h>
#include<iostream>
using namespace std;
int main()
{char a[10][20],b[20];int i,j;
for(i=0;i<3;i++){
cout<<"enter "<<"name "<<i+1<<endl;
cin>>a[i];}
for(i=0;i<2;i++){
for(j=0;j<4;j++)
{if(a[i][j]>a[i+1][j]){
strcpy(b,a[i+j]);
strcpy(a[i+j],a[i]);
strcpy(a[i],b);}
}
}
for(i=0;i<3;i++)
cout<<a[i]<<endl;

}