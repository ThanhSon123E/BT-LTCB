#include<stdio.h>
int main()
{
	int thang,nam;
	printf("so ngay thang ");
	scanf("%d",&thang);
		printf("nhap nam");
	scanf("%d",&nam);
	if ((nam%400==0) || (nam%4==0 && nam%100!=0) ){
		printf("co 29 ngay");}
		else{
			printf("co 28 ngay");
		}
		return 0;
	
}
