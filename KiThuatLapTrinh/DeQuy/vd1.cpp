#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

long tong(int n);
long tich(int n);
double luythua(float a, int n);

int main()
{
	int n;
	cout <<"Nhap n: ";
	do{
		cin >>n;
		if(n < 0)
			cout <<"Du lieu khong hop le. Nhap lai n: ";
	}while(n < 0);
	cout <<"Nhap so thuc a: ";
	float a;
	cin >>a;
	a*=1.0;
	cout <<"\nS = 1 + 2 + ... + n = " <<tong(n);
	cout <<"\nP = 1 * 2 * ... * n = " <<tich(n);
	cout <<"\nA = a^n = " <<luythua(a, n);
	return 0;
}

long tong(int n)
{
	if(n <= 0)
		return n;
	n += tong(n-1);
}
long tich(int n)
{
	if(n <= 1)
		return n;
	n *= tich(n-1);
}
double luythua(float a, int n) 
{
	if(n == 1)
		return a;
	else
	{
		double temp = luythua(a ,n/2);
		if(n % 2 == 0)
			return temp * temp;
		else
			return temp * temp  * a;
	}
}