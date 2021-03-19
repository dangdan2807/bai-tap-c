#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

long tong(int n);
long tich(int n);
double luyThua(float a, int n);

int main()
{
	int n;
	cout << "Nhap n: ";
	do
	{
		cin >> n;
		if (n < 0)
			cout << "Du lieu khong hop le. Nhap lai n: ";
	} while (n < 0);

	cout << "Nhap so thuc a: ";
	float a;
	cin >> a;
	a *= 1.0;
	cout << "\nS(" << n << ") = " << tong(n);
	cout << "\nP(" << n << ") = " << tich(n);
	cout << "\nA(" << a << ", " << n << ") = " << luyThua(a, n);
	return 0;
}

long tong(int n)
{
	if (n <= 0)
		return n;
	return n += tong(n - 1);
}

long tich(int n)
{
	if (n <= 1)
		return n;
	return n *= tich(n - 1);
}

double luyThua(float a, int n)
{
	if (n == 1)
		return a;
	else
	{
		double temp = luyThua(a, n / 2);
		if (n % 2 == 0)
			return temp * temp;
		else
			return temp * temp * a;
	}
}