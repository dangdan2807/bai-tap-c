#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <array>
using namespace std;
#define MAX 100

typedef struct HocVien
{
	char holot[30], ten[30], ngaysinh[8];
	char noisinh[40] = "......";
	char x_loai[20];
	float d_win = 0, d_word = 0, d_excel = 0, tongdiem;
}HV;

void printf(int n);
void enter_info_hv(HV& x);
void export_info_hv(HV x, int i);
void enter_info_array_hv(HV x[], int& n);
void export_info_array_hv(HV x[], int n);
void menu_enter_score(HV x[], int n);
void total_score(HV& x);
void ranks(HV &x);
void export_rank(HV x[], int n);

int main()
{
	HV x[MAX];
	int n = 0;
	int luachon;
	do{
		//Windows  - system("cls");
		//linux - system("clear");
		system("clear");
		cout <<"========== MENU ==========\n";
		cout <<"\n1. Them hoc vien";
		cout << "\n2. In danh sach hoc vien";
		cout << "\n3. Nhap diem mon thi";
		cout << "\n4. Hien thi ket qua thi";
		cout << "\n0. Thoat";
		cout << "\n=========================";
		cout << "\nNhap lua chon: ";
		cin >> luachon;
		cin.ignore(32767, '\n');
		if(luachon < 0 || luachon > 4)
			cout << "\nLua chon khong hop le, chon lai: ";
		system("clear");
		switch(luachon)
		{
			case 1:
				system("clear");
				enter_info_array_hv(x, n);
				break;
			case 2:
				system("clear");
				export_info_array_hv(x, n);
				break;
			case 3:
				system("clear");
				menu_enter_score(x, n);
				break;
			case 4:
				system("clear");
				export_rank(x, n);
				break;
		}
	}while(luachon < 0 || luachon > 4 || luachon != 0);
	return 0;
}

void printf(int n)
{
	for (int i = 0; i < n; i++)
		cout << "-";
	cout << "\n";
}

void enter_info_hv(HV& x)
{
	cout << "Nhap Ho ten lot: ";
	fflush(stdin);
	//Visual Studio 2019 - gets_s();
	gets(x.holot);
	cout << "Nhap ten: ";
	fflush(stdin);
	gets(x.ten);
	cout << "Nhap ngay thang nam sinh: ";
	fflush(stdin);
	gets(x.ngaysinh);
}

void export_info_hv(HV x, int i)
{
	cout << "| " << i + 1;
	cout << " | " << x.holot << " " << x.ten;
	cout << "  \t|   " << x.ngaysinh;
	cout << "   | " << x.noisinh;
	cout << " \t|\t....\t|\n";
}

void enter_info_array_hv(HV x[], int& n)
{
	cout << "\nNhap Thong Tin Hoc Vien:\n";
	enter_info_hv(x[n]);
	n++;
}

void export_info_array_hv(HV X[], int n)
{
	cout << "\n\tDanh Sach Hoc Vien:\n";
	printf(65);
	cout << "| STT |  Ho va Ten \t|  Ngay Sinh  | Noi Sinh   |  Ghi Chu  |\n";
	printf(65);
	for (int i = 0; i < n; i++)
	{
		export_info_hv(X[i], i);
		printf(65);
	}
	getchar();
}

void menu_enter_score(HV x[], int n)
{
	int luachon, id, temp;
	do{
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
			export_info_hv(x[id], id);
			cout << "\nDung nhap 1. Sai thi nhap 0: ";
		}
		cin >> temp;
	}while(temp == 0);
	do {
		system("clear");
		cout << "\n===== MENU NHAP DIEM =====\n";
		cout << "\n1.Mon Windows";
		cout << "\n2.Mon Excel";
		cout << "\n3.Mon Word";
		cout << "\n0. Thoat";
		cout << "\n=========================";
		cout << "\nNhap mon: ";
		cin >> luachon;
		cin.ignore(32767, '\n');
		if (luachon > 3 || luachon < 0)
			cout << "\nLua chon khong hop le, chon lai: ";
		switch (luachon)
		{
		case 1:
			system("clear");
			cout << "\nNhap diem mon Windows: ";
			cin >> x[id].d_win;
			break;
		case 2:
			system("clear");
			cout << "\nNhap diem mon Excel: ";
			cin >> x[id].d_excel;
			break;
		case 3:
			system("clear");
			cout << "\nNhap diem mon Word: ";
			cin >> x[id].d_word;
			break;
		}
	} while (luachon != 0 || luachon > 3 || luachon < 0);
}

void total_score(HV &x)
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

void export_rank(HV x[], int n)
{
	printf(65);
	cout << "| STT |  Ho va Ten\t|   Diem   |  Tong  |  Xep Loai  |\n";
	printf(65);
	for (int i = 0; i < n; i++)
	{
		total_score(x[i]);
		cout << "| " << i + 1;
		cout << " | " << x[i].holot << " " << x[i].ten;
		cout << "\t| " << x[i].d_win << ", " << x[i].d_word << ", " << x[i].d_excel;
		cout << "  |  " << x[i].tongdiem;
		cout << "  |  " << x[i].x_loai << "  |\n";
		printf(65);
	}
	getchar();
}
