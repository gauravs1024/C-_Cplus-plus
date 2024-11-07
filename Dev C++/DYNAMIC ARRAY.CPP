#include<iostream>
#include<dynamic.h>
#include<vector>
using namespace std;
int main()
{cout<<"enter the no. of elements ";
int count, j,sum=0;
cin>>count;
vector<int>arr;
arr.resize(count);
for(int i=0;i<arr.size();i++)
{arr[i]=i;
sum+=arr[i];}
cout<<"array sum "<<sum;
return 0;


}
