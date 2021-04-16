#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <array>
#include <string>
using namespace std;
#define MAX 100

typedef struct HocVien
{
	char ho[30], ten[30], ngaySinh[10];
	char noiSinh[40] = "......";
	char x_loai[20];
	float d_win = 0, d_word = 0, d_excel = 0, tongdiem;
} HV;

void printf(int n);
void enterInfoHv(HV &x);
void showInfoHv(HV x, int i);
void nhapMangHv(HV x[], int &n);
void xuatMangHv(HV x[], int n);
void menuNhapDiem(HV x[], int n);
void TongDiem(HV &x);
void ranks(HV &x);
void xuatXepHang(HV x[], int n);

int main()
{
	HV x[MAX];
	int n = 0;
	int luaChon;
	do
	{
		cout << "========== MENU ==========\n";
		cout << "\n1. Them hoc vien";
		cout << "\n2. In danh sach hoc vien";
		cout << "\n3. Nhap diem mon thi";
		cout << "\n4. Hien thi ket qua thi";
		cout << "\n0. Thoat";
		cout << "\n=========================";
		cout << "\nNhap lua chon: ";
		cin >> luaChon;
		cin.ignore(32767, '\n');
		if (luaChon < 0 || luaChon > 4)
			cout << "\nLua chon khong hop le, chon lai: ";
		switch (luaChon)
		{
		case 1:
			nhapMangHv(x, n);
			break;
		case 2:
			xuatMangHv(x, n);
			break;
		case 3:
			menuNhapDiem(x, n);
			break;
		case 4:
			xuatXepHang(x, n);
			break;
		}
	} while (luaChon < 0 || luaChon > 4 || luaChon != 0);
	return 0;
}

void printf(int n)
{
	for (int i = 0; i < n; i++)
		cout << "-";
	cout << "\n";
}

void enterInfoHv(HV &x)
{
	cout << "Nhap Ho ten lot: ";
	cin.getline(x.ho, sizeof(x.ho));
	cout << "Nhap ten: ";
	cin.getline(x.ten, sizeof(x.ten));
	cout << "Nhap ngay thang nam sinh (dd/mm/yy): ";
	cin.getline(x.ngaySinh, sizeof(x.ngaySinh));
	cout << "Noi sinh: ";
	cin.getline(x.noiSinh, sizeof(x.noiSinh));
}

void showInfoHv(HV x, int i)
{
	cout << "| " << i + 1;
	cout << " | " << x.ho << " " << x.ten;
	cout << "  \t|   " << x.ngaySinh;
	cout << "   | " << x.noiSinh;
	cout << " \t|\t....\t|\n";
}

void nhapMangHv(HV x[], int &n)
{
	cout << "\nNhap Thong Tin Hoc Vien:\n";
	enterInfoHv(x[n]);
	n++;
}

void xuatMangHv(HV X[], int n)
{
	cout << "\n\tDanh Sach Hoc Vien:\n";
	printf(65);
	cout << "| STT |  Ho va Ten \t|  Ngay Sinh  | Noi Sinh   |  Ghi Chu  |\n";
	printf(65);
	for (int i = 0; i < n; i++)
	{
		showInfoHv(X[i], i);
		printf(65);
	}
	getchar();
}

void menuNhapDiem(HV x[], int n)
{
	int luaChon, id, temp;
	do
	{
		cout << "\nNhap so thu tu cua sinh vien: ";
		cin >> id;
		if (id > n)
		{
			cout << "\nKhong tim thay hoc vien nay!";
			getchar();
			getchar();
			return;
		}
		else
		{
			id--;
			showInfoHv(x[id], id);
			cout << "\nDung nhap 1. Sai thi nhap 0: ";
		}
		cin >> temp;
	} while (temp == 0);
	do
	{
		cout << "\n===== MENU NHAP DIEM =====\n";
		cout << "\n1.Mon Windows";
		cout << "\n2.Mon Excel";
		cout << "\n3.Mon Word";
		cout << "\n0. Thoat";
		cout << "\n=========================";
		cout << "\nNhap mon: ";
		cin >> luaChon;
		cin.ignore(32767, '\n');
		if (luaChon > 3 || luaChon < 0)
			cout << "\nLua chon khong hop le, chon lai: ";
		switch (luaChon)
		{
		case 1:
			cout << "\nNhap diem mon Windows: ";
			cin >> x[id].d_win;
			break;
		case 2:
			cout << "\nNhap diem mon Excel: ";
			cin >> x[id].d_excel;
			break;
		case 3:
			cout << "\nNhap diem mon Word: ";
			cin >> x[id].d_word;
			break;
		}
	} while (luaChon != 0 || luaChon > 3 || luaChon < 0);
}

void TongDiem(HV &x)
{
	x.tongdiem = x.d_win + x.d_excel + x.d_word;
	ranks(x);
}

void ranks(HV &x)
{
	if (x.tongdiem >= 24)
		strcpy(x.x_loai, "Gioi");
	else if (x.tongdiem < 24 && x.tongdiem >= 18)
		strcpy(x.x_loai, "Kha");
	else if (x.tongdiem < 18 && x.tongdiem >= 15)
		strcpy(x.x_loai, "TB");
	else if (x.tongdiem < 15)
		strcpy(x.x_loai, "Kem");
}

void xuatXepHang(HV x[], int n)
{
	printf(65);
	cout << "| STT |  Ho va Ten\t|   Diem   |  Tong  |  Xep Loai  |\n";
	printf(65);
	for (int i = 0; i < n; i++)
	{
		TongDiem(x[i]);
		cout << "| " << i + 1;
		cout << " | " << x[i].ho << " " << x[i].ten;
		cout << "\t| " << x[i].d_win << ", " << x[i].d_word << ", " << x[i].d_excel;
		cout << "  |  " << x[i].tongdiem;
		cout << "  |  " << x[i].x_loai << "  |\n";
		printf(65);
	}
	getchar();
};
