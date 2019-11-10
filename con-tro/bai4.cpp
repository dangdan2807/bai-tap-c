#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a=10, b=5;
	int *ptr1, *ptr2;
	ptr1 = &a;
	ptr2 = &b;
	int sum= *ptr1 + *ptr2;
	cout <<"Tong la: " << sum;
	return 0;
}
