#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, a=1;
	float s=0;
	cout << "Nhap so phan tu: ";
	cin >> n;
	while(a<=n)
	{
		s=s+1.0/a;
		a+=1;
	}
	cout <<"tong la: "<< s;
	return 0;
}
