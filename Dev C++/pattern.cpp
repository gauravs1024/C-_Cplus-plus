#include<iostream>
using namespace std;
int p1(int);
int p2(int);
int p3(int);
int p4(int);
int p5(int);
int p6(int);
int p7(int);
int p8(int);
int p9(int);
int p10(int);
int main()
{int n,ch;
cout<<"************PATTERN PRINTING*************\n";
cout<<"enter number rows to print\n";
cin>>n;
cout<<"choose any one \n";
cout<<"1.left upper half triangle\n";
cout<<"2.bottom upper half triangle\n";
cout<<"3.right upper half trinagle\n";
cout<<"4.pyramid\n";
cout<<"5.rhombus\n";
cout<<"6.reverse traingle\n";
cout<<"7.right reverse traingle\n";
cout<<"8.daimond pattern\n";
cout<<"9.damru shape\n";
cout<<"10.hollow right angle triangle\n";
cin>>ch;
system("cls");
switch(ch){
	case 1:
		p1(n);
	case 2:
		p2(n);
		break;
	case 3:
		p3(n);
		break;
	case 4:
		p4(n);
		break;
	case 5:
		p5(n);
		break;
	case 6:
		p6(n);
		break;
	case 7:
		p7(n);
		break;
	case 8:
		p8(n);
		break;	
	case 9:
		p6(n);
		p4(n);
		break;	
	case 10:
		p10(n);
		break;		
	default:
	cout<<"wrong choice\n";
}
 
}

int p1(int n)		//left upper half traingle
{int r,c;							
for(r=1;r<=n;r++){
for(c=1;c<=r;c++)
cout<<"*";
cout<<"\n";}
return 0;
}
int p2(int n)				// bottom half left triangle
{int r,c;
for(r=n;r>=1;r--){
for(c=1;c<=r;c++)
cout<<"*";
cout<<"\n";
}
return 0;
}
int p3(int n)  	//right upper half triangle
{int r,c,k;
for(r=1;r<=n;r++){
for(c=1;c<=n-r;c++)
cout<<" ";
for(k=1;k<=r;k++)
cout<<"*";
cout<<"\n";
}
return 0;
}
int p4(int n)  	// upper  triangle(pyramid)
{int r,c,k;
for(r=1;r<=n;r++){
for(c=1;c<n-r+1;c++)
cout<<" ";
for(k=n;k>=n-r+1;k--)
cout<<"* ";
cout<<"\n";
}
return 0;
}
int p5(int n)  	// rhombus
{int r,c,k;
for(r=1;r<=n;r++){
for(c=1;c<=r-1;c++)
cout<<" ";
for(k=n;k>=1;k--)
cout<<"* ";
cout<<"\n";
}
return 0;
}

int p6(int n)  	// reverse triangle
{int r,c,k;
for(r=1;r<=n;r++){
for(c=1;c<=r-1;c++)
cout<<" ";
for(k=1;k<=n-r+1;k++)
cout<<"* ";
cout<<"\n";
}
return 0;
}
int p7(int n)  	// right reverse triangle
{int r,c,k;
for(r=1;r<=n;r++){
for(c=1;c<=r-1;c++)
cout<<" ";
for(k=1;k<=n-r+1;k++)
cout<<"*";
cout<<"\n";
}
return 0;
}
int p8(int n)  	// diamond pattern works on only odds number of rows
{int r,c,k,t;
for(r=1;r<=n;r++){
	if(r<=n/2+1){
	
for(c=1;c<=n/2-r+1;c++)
cout<<" ";
for(k=1;k<=r;k++)
cout<<"* ";
cout<<"\n";}
else{
for(c=1;c<=r-n/2-1;c++)
cout<<" ";
for(k=1;k<=n-r+1;k++)
cout<<"* ";
cout<<"\n";}

}
return 0;
}
int p9(int n)
{int r,s1,k,s2,p;p=n;
	for(r=1;r<=n;r++){
		if(r<=n/2+1){
			for(s1=1;s1<=r-1;s1++)
			cout<<" ";
			for(k=1;k<=p;k++)
			cout<<"*";
			for(s2=1;s2<=r-1;s2++)
			cout<<" ";
			cout<<"\n";
			p-=2;}
		else	
	{	
		for(s1=r;s1<=n-1;s1++)
			cout<<" ";
			for(k=p;k<=r;k+=2)
			cout<<"*";
			for(s2=r;s2<=n-1;s2++)
			cout<<" ";
			cout<<"\n";
			
	}
}
	return 0;
}
	
int p10(int n)// hollow right angle triangle
{int i,j,k;
for(i=0;i<n;i++){
for(j=0;j<2*(n-i)-1;j++)
cout<<" ";
	for(k=0;k<2*i+1;k++){
	if(k==0||k==2*i||i==n-1)
	cout<<"*";
	else
	cout<<" ";
}
cout<<"\n";
}
return 0;
}
	
	
	