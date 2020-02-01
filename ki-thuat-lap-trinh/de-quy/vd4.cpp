#include <iostream>
using namespace std;

void nhap_dl(float &a);
float lai_kep(float y, int n);


int main()
{
	float von, nam;
	cout <<"Nhap von: ";
	nhap_dl(von);
	cout <<"Nhap so nam: ";
	nhap_dl(nam);
	float kq = lai_kep(von, nam);
	cout <<"Ket qua: " << kq;
	return 0;
}


void nhap_dl(float &a)
{
	do{
		cin >>a;
		//don sach bo nho dem khi nhap sai -> khong bi tran bo nho
		if(cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		//xuat de nguoi dung biet da nhap sai
		if(a <= 0)
			cout <<"Du lieu khong hop le, nhap lai: ";
	}while(a <= 0);
}

float lai_kep(float y, int n)
{
	// lai suat hang nam
	float lai_suat = 0.07;
	if(n < 1)
		return y;
	y = lai_kep(y, n-1)*(1+ lai_suat);
}