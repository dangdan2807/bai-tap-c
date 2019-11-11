#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int xa, xb, ya, yb;
	float ab;
	cout << "Nhap toa do cua diem A(xa, ya): ";
	cin >> xa >> ya;
	cout << "Nhap toa do cua diem B(xb, yb): ";
	cin >> xb >> yb;
	ab=sqrt(pow(xa-xb, 2)+pow(ya-yb, 2));
	cout << "Do dai vecto AB la: " << ab;
	return 0;
}
