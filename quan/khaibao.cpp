#include<stdio.h>
main(){

char a[100];
a[1]=1;
a[0]=0;
for (int i=2;i<100;i++)
a[i]=a[i-1]+a[i-2];

printf("Day fibonacy\n\n");
for (int i=0;i<100;i++)
printf("%d ",a[i]);
}
