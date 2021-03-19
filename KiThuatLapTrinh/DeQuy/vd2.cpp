#include <iostream>
#include <stdio.h>
using namespace std;

double capSoCong(int n, int a, int r);
double capSoNhan(int n, int a, int q);
double capSoCong2(int n, int a, int r);
double capSoNhan2(int n, int a, int q);

int main()
{
	int n, a, r, q;
	cout << "Nhap thu n: ";
	do
	{
		cin >> n;
		if (n < 1)
			cout << "Du lieu khong hop le, nhap lai n: ";
	} while (n < 1);
	cout << "Nhap gia tri dau a: ";
	cin >> a;

	cout << "Nhap cong sai r: ";
	cin >> r;

	cout << "Nhap cong boi q: ";
	cin >> q;

	cout << "Day cap so cong :\n";
	for (int i = 1; i <= n; i++)
	{
		cout << capSoCong(i, a, r) << "\t";
		if (i % 10 == 0)
			cout << "\n";
	}

	cout << "\nDay cap so nhan:\n";
	for (int i = 1; i <= n; i++)
	{
		cout << capSoNhan(i, a, q) << "\t";
		if (i % 10 == 0)
			cout << "\n";
	}

	cout << "\n\nPHAN KHONG SU DUNG DE QUY:";
	cout << "\nDay cap so cong:\n";
	capSoCong2(n, a, r);
	cout << "\nDay cap so nhan:\n";
	capSoNhan2(n, a, q);
	return 0;
}

double capSoCong(int n, int a, int r)
{
	if (n == 1)
		return a;
	else if (n >= 2)
	{
		a += r;
		return capSoCong(n - 1, a, r);
	} 
}

double capSoNhan(int n, int a, int q)
{
	if (n == 1)
		return a;
	else if (n >= 2)
	{
		a *= q;
		return capSoNhan(n - 1, a, q);
	}
}

double capSoCong2(int n, int a, int r)
{
	for (int i = 1; i <= n; i++)
	{
		cout << a << "\t";
		a += r;
		if (i % 10 == 0)
			cout << "\n";
	}
	return a;
}

double capSoNhan2(int n, int a, int q)
{
	for (int i = 1; i <= n; i++)
	{
		cout << a << "\t";
		a *= q;
		if (i % 10 == 0)
			cout << "\n";
	}
	return a;
}