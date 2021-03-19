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
Donthuc Tich2Donthuc(Donthuc m1, Donthuc m2);
Donthuc Thuong2Donthuc(Donthuc m1, Donthuc m2);
Donthuc Daoham(Donthuc m);
float Giatri (Donthuc m, float x);

void Menu()
{
	printf("Chuong trinh thao tac tren cau truc don thuc ");
	printf("\n1. Nhap xuat don thuc ");
	printf("\n2. Tich, Thuong hai don thuc ");	
	printf("\n3. Dao ham don thuc ");	
	printf("\n4. Gia tri don thuc ");	
			
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
			case 2 : printf ("\nNhap don thuc 1 : ");NhapDonthuc(m1);
					 printf ("\nNhap don thuc 2 : ");NhapDonthuc(m2);
					 m = Tich2Donthuc(m1, m2); 
					 printf ("\nDon thuc tich m1 * m2 = "); XuatDonthuc(m);
					 m = Thuong2Donthuc(m1, m2); 
					 printf ("\nDon thuc tich m1 * m2 = "); XuatDonthuc(m);	 
					 break ;	 
			case 3 : NhapDonthuc(m); m1 = Daoham (m); 
					 printf ("\nDon thuc dao ham m1 = ");
					 XuatDonthuc(m1); break;
			case 4 : NhapDonthuc(m); 
					 printf ("x = "); scanf ("%f", &x);
					 printf ("Gia tri don thuc = %.2f ", Giatri(m,x));
					 break;
				
		}
	}while (chon != 0);	
}

void NhapDonthuc(Donthuc &m)
{	
	do
	{	printf("\nNhap he so cua don thuc : ");
		scanf ("%f", &m.Heso);
	} while (m.Heso==0);
	printf("Nhap so mu cua don thuc : ");
	scanf ("%d", &m.Somu);	
	
}

void XuatDonthuc(Donthuc m)
{	printf("%.2fx^%d", m.Heso, m.Somu); }

Donthuc Tich2Donthuc(Donthuc m1, Donthuc m2)
{	Donthuc m;
	m.Heso = m1.Heso * m2.Heso;
	m.Somu = m1.Somu + m2.Somu;
	return m;
}

Donthuc Thuong2Donthuc(Donthuc m1, Donthuc m2)
{	Donthuc m;
	m.Heso = m1.Heso / m2.Heso;
	m.Somu = m1.Somu - m2.Somu;
	return m;
}

Donthuc Daoham(Donthuc m)
{	Donthuc m1;
	m1.Heso = m.Heso * m.Somu;
	m1.Somu = m.Somu - 1;
	return m1;
}

float Giatri (Donthuc m, float x)
{
	return m.Heso * pow(x,m.Somu);
}