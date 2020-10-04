#include<iostream>
using namespace std;
main()
{
	float a;
	printf("nhap a: ");
	scanf("%f",&a);
	int b;
	cout<<"nhap b: ";
	cin>>b;
	float c;
    cout<<"nhap c: ";
    cin>>c;
    float denta;
     denta=b*b-4*a*c; 
      if (denta>0) cout<<"phuong trinh co hai nghiem";
      if (denta==0) cout<<"phuong trinh co mot nghiem";
      if (denta<0) cout<<"phuong trinh vo nghiem";
}
