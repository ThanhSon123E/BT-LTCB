#include<stdio.h>
int main()
{
	int a,b,c;
	printf("nhap diem kiem tra :\n");
	scanf("%d",&a);
	printf("nhap diem giua ki \n");
	scanf("%d",&b);
	printf("diem thi cuoi ki :\n");
	scanf("%d",&c);
	if ((a+b+c)/3 >=9.0)
	{printf("hang A:\n");
	}
	else if( (a+b+c)/3>=7.0 && (a+b+c)/3<9.0)
	{
		printf("hang B:\n");
	}
	else if((a+b+c)/3 >=5.0 &&(a+b+c)/3 <7.0 )
	{
		printf("hang C:\n");
	}
	else{
	
	printf("hang F:\n");
}
	return 0;
}
