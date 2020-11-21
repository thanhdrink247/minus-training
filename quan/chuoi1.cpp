#include<stdio.h>
#include<string.h>
main()
{
    char chuoi[100];
    int i, n, dem=0;
    printf("nhap chuoi : ");
    gets(chuoi);
    n= strlen(chuoi);
    for(i=0; i<n; i++)
    {
        if(chuoi[i]==32)
        {
        dem++;
        }
     }
    printf("co %d khoang trang trong chuoi ", dem);
}
