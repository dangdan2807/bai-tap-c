#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct sinhvien
{
	string name, lop, truong, quequan, gioitinh;
	int day, mon, year;
};

void nhap1sv(sinhvien a[], int n);
void xuat1sv(sinhvien a[], int n);

int main()
{
	int n;
	cout <<"Nhap so luong sinh vien: ";
	do{
		cin >>n;
		if(n<0)
			cout <<"n>0, nhap lai: ";
	}while(n<0);
	sinhvien sv[n];
	nhap1sv(sv, n);
	xuat1sv(sv, n);
	return 0;
}

void nhap1sv(sinhvien a[], int n)
{
	cout <<"\tNhap thong tin\n";
for(int i=0; i<n; i++){
	cout <<"\nNhap ten sv: ";
	cin.ignore();
	getline(cin, a[i].name);
	cout <<"Nhap lop: ";
	cin.ignore(0, '\n');
	getline(cin, a[i].lop);
	cout <<"Nhap ten truong: ";
	cin.ignore(0, '\n');
	getline(cin, a[i].truong);
	cout <<"Nhap gioi tinh(nam/nu): ";
	cin.ignore(0, '\n');
	getline(cin, a[i].gioitinh);
	cout <<"Nhap que quan: ";
	cin.ignore(0, '\n');
	getline(cin, a[i].quequan);
	cout <<"Nhap ngay sinh: ";
	cin >>a[i].day >>a[i].mon >>a[i].year;
	}
}

void xuat1sv(sinhvien a[], int n)
{
	cout <<"\n\tXuat thong tin\n";
	cout <<"Ten\tLop\tTruong\tGioi tinh\tQue quan\tNgay sinh\n";
	for(int i=0; i<n; i++){
	cout <<a[i].name <<"\t" <<a[i].lop <<"\t" <<a[i].truong <<"\t" <<a[i].gioitinh <<"\t\t"<<a[i].quequan <<"\t\t" <<a[i].day<<"/"<<a[i].mon<<"/"<<a[i].year <<"\n";
	}
}
