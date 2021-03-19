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
int gcd (int a, int b);
void RutgonPS (PHANSO &ps);


void Menu()
{
	printf("Chuong trinh thao tac tren cau truc phan so : ");
	printf("\n1. Nhap phan so ");
	printf("\n2. Xuat phan so ");
	printf("\n3. Rut gon phan so ");
		
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
			case 3 : RutgonPS(ps); 
					 printf ("Phan so sau khi rut gon : ");
					 OutputPS(ps); break ;
					 
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

int gcd (int a, int b)
{
	if(a<b) return gcd (b,a);
	if (a%b == 0) return b;
	return gcd(b, a%b); 
}

int gcd1 (int a, int b)
{	int t;
	if (a<b)
		{
			t=a ; a= b; b=t;	
		}
	while (a%b !=0)
	{
		t =a; a=b; b= t%b;
	}	
	return b;
}

void RutgonPS(PHANSO &ps) 
{	int d = gcd(abs(ps.tu),ps.mau);
	if (d > 1)
		{
			ps.tu/=d; ps.mau/=d;
		}
}

