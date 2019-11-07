#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int n;
	float x, t;
	cout <<"Nhap so nguyen n: ";
	cin >> n;
	cout <<"Nhap so thuc x: ";
	cin >> x;
	t=0.5*x*n+2.32*pow(x,3);
	cout << "Ket qua la: "<< t;
	return 0;
}
