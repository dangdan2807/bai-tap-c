#include<stdio.h>
#include<conio.h>
#include<math.h>

struct Donthuc // Monomial
{
	float Heso ; //coefficient
	int Somu ; //exponent
};

void NhapDonthuc(Donthuc &m);
void XuatDonthuc(Donthuc m);

void Menu()
{
	printf("Chuong trinh thao tac tren cau truc don thuc ");
	printf("\n1. Nhap xuat don thuc ");
			
}

int main()
{	int chon; float x;
	Donthuc m, m1, m2;
	Menu();
	do 
	{
		printf("\nChon chuc nang, chon 0 de thoat : ");
		scanf ("%d", &chon);
		switch (chon)
		{
			case 1 : NhapDonthuc(m); XuatDonthuc(m); break ;
				
		}
	}while (chon != 0);	
}

void NhapDonthuc(Donthuc &m)
{	float hs;
	do
	{	printf("\nNhap he so cua don thuc : ");
		scanf ("%f", &hs); m.Heso = hs ;
	} while (hs==0);
	printf("Nhap so mu cua don thuc : ");
	scanf ("%d", &m.Somu);	
	
}

void XuatDonthuc(Donthuc m)
{	printf("%.2fx^%d", m.Heso, m.Somu); }

