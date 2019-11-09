#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a;
	cout << "Nhap so a (0<= a <= 100): ";
	do
	{
		cin >> a;
	}while(!(a>=0 && a<=100));
	cout <<"Dung";
	return 0;
}
