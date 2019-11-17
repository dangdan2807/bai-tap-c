#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int n;
	float x, k;
	cout <<"Nhap so nguyen n: ";
	cin >> n;
	cout <<"Nhap so thuc x: ";
	cin >> x;
	k=pow((x*x+x+1), n)+pow((x*x-x+1), n);
	cout <<"Ket qua la: " << k << endl;
	return 0;
}
