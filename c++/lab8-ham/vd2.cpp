#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int a;
	cout << "Nhap gia tri a khog am: ";
	cin >> a;
	if(a>0)
		cout << "Can bac 2 cua la: " << sqrt(a);
	else
		cout << " a >0";
	return 0;
}
