﻿#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int n, a=1;
	float s=0;
	cout << "Nhap so phan tu n: ";
	do
	{
		cin >> n;
		if(n<=0)
			cout << "N>0, nhap lai: ";
	}while(n<=0);
	while(a<=n)
	{
		s=s+1.0*(pow((-1), (a-1))/pow((2*a), 2));
		a+=1;
	}
	cout << "ket qua la: " << s;
	return 0;
}
