#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <fstream>
using namespace std;
#define MAX 100

typedef struct Pixel
{
	int x, y;
} Pix;

typedef struct HinhChuNhat
{
	Pix traitren, phaiduoi;
} Hcn;

void nhapDiem(Pix &toaDo, ifstream &filein);
void xuatDiem(Pix toaDo);
void nhapDiemHCN(Hcn A[], int &n, ifstream &filein);
void xuatDiemHCN(Hcn A[], int n);
float chieuDai(Pix toaDo);
void tinhDienTich(Hcn A[], int n);
void dungMangHinh();

int main()
{
	ifstream filein;
	// C:/Users/Admin/Desktop/dangdan/code/c/bai-tap-c/KiThuatLapTrinh/CauTrucVaUngDung/vd1_bai2.cpp
	filein.open("C:/Users/Admin/Desktop/dangdan/code/c/bai-tap-c/KiThuatLapTrinh/CauTrucVaUngDung/vd1-bai2.txt", ios_base::in);
	Hcn X[MAX];
	int n = 0;
	int luaChon;
	do
	{
		cout << "========== MENU ==========";
		cout << "\n1. Doc du lieu cac manh ruong tu file";
		cout << "\n2. Xem nhung manh ruong";
		cout << "\n3. Tinh dien tich cac manh ruong";
		cout << "\n0. Thoat";
		cout << "\n================================";
		cout << "\nNhap lua chon: ";
		cin >> luaChon;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		if (luaChon > 3 || luaChon < 0)
		{
			cout << "\nLua chon khong dung!";
			getchar();
			dungMangHinh();
		}
		switch (luaChon)
		{
		case 1:
			nhapDiemHCN(X, n, filein);
			dungMangHinh();
			break;
		case 2:
			xuatDiemHCN(X, n);
			dungMangHinh();
			break;
		case 3:
			tinhDienTich(X, n);
			dungMangHinh();
			break;
		}
	} while (luaChon != 0 || luaChon > 3 || luaChon < 0);
	if (luaChon == 0)
		cout << "\nKet thuc chuong trinh";
	return 0;
}

void nhapDiem(Pix &toaDo, ifstream &filein)
{
	filein >> toaDo.x;
	filein >> toaDo.y;
}

void xuatDiem(Pix toaDo)
{
	cout << "x = " << toaDo.x << "\t"
		 << "y = " << toaDo.y;
}

void nhapDiemHCN(Hcn A[], int &n, ifstream &filein)
{
	if (filein.fail() == true)
	{
		cout << "File doc khong ton tai!";
		dungMangHinh();
		//exit(0);
		return;
	}
	filein >> n;
	for (int i = 0; i < n; i++)
	{
		nhapDiem(A[i].traitren, filein);
		nhapDiem(A[i].phaiduoi, filein);
	}
	cout << "\nDoc du lieu thang cong.";
	dungMangHinh();
}

void xuatDiemHCN(Hcn A[], int n)
{
	if (n <= 0)
	{
		cout << "Khong co du lieu!";
		return;
	}
	cout << "\n\tDanh sach toa do cua manh ruong:";
	cout << "\nSTT | Diem trai tren \t|\t Diem phai duoi\n";
	for (int i = 0; i < n; i++)
	{
		cout << " " << i + 1 << " | ";
		xuatDiem(A[i].traitren);
		cout << "\t|\t ";
		xuatDiem(A[i].phaiduoi);
		cout << endl;
	}
	dungMangHinh();
}

float chieuDai(Pix toaDo)
{
	return sqrt(pow(toaDo.x, 2) + pow(toaDo.y, 2));
}

void tinhDienTich(Hcn A[], int n)
{
	if (n <= 0)
	{
		cout << "Khong co du lieu!";
		dungMangHinh();
		return;
	}
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		float c1 = chieuDai(A[i].traitren);
		float c2 = chieuDai(A[i].phaiduoi);
		sum += (c1 * c2);
	}
	cout << "\nTong Dien tich cua manh ruong la: " << sum;
	dungMangHinh();
}

void dungMangHinh() {
	cout << "\nNhan enter de tiep tuc\n";
	getchar();
}