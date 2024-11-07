#include<iostream>
using namespace std;
int main()
{int *p[5];
int a=1,b=2,c=3,d=4,e=5;
//cout<<&a<<&b<<&c<<&d<<&e;
p[0]=&a;p[1]=&b;p[2]=&c;p[3]=&d;p[4]=&e;
for(int i=0;i<5;i++)
cout<<"the pointer p["<<i<<"] points to "<<*p[i]<<"\n";
cout<<endl;
cout<<"the base address of p ="<<p<<"\n\n";
for(int i=0;i<5;i++)
cout<<"the address stored in p["<<i<<"] points to "<<p[i]<<"\n";
return 0;
}