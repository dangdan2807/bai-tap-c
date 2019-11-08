#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a;
	printf("Nhap so a (0<= a <= 100): ");
	do
	{
		cin >> a;
	}while(!(a>=0 && a<=100));
	printf("Dung");
	return 0;
}
