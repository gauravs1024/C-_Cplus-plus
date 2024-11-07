#include<iostream>
//#include<conio.h>>

using namespace std;
int main()
{int c,e;
int square(int &);
cout<<"enter a number";
cin>>e;
c=square(e);																																																
cout<<c<<endl<<e;
return 0;
//getch();

}
int square(int &a)
{ return a=a+3;}

/*int cube(int b)
{int square(int);
b=square(9);
return b;
}*/