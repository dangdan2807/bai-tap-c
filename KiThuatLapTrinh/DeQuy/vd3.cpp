#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

void xuatnhiphan(int n)
{
	if (n != 0)
	{
		xuatnhiphan(n / 2);
		cout << n % 2;
	}
}

int main()
{
	int n;
	cout << "Nhap so he 10: ";
	do
	{
		cin >> n;
		if(n < 0)
			cout << "n >= 0\nNhap lai: ";
	} while (n < 0);

	xuatnhiphan(n);
	return 0;
}
