#include <iostream>
#include <string>
using namespace std;

void nhap_dl(float& a);
float lai_kep(float y, int n);


int main()
{
	float von, nam;
	cout << "Nhap von: ";
	nhap_dl(von);
	cout << "Nhap so nam: ";
	nhap_dl(nam);
	float tien = lai_kep(von, nam);
	//xuất ra số nếu số quá lớn (số --> chuỗi)
	string temp = to_string(tien);
	cout << "Ket qua: " << temp;
	return 0;
}


void nhap_dl(float& a)
{
	do {
		cin >> a;
		//don sach bo nho dem khi nhap sai -> khong bi tran bo nho
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		//xuat de nguoi dung biet da nhap sai
		if (a <= 0)
			cout << "Du lieu khong hop le, nhap lai: ";
	} while (a <= 0);
}

float lai_kep(float y, int n)
{
	// lai suat hang nam
	float lai_suat = 0.07;
	if (n == 1)
		return y * (1 + lai_suat);
	else if(n >= 2) {
		y *= (1 + lai_suat);
		return lai_kep(y, --n);
	}
}
