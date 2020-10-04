#include<iostream> 
using namespace std;
main()
{
	long luong;
	cout<<"nhap luong chinh ";
	cin>>luong;
	cout<<luong<<"\n";
	long thue;
	 if(luong>15000000) thue=luong*30/100; 
	 cout<<thue<<"\n";
	 if((7000000<=luong)&&(luong<=15000000)) thue=luong*20/100;
	 cout<<thue<<"\n";
	 if(luong<7000000) thue=luong*10/100;
	 cout<<thue<<"\n";
	 
}
