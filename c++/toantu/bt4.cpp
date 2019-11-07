#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int sl;
	float dg, cvc, stpt, gg;
	cout <<"Nhap so luong: ";
	cin >> sl;
	cout <<"Nhao don gia: ";
	cin >> dg;
	gg=sl*dg*12/100;
	cvc=sl*dg*5/100;
	stpt= sl*dg- gg+cvc;
	cout <<"Giam gia la: " << gg << endl;
	cout <<"Cuoc van chuyen la: " << cvc << endl;
	cout <<"So tien phai tra la: "<< stpt;
	return 0;
}
