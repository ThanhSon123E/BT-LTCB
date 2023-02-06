#include<stdio.h>
int main()
{
	int a,i,s;
	printf("nhap ten cuu chuong");
	scanf("%d",&a);
	for(i=1; i<=10; i++)
	{
		s= a*i;
		printf("%dx%d=%d:\n",a,i,s);
		
	}
	return 0;
}
