#include<iostream>
using namespace std;
main()
{
	float a;
	cout<<"nhap a";
	cin>>a;
	float b;
	cout<<"nhap b";
	cin>>b;
	if (a==0)
	{
		if (b==0) cout<< "phuong trinh co vo so nghiem";
		if (b!=0) cout<< "phuong trinh vo nghiem";
	}
	if (a!=0) 
	{ 
	cout<<"xx="<<-b/a;
	}
}
