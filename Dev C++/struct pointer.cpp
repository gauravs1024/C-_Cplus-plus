#include<iostream>
using namespace std;
struct date {short int dd,mm,yy;};
date dt={19,12,2006};
date *ptr;
ptr=&dt;
int main()
{cout<<"printing structure element using variables\n";
cout<<"dd="<<dt.dd<<"mm ="<<dt.mm<<"yy="<<dt.yy;
cout<<"\nprinting using pointer\n";
cout<<"dd="<<ptr->dd<<"mm="<<ptr->mm<<"yy="<<ptr->yy;
return 0;
}
