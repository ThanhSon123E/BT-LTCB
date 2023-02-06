#include<stdio.h>
int main()
{
	int n, i,s;

	printf("nhap so");
	scanf("%d",&n);
for (i=1; i<=n; i++)
{
	s=s+i;
	printf("tong la: %d",s);
}

	return 0;
}
