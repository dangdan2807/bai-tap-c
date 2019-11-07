#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a=1, n;
	float x, s=0;
	cout << "Nhap so thuc x: ";
	cin >> x;
	cout << "Nhap so phan tu: ";
	do
	{
		cin >>n;
		if(n<0)
			cout << "N>=0, nhap lai: ";
	}while(n<0);
	float giaithua=1.0;
	while(a<=n)
	{
		s+=((pow(x, a)/(giaithua*=a)));
		a+=1.0;
	}
	cout << "\nx= " << x;
	cout <<"\nket qua la: " << s+1;
	return 0;
}
