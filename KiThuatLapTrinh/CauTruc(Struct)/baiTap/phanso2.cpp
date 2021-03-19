#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct PHANSO
{
	int tu;
	int mau;
};

void InputPS (PHANSO &ps);
void OutputPS (PHANSO ps);

void Menu()
{
	printf("Chuong trinh thao tac tren cau truc phan so : ");
	printf("\n1. Nhap phan so ");
	printf("\n2. Xuat phan so ");
		
}

int main()
{	char chon;
	PHANSO ps, ps1, ps2;
	Menu();
	do 
	{
		printf("\nChon chuc nang, chon 0 de thoat : ");
		scanf ("%d", &chon);
		switch (chon)
		{
			case 1 : InputPS(ps); break ;
			case 2 : OutputPS(ps); break ;
					 
		}
	}while (chon != 0);	
}

void InputPS(PHANSO &ps)
{	do
	{	printf("Nhap phan so dang t/m voi mau so duong : ");
		scanf("%d/%d", &ps.tu, &ps.mau);	
	}while (ps.mau <= 0);

}

void OutputPS(PHANSO ps) 
{	
	printf("%d/%d",ps.tu, ps.mau);
}

