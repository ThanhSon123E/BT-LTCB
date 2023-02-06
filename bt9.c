#include<stdio.h>
int main()
{
	int a;
	printf("Nhap doanh so ban hang :\n");
	scanf("%d",&a);
	if(a<=100)
	{printf("nhan 5% :\n");
	}
	else if (a<=300)
	{printf("nhan 10%;\n");
	}
	else 
	{printf("nhan 20%:\n");
	}
	return 0;
}
