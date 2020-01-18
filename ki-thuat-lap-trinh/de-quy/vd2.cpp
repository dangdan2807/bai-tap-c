#include <iostream>
#include <stdio.h>
using namespace std;

double capsocong(int n, int a, int r);
double capsonhan(int n, int a, int q);
double capsocong2(int n, int a, int r);
double capsonhan2(int n, int a, int q);

int main()
{
	int n, a, r, q;
	cout <<"Nhap thu n: ";
	do{
		cin >>n;
		if(n < 1)
			cout <<"Du lieu khong hop le, nhap lai n: ";
	}while(n < 1);
	cout <<"Nhap gia tri dau a: ";
	cin >>a;
	cout <<"Nhap cong sai r: ";
	cin >>r;
	cout <<"Nhap cong boi q: ";
	cin >>q;
	cout <<"Day cap so cong :\n";
	capsocong(n, a, r);
	cout <<"\nDay cap so nhan:\n";
	capsonhan(n, a, q);
	cout <<"\n\n\tPhan khong su dung de quy:\n";
	cout <<"\nDay cap so cong:\n";
	capsocong2(n, a, r);
	cout <<"\nDay cap so nhan:\n";
	capsonhan2(n, a, r);
	return 0;
}

double capsocong(int n, int a, int r)
{
	if(n >= 2)
	{
		a += r;
		capsocong(n-1, a, r);
	}
	else if(n == 1)
		return a;
	cout << a <<"\t";
	if((n-1) % 10 == 0)
		cout <<"\n";
}
double capsonhan(int n, int a, int q)
{
	if(n == 1)
		return a;
	else if(n >= 2)
	{
		a *= q;
		capsonhan(n-1, a, q);
	}
	cout << a <<"\t";
	if((n-1) % 10 == 0)
		cout <<"\n";
}

double capsocong2(int n, int a, int r)
{
	for(int i = 1; i < n; i++)
	{
		a += r;
		cout <<a <<"\t";
		if(i % 10 == 0)
			cout <<"\n";
	}
	return a;
}
double capsonhan2(int n, int a, int q)
{
	for(int i = 1; i< n; i++)
	{
		a *= q;
		cout <<a <<"\t";
		if(i % 10 == 0)
			cout <<"\n";
	}
	return a;
}