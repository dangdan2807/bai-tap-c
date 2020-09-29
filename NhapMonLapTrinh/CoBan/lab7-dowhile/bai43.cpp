#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, k;
	cout << "Nhap so nguyen duong n va k (k<=n): ";
	do
	{
		cin >> n >> k;
		if(k<=0 || n<= 0)
			cout << "n va k >=0, nhap lai: ";
		if(k>n)
			cout << "DK k<=n, nhap lai: ";
	}while((k<=0 || n<=0)|| (k>n));
	float c=0;
	int a=1, b=1, gt=1, dem=1, d=1;
	while(dem<=n)
	{
		if(dem<=n)
			a*=gt;
		if(dem<=k)
			b*=gt;
		if(dem<=(n-k))
			d*=gt;
		gt++;
		dem++;
	}
	c=(a/(b*d));
	cout <<"ket qua la: " << c;
	return 0;
}
