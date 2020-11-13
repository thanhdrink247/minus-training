#include<stdio.h>
main(){
	int so;
	printf("nhap so:");
	scanf("%d", &so);
  	
	switch(so) { 
	 case 0 : printf("khong\n");
	 break;
	 case 1 : printf("mot\n");
	 break;
	 case 2 : printf("hai\n");
	 break;
	 case 3 : printf("ba\n");
	 break;
	 case 4 : printf("bon\n");
	 break;
	 case 5 : printf("nam\n");
	 break;
	 case 6 : printf("sau\n");
	 break;
	 case 7 : printf("bay\n");
	 break;
	 case 8 : printf("tam\n");
	 break;
	 case 9 : printf("chin\n");
	    break;
	default:
	printf("nhap so khong hop le!");
	}
}
