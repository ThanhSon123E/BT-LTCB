#include "stdio.h"
#include "conio.h"

#define MAX 100

int InMang(int a[], int n);
//1
int TinhTong(int a[], int n);
//2
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
	TinhTong(a,n);
	TinhTich(a,n);
	TinhTrungBinh(a,n);
	TimMax(a,n);
	TimMin(a,n);
	TimX(a,n,0);
//	SapXepTang(a,n);
//	SapXepGiam(a,n);
//	ThemDau(a, n, 99);
//    ThemCuoi(a, n, 99);
//	ThemVaoViTri(a, n, 3, 99);
//	XoaDau(a, n);
//	XoaCuoi(a, n);
	XoaTaiViTri(a, n, 3);
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
{
	int s = 0;
	for(int i = 0; i < n; i++)
	{
	s = s + a[i];
	}
	printf("Tong = %d\n", s);
	return s;
}

int TinhTich(int a[], int n)
{
	int p = 1;
	for(int i=0; i<n; i++)
	{
		p=p*a[i];
	}
	printf("Tich=%d\n",p);
	return p;
}

float TinhTrungBinh(int a[], int n)
{
	int s = TinhTong(a,n);
	float tb= (float)s/n;
	printf("Trung Binh = %f\n",tb);
	return tb;
}

int TimMax(int a[],int n)
{
	int max = a[0];
	for(int i=0; i<n; i++)
	{
		if(a[i]>max) 
		{
		  max=a[i];
	    }	
	}
	printf("\nphan tu max la:%d", max);
		return max;
	
}

int TimMin(int a[],int n)
{
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i]<min) 
		{
		  min = a[i];
	    }	
	}
	printf("\nphan tu min la:%d", min);
		return min;
	
}

int TimX(int a[], int n, int x)
{
	int pos = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i]==x)
		{
			pos = i;
			break;
		}
	}
	printf("\npos: %d\n", pos);
	return pos;
}

int SapXepTang(int a[], int n)
{
	InMang(a,n);
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1; j++)
		{
			if(a[i] > a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	InMang(a,n);
}

int SapXepGiam(int a[], int n)
{
	InMang(a,n);
	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1; j++)
		{
			if(a[i] < a[j+1])
			{
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	InMang(a,n);
}

int ThemDau(int a[], int &n, int x)
{
	InMang(a,n);
	for(int i = n-1; i >= 0; i--)
	{
		a[i+1] = a[i];
	}
	printf("Them Dau\n");
	a[0] = x;
	n = n + 1;
	InMang(a,n);
	return n;
}
	int ThemCuoi(int a[], int &n, int x)
	{
		printf("Them Cuoi\n");
		a[n]=x;
		InMang(a,n);
		return n;
	}
	
int ThemVaoViTri(int a[], int &n, int p, int x)
{
	printf("Them vao vi tri \n");
	for(int i = p; i >= 0; i--)
	{
		a[i+1] = a[i];
	}
	a[p] = x;
	n = n + 1;
	InMang(a,n);
	return n;
}

int XoaDau(int a[], int &n)
{
	for(int i = 0; i < n-1; i ++)
	{
		a[i] = a[i+1];
	}
	n = n - 1;
	InMang(a,n);
}
int XoaCuoi(int a[], int &n)
{
	n = n - 1;
	InMang(a,n);
}
int XoaTaiViTri(int a[], int &n, int p)
{
	for(int i = p; i < 0; i++)
	{
		a[i] = a[i+1];
	}
	n = n - 1;
	InMang(a,n);
	return n;
}




	






