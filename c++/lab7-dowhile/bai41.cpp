#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, a=1;
	float s=1;
	cout << "Nhap so phan tu: ";
	do
	{
		cin >> n;
		if(n<=0)
			cout <<"N>0, nhap lai: ";
	}while(n<=0);
	while(a<=n)
	{
		s*=(2.0*a-1)/(2.0*a);
		a+=1;
	}
	cout <<"ket qua la: "<< s;
	return 0;
}
