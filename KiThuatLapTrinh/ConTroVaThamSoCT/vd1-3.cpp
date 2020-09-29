#include <stdio.h>
#include <iostream>

void nhap(int &x, int &y);
void bp(int &x, int &y);
void lp(int &x, int &y);
void hv(int &x, int &y);
void hienthi(int a, int b);

int main()
{
	bool thoat = false;
	int a = 2, b = 4;
	int chon;
	while(thoat == false)
	{
		printf("\n (0)Thoat   (1)Nhap   (2)Binh phuong   (3)Lap phuong   (4)Hoan vi \n");
		scanf("%d", &chon);
		printf("\nGia tri truoc khi doi:");
		hienthi(a, b);
		switch (chon)
		{
			case 1:
				nhap(a, b);
				break;
			case 2:
				bp(a, b);
				break;
			case 3:
				lp(a, b);
				break;
			case 4:
				hv(a, b);
				break;
			default:
				thoat = true;
				break;
		}
		if(thoat) break;
		printf("\nGia tri sau khi doi:");
		hienthi(a,b);
	}
	return 0;
}
void hienthi(int x, int y)
{
	printf("\n a = %d, b = %d \n", x, y);
}

void bp(int &x, int &y)
{
	x *= x;
	y *= y;
}

void lp(int &x, int &y)
{
	x = x*x*x;
	y = y*y*y;
}

void hv(int &x, int &y)
{
	int tam =x;
	x = y;
	y = tam;
}

void nhap(int &x, int &y)
{
	printf("\n Nhap gia tri moi cua a: ");
	scanf("%d", &x);
	printf("\n Nhap gia tri moi cua b: ");
	scanf("%d", &y);
}
