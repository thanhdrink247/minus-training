#include<stdio.h>
main(){
	int a[]={15 , 13 , 9, 66, 44 , 101, 54 , 31, 11, 18, 22,1 ,7 };
	int i,j;
	for (i=0;i<12;i++)
	{
		int min=a[i];
		int k=i;
		for(j=i;j<13;j++)
			if (a[j]<min)
			{
				min=a[j];
				k=j;
			}
		int tg=a[i];
		a[i]=a[k];
		a[k]=tg;
	}
	for(i=0;i<13;i++)
		printf("%d  ",a[i]);
	}
