#include <iostream>
#include <stdio.h>
using namespace std;
int sumDigist (int n);
int main()
{
	int k;
	cout <<"Nhap so k: \n";
	cin >> k;
	if(k>=0){
		sumDigist(k);
	}
	else
		cout <<"k>=0";
	return 0;
}
int sumDigist(int n)
{
	int tong=0;
	while(n>0)
	{
		tong+=n%10;
		n/=10;
	}
	cout <<"ket qua la: " << tong;
	return tong;
}