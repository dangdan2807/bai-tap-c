#include <stdio.h>
//#include <conio.h>
#include <iostream>
//enum bool {false, true};

void nhap(int &x, int &y);
void bp(int &x, int &y);
void lp(int &x, int &y);
void hv(int &x, int &y);
void hienthi(void (*)(int &, int &), int &, int &);

int main()
{
	void (*pf)(int &, int &);
	bool thoat = false;
	int a = 2, b = 4;
	int chon;
	//clrscr();
	while(thoat == false)
	{
		printf("\n (0) Thoat (1)Nhap (2)Binhphuong (3)Lapphuong (4)Hoanvi \n");
		scanf("%d", &chon);
		switch (chon)
		{
			case 1:
				pf = nhap;
				break;
			case 2:
				pf = bp;
				break;
			case 3:
				pf = lp;
				break;
			case 4:
				pf = hv;
				break;
			default:
				thoat = true;
				break;
		}
		if(thoat)break;
		hienthi(pf,a,b);
	}
	return 0;
}

void hienthi(void (*pf)(int &, int &),int &x, int &y)
{
	printf("\n a = %d, b = %d \n", x, y);
	pf(x, y);
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