#include<iostream>
using namespace std;
int *rollno;
float *marks;
int main()
{int size;
cout<<"how many elements are there in array";
cin>>size;
rollno= new int[size];
marks= new float[size];
if((!rollno)||(!marks))
	{cout<<"out of memory";
	return 1;
	
	}
	for(int i=0;i<size;i++)
	{cout<<"enter roll no and marks";
	cin>>rollno[i]>>marks[i];
}
cout<<"\trollno\tmarks\n";
for (int i=0;i<size;i++)
cout<<"\t"<<rollno[i]<<"\t"<<marks[i]<<endl;

 delete[]rollno;
 delete[]marks;
 return 0;
 }