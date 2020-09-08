#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
	float z, x, n;
	cout << "Nhap so nguyen n va so thuc x: ";
	cin >> n >> x;
	z=(2*x+sqrt(x))/13;
	cout << " ket qua la: " << z << endl;
	cout << std::setprecision(2) << z << endl;
	return 0;
}
