#include<stdio.h>
void hoanvi(int *a , int *b){
	int temp = *a;
	*a = *b; 
	*b = temp;
}
int main()
{
int a , b;
printf("nhap a:"); scanf("%d",&a);
printf("nhap b:"); scanf("%d",&b);
printf("a = %d , b = %d",a,b);
hoanvi(&a, &b);
printf("a = %d , b = %d",a ,b);

}
