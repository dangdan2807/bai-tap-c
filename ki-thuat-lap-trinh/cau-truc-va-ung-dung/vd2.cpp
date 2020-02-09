#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
using namespace std;
#define MAX 100

typedef struct SINHVIEN
{
	char name[MAX];
	int id_sv;
	float tk, gk, ck, th, dtb; 
}SV;

void kiemtra(float &a);
void printf(int n);
float average_score(SV a);
void enter_info_1_sv(SV &sinhvien);
void export_info_1_sv(SV sinhvien, int i);
void export_info_1_sv_2(SV sinhvien);
void enter_info_array_sv(SV A[], int &n);
void export_info_array_sv(SV A[], int n);
int find_info_1_sv(SV A[], int n);
void export_info_from_find(SV A[], int n);
void arrange_score(SV A[], int n);
void export_1_sv_ktlt(SV x, int i);
void export_score_ktlt(SV A[], int n);

int main()
{
	int n;
	SV A[MAX];
	int lua_chon;
	do{
		cout <<"=============== MENU ===============\n";
		cout <<"\n1. Tao danh sach thong tin sinh vien";
		cout <<"\n2. Hien danh sach thong tin sinh vien";
		cout <<"\n3. Tim thong tin sinh vien tu ma sinh vien";
		cout <<"\n4. Sap Xep danh sach DTB theo thu tu giam dan";
		cout <<"\n5. Hien danh sach diem thi KTLT";
		cout << "\n0. Thoat";
		cout <<"\nNhap lua chon: ";
		cin >>lua_chon;
		if(lua_chon < 0 || lua_chon > 5)
			cout <<"\nLua chon khong hop le, nhap lai: ";
		 cout <<"====================================\n";
		//Windows 'clear' = 'cls'
		 system("clear");
		switch(lua_chon)
		{
			case 1: 
				enter_info_array_sv(A, n);
				break;
			case 2: 
				export_info_array_sv(A, n);
				break;
			case 3:
				export_info_from_find(A, n);
				break;
			case 4:
				arrange_score(A, n);
				break;
			case 5:
				export_score_ktlt(A, n);
				break;
		}
		//Windows 'clear' = 'cls'
		 system("clear");
	}while(lua_chon != 0 || lua_chon < 0 || lua_chon > 5);
	cout <<1;
	return 0;
}

void kiemtra(float &a)
{
	do{
		cin >>a;
		if(a < 0 || a > 10)
			cout <<"Du lieu khong hop le nhap lai: ";
	}while(a < 0 || a > 10);
	cin.ignore(32767, '\n');
}

void printf(int n)
{
	cout <<"\n";
	for(int i = 0; i < n; i++)
		cout <<"-";
	cout <<"\n";
}

float average_score(SV a)
{
	float TK = a.tk;
	float GK = a.gk;
	float CK = a.ck;
	float TH = a.th;
	float dtb = ((((2*TK+3*GK+5*CK)/10)*2)+TH)/3;
	return dtb;
}

void enter_info_1_sv(SV &sinhvien)
{
	cout <<"Nhap ho va ten: ";
	fflush(stdin);
	gets(sinhvien.name);
	fflush(stdin); 
	cout <<"Nhap ma sinh vien: ";
	do{
		cin >>sinhvien.id_sv;
		if(sinhvien.id_sv <=0 )
			cout <<"Ma sinh vien > 0, nhap lai: ";
	}while(sinhvien.id_sv <= 0);
	cout <<"Nhap diem thuong ki: ";
	kiemtra(sinhvien.tk);
	cout <<"Nhap diem giua ki: ";
	kiemtra(sinhvien.gk);
	cout <<"Nhap diem cuoi ki: ";
	kiemtra(sinhvien.ck);
	cout <<"Nhap diem thuc hanh: ";
	kiemtra(sinhvien.th);
	sinhvien.dtb = average_score(sinhvien);
}

void export_info_1_sv(SV sinhvien, int i)
{
	cout <<"| " <<i <<" |";
	cout <<"\t" <<sinhvien.name <<"\t|";
	cout <<"\t" <<sinhvien.id_sv <<"\t|";
	cout <<"\t" <<sinhvien.dtb <<"  |\n";
}

void export_info_1_sv_2(SV sinhvien)
{
	cout <<"\nHo va ten: " <<sinhvien.name;
	cout <<"\nMa sinh vien: " <<sinhvien.id_sv;
	cout <<"\nDiem thuong ki: " <<sinhvien.tk;
	cout <<"\nDiem giua ki: " <<sinhvien.gk;
	cout <<"\nDiem cuoi ki: " <<sinhvien.ck;
	cout <<"\nDiem thuc hanh: " <<sinhvien.th;
	cout <<"\nDiem trung binh: " <<sinhvien.dtb;
}

void enter_info_array_sv(SV A[], int &n)
{
	cout <<"\tNHAP THONG TIN DANH SACH SINH VIEN:\n";
	cout <<"\nNhap So Luong Sinh Vien: ";
	do{
		cin >> n;
		if(n <= 0)
			cout <<"Du lieu khong hop le, nhap lai: ";
	}while(n <= 0);
	cin.ignore(32767, '\n');
	for(int i = 0; i < n; i++)
	{
		cout <<"\n\tNhap thong tin sinh vien thu " << i+1 <<":\n";
		enter_info_1_sv(A[i]);
	}
}

void export_info_array_sv(SV A[], int n)
{
	cout <<"\n\n\tXUAT DANH SACH THONG TIN SINH VIEN:\n";
	printf(65);
	cout <<"\n| STT |\t Ho va Ten \t|\tMa Sinh Vien\t|\tDTB\t|";
	printf(65);
	for(int i = 0; i < n; i++)
	{
		export_info_1_sv(A[i], i+1);
		printf(65);
	}
}

int find_info_1_sv(SV A[], int n)
{
	int msv;
	cout <<"\n\tTim thong tin sinh vien:\n";
	cout <<"Nhap ma sinh vien: ";
	do{
		cin >> msv;
		if(msv <= 0)
			cout <<"Du lieu khong hop le, nhap lai: ";
	}while(n <= 0);
	for(int i = 0; i < n; i++)
		if(A[i].id_sv == msv)
			return i;
	return -1;
}

void export_info_from_find(SV A[], int n)
{
	int id = find_info_1_sv(A, n);
	if(id == -1)
		cout <<"\nKhong tim thay!";
	else
		export_info_1_sv_2(A[id]);
}

void arrange_score(SV A[], int n)
{
	for(int i = 0; i < n; i++)
		for(int j = i+1; j < n; j++)
			if(A[i].dtb < A[j].dtb)
			{
				SV temp = A[i];
				A[i] = A[j];
				A[j]= temp;
			}
}

void export_1_sv_ktlt(SV x, int i)
{
	cout <<"| " <<i+1;
	cout <<" | " <<x.name <<"\t";
	cout <<" | " <<x.id_sv;
	cout <<" | " <<x.tk;
	cout <<" | " <<x.gk;
	cout <<" | " <<x.ck;
	cout <<" | " <<x.th <<" |\t |";
}

void export_score_ktlt(SV A[], int n)
{
	cout <<"\n\tDANH SACH DIEM THI KTLT:\n";
	printf(76);
	cout <<"| STT | Ho va Ten \t|  Ma Sinh Vien  | TK | GK | CK | TH |   Ghi Chu   |\n";
	printf(76);
	for(int i = 0; i < n; i++)
	{
		export_1_sv_ktlt(A[i], i);
		printf(76);
	}
}