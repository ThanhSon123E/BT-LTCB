#include "stdio.h"
#include "conio.h"

#define MAX 100

int InMang(int a[], int n);
//1
int TinhTong(int a[], int n);
int TinhTich(int a[], int n);
float TinhTrungBinh(int a[], int n);
int TimMax(int a[], int n);
int TimMin(int a[], int n);
int TimX(int a[], int n, int x);
int SapXepTang(int a[], int n);
int SapXepGiam(int a[], int n);
int ThemDau(int a[], int &n, int x);
int ThemCuoi(int a[], int &n, int x);
int ThemVaoViTri(int a[], int &n, int p, int x);
int XoaDau(int a[], int &n);
int XoaCuoi(int a[], int &n);
int XoaTaiViTri(int a[], int &n, int p);

int main()
{
	int n = 6;
	int a[] = {1, 3 , 5, 7, 0, 10};	
	InMang(a, n);
//1 
	TinhTong(a,n);
	TinhTich(a,n);
//	TinhTrungBinh(a,n);
//	TimMax(a,n);
//	TimMin(a,n);
//	TimX(a,n,0);
//	SapXepTang(a,n);
//	SapXepGiam(a,n);
//	ThemDau(a, n, 99);
//	ThemCuoi(a, n, 99);
//	ThemVaoViTri(a, n, 3, 99);
//	XoaDau(a, n);
//	XoaCuoi(a, n);
//	XoaTaiViTri(a, n, 3);
	getch();
	return 0;
}

int InMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]=%d \n",i,a[i]);
	}
}
int TinhTong(int a[], int n)
{int tong=0;
	for(int i=0; i<n;i++)
	{
	

tong=tong+a[i];
}
printf("tomg la %d",tong);
}
int TinhTich(int a[], int n)
{
	int tich=1;
	for(int i; i<n;i++)
	{
		tich=tich*a[i];
	}
	printf("tich la %s",tich);
}

