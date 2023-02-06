#include<stdio.h>
int main()
{
	int a;
	int b;
    int luachon;
   

	printf("1\.tong\n2.hieu\n3.tich\n4.thuong\n");
	scanf("%d",&luachon);

	switch(luachon){
		case 1:{
			printf("nhap a,b:\n");
			scanf("%d%d",&a,&b);
			printf("%d+%d=%d",a,b,a+b);
			break;
		}
			case 2:{
			printf("nhap a,b\n");
			scanf("%d%d",&a,&b);
			printf("%d-%d=%d",a,b,a-b);
			break;
		}
			case 3:{
			printf("nhap a,b\n");
			scanf("%d%d",&a,&b);
			printf("%d*%d=%d",a,b,a*b);
			break;
		}
 		case 4:{
			printf("nhap a,b\n");
			scanf("%d%d",&a,&b);
			printf("%d/%d=%d",a,b,a/b);
			break;
		}
		
}

		return 0;
		
}
