#include <iostream>
#include <stdio.h>
using namespace std;

class SinhVien
{
protected:
	int mssv;
	float diemkt1;
	float diemkt2;
public:
	void nhapdiemkt()
	{
		cout <<"Nhap MSSV: ";
		cin >>mssv;
		cout <<"Nhap diem kiem tra 1: ";
		cin >>diemkt1;
		cout <<"Nhap diem kiem tra 2: ";
		cin >>diemkt2;
	}
};

class GdTheChat
{
protected:
	float diemtc;
public:
	void nhapdiemtc()
	{
		cout <<"Nhap diem the chat: ";
		cin >>diemtc;
	}
};

class ThongTinSv: public SinhVien, public GdTheChat
{
	float tongdiem, trungbinh;
public:
	void display()
	{
		tongdiem= diemtc+diemkt1+diemkt2;
		trungbinh= tongdiem/3.0;
		cout <<"\nMssv là " <<mssv;
		cout <<"\nDiem trung binh la: " <<trungbinh;
	}
};

int main()
{
	ThongTinSv obj;
	obj.nhapdiemkt();
	obj.nhapdiemtc();
	obj.display();
	return 0;
}