#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float lai, sotien_can, sotien_bandau;
	int dem=0;
	cout << "Nhap so tien ban dau: ";
	cin >> sotien_bandau;
	cout << "Nhap so tien can nhan: ";
	cin >> sotien_can;
	cout << "Nhap lai suat ngan hang: ";
	cin >> lai;
	while(sotien_bandau<=sotien_can)
	{
			sotien_bandau+=sotien_bandau*lai/100;
			dem+=1;
	}
	cout <<"So thang gui toi thieu la: " << dem;
	return 0;
}
