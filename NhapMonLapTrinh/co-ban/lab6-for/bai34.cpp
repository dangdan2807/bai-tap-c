#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a;
	cout <<"Nhap so phan tu cua tbc: ";
	cin >>a;
	int n[a], tong=0, dem=0;
	float tbc=0;
	for(int i=0;i<=a;i++)
	{
		cin >> n[i];
		tong=tong+n[i];
		dem++;
	}
	tbc=tong/dem;
	cout <<"tbc la: " << tbc;
	return 0;
}
