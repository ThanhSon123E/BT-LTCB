#include <stdio.h>
#include <limits.h>

int main()
{
	int a = 0;
	int b = 0;
	
	printf("ban nhap a: \n");
	scanf("%d", &a);
	printf("ban hay nhap b: \n");
	scanf("%d", &b);
	
	int tong = 0;
	int tich = 0;
	float thuong = 0;
	int hieu = 0;
	 
	tong = a+b;
	tich = a*b;
	thuong = (float)a/b;
	hieu = a-b;
	
	printf("sizeof of a %d \n",sizeof(int));
	
	printf("a= %d, b=%d \n",a,b);
	printf("a+b= %d \n",tong);
	printf("a*b= %d \n",tich);
	printf("a/b= %3f.o \n",thuong);
	printf("a-b= %d \n",hieu);
	
	

	return 0;
}
