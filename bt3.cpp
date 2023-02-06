#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("nhap day lon,day be,chieu cao,canh ben:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("dien tich hinh thang la %d:\n",(a+b)*c/2);
	printf("chu vi hinh thang la %d:\n",a+b+c+d);
	return 0;
	
}
