#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
using namespace std;
#define MAX 100

typedef struct ThongTin
{
	char name[MAX];
	int id_sv;
	float tk, gk, ck, th, dtb;
} TN;

void kiemTra(float &a);
void print(int n);
float average_score(TN a);
void nhap1SV(TN &sinhVien);
void xuat1SV(TN sinhVien, int i);
void xuat1SV2(TN sinhVien);
void nhapMang(TN A[], int &n);
void xuatMangSV(TN A[], int n);
int timSV(TN A[], int n);
void xuatTTSvTimDuoc(TN A[], int n);
void arrange_score(TN A[], int n);
void hoc_lai(float x);
void export_1_sv_ktlt(TN x, int i);
void export_score_ktlt(TN A[], int n);

int main()
{
	int n;
	TN A[MAX];
	int lua_chon;
	do
	{
		cout << "=============== MENU ===============\n";
		cout << "\n1. Tao danh sach thong tin sinh vien";
		cout << "\n2. Hien danh sach thong tin sinh vien";
		cout << "\n3. Tim thong tin sinh vien tu ma sinh vien";
		cout << "\n4. Sap Xep danh sach DTB theo thu tu giam dan";
		cout << "\n5. Hien danh sach diem thi KTLT";
		cout << "\n0. Thoat";
		cout << "\nNhap lua chon: ";
		cin >> lua_chon;
		if (lua_chon < 0 || lua_chon > 5)
			cout << "\nLua chon khong hop le, nhap lai: ";
		cout << "====================================\n";
		//Windows 'clear' = 'cls'
		system("clear");
		switch (lua_chon)
		{
		case 1:
			nhapMang(A, n);
			//getchar(); getchar();
			break;
		case 2:
			xuatMangSV(A, n);
			getchar();
			getchar();
			break;
		case 3:
			xuatTTSvTimDuoc(A, n);
			getchar();
			getchar();
			break;
		case 4:
			arrange_score(A, n);
			getchar();
			getchar();
			break;
		case 5:
			export_score_ktlt(A, n);
			getchar();
			getchar();
			break;
		}
		//Windows 'clear' = 'cls'..
		system("clear");
	} while (lua_chon != 0 || lua_chon < 0 || lua_chon > 5);
	return 0;
}

void kiemTra(float &a)
{
	do
	{
		cin >> a;
		if (a < 0 || a > 10)
			cout << "Du lieu khong hop le nhap lai: ";
	} while (a < 0 || a > 10);
	cin.ignore(32767, '\n');
}

void print(int n)
{
	cout << "\n";
	for (int i = 0; i < n; i++)
		cout << "-";
	cout << "\n";
}

float average_score(TN a)
{
	float dtb = ((((2 * a.tk + 3 * a.gk + 5 * a.ck) / 10) * 2) + a.th) / 3;
	return dtb;
}

void nhap1SV(TN &sinhVien)
{
	cout << "Nhap ho va ten: ";
	fflush(stdin);
	gets(sinhVien.name);
	fflush(stdin);
	cout << "Nhap ma sinh vien: ";
	do
	{
		cin >> sinhVien.id_sv;
		if (sinhVien.id_sv <= 0)
			cout << "Ma sinh vien > 0, nhap lai: ";
	} while (sinhVien.id_sv <= 0);
	cout << "Nhap diem thuong ki: ";
	kiemTra(sinhVien.tk);
	cout << "Nhap diem giua ki: ";
	kiemTra(sinhVien.gk);
	cout << "Nhap diem cuoi ki: ";
	kiemTra(sinhVien.ck);
	cout << "Nhap diem thuc hanh: ";
	kiemTra(sinhVien.th);
	sinhVien.dtb = average_score(sinhVien);
}

void xuat1SV(TN sinhVien, int i)
{
	cout << "| " << i << " |";
	cout << "\t" << sinhVien.name << "\t|";
	cout << "\t" << sinhVien.id_sv << "\t|";
	cout << "\t" << sinhVien.dtb << "  |";
}

void xuat1SV2(TN sinhVien)
{
	cout << "\nHo va ten: " << sinhVien.name;
	cout << "\nMa sinh vien: " << sinhVien.id_sv;
	cout << "\nDiem thuong ki: " << sinhVien.tk;
	cout << "\nDiem giua ki: " << sinhVien.gk;
	cout << "\nDiem cuoi ki: " << sinhVien.ck;
	cout << "\nDiem thuc hanh: " << sinhVien.th;
	cout << "\nDiem trung binh: " << sinhVien.dtb;
}

void nhapMang(TN A[], int &n)
{
	cout << "\tNHAP THONG TIN DANH SACH SINH VIEN:\n";
	cout << "\nNhap So Luong Sinh Vien: ";
	do
	{
		cin >> n;
		if (n <= 0)
			cout << "Du lieu khong hop le, nhap lai: ";
	} while (n <= 0);
	cin.ignore(32767, '\n');
	for (int i = 0; i < n; i++)
	{
		cout << "\n\tNhap thong tin sinh vien thu " << i + 1 << ":\n";
		nhap1SV(A[i]);
	}
	//getchar();
}

void xuatMangSV(TN A[], int n)
{
	cout << "\n\n\tXUAT DANH SACH THONG TIN SINH VIEN:\n";
	print(65);
	cout << "\n| STT |\t Ho va Ten \t|\tMa Sinh Vien\t|\tDTB\t|";
	print(65);
	for (int i = 0; i < n; i++)
	{
		xuat1SV(A[i], i + 1);
		print(65);
	}
	//getchar();
}

int timSV(TN A[], int n)
{
	int msv;
	cout << "\n\tTim thong tin sinh vien:\n";
	cout << "Nhap ma sinh vien: ";
	do
	{
		cin >> msv;
		if (msv <= 0)
			cout << "Du lieu khong hop le, nhap lai: ";
	} while (n <= 0);
	for (int i = 0; i < n; i++)
		if (A[i].id_sv == msv)
			return i;
	return -1;
}

void xuatTTSvTimDuoc(TN A[], int n)
{
	int id = timSV(A, n);
	if (id == -1)
		cout << "\nKhong tim thay!";
	else
		xuat1SV2(A[id]);
	//getchar();
}

void arrange_score(TN A[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (A[i].dtb < A[j].dtb)
			{
				TN temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
}

void hoc_lai(float x)
{
	if (x < 4)
		cout << "Hoc lai";
}

void export_1_sv_ktlt(TN x, int i)
{
	cout << "| " << i + 1;
	cout << " | " << x.name << "\t";
	cout << " | " << x.id_sv;
	cout << " | " << x.tk;
	cout << " | " << x.gk;
	cout << " | " << x.ck;
	cout << " | " << x.th;
	cout << " | " << x.dtb;
	cout << " | ";
	hoc_lai(x.dtb);
	cout << "|";
}

void export_score_ktlt(TN A[], int n)
{
	cout << "\n\tDANH SACH DIEM THI KTLT:\n";
	print(76);
	cout << "| STT | Ho va Ten \t|  Ma Sinh Vien  | TK | GK | CK | TH | DTB | Ghi Chu |\n";
	print(76);
	for (int i = 0; i < n; i++)
	{
		export_1_sv_ktlt(A[i], i);
		print(76);
	}
}