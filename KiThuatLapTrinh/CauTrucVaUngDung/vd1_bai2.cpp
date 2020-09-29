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
}Pix;

typedef struct Hinhchunhat
{
	Pix traitren, phaiduoi;
}Hcn;

void read_1_point(Pix &toado, ifstream &filein);
void export_1_point(Pix toado);
void enter_point_hcn(Hcn A[], int &n, ifstream &filein);
void export_point_hcn(Hcn A[], int n);
float edge_length(Pix toado);
void nS_hcn(Hcn A[], int n);

int main()
{
	ifstream filein;
	filein.open("vd1-bai2.txt", ios_base::in);
	Hcn X[MAX];
	int n = 0;
	int luachon;
	do{
		system("clear");
		cout <<"========== MENU ==========";
		cout <<"\n1. Doc du lieu cac manh ruong tu file";
		cout <<"\n2. Xem nhung manh ruong";
		cout <<"\n3. Tinh dien tich cac manh ruong";
		cout << "\n0. Thoat";
		cout << "\n================================";
		cout <<"\nNhap lua chon: ";
		cin >> luachon;
		 if(cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		if(luachon > 3 || luachon < 0)
		{
			cout <<"\nLua chon khong dung!";
			getchar();
			getchar();
		}
		switch(luachon)
		{
			case 1:
				system("clear");
				enter_point_hcn(X, n, filein);
				getchar();
				break;
			case 2:
				system("clear");
				export_point_hcn(X, n);
				getchar();
				break;
			case 3:
				system("clear");
				nS_hcn(X, n);
				getchar();
				break;
		}
	}while(luachon != 0 || luachon > 3 || luachon < 0);
	if(luachon == 0)
		cout << "\nKet thuc chuong trinh";
	return 0;
} 

void read_1_point(Pix &toado, ifstream &filein)
{
	filein >> toado.x;
	filein >> toado.y;
}

void export_1_point(Pix toado)
{
	cout <<"x = " <<toado.x <<"\t" <<"y = " <<toado.y;
}

void enter_point_hcn(Hcn A[], int &n, ifstream &filein)
{
	if(filein.fail() == true)
	{
		cout <<"File doc khong ton tai!";
		getchar();
		//exit(0);
		return;
	}
	filein >>n;
	for(int i = 0; i < n; i++)
	{
		read_1_point(A[i].traitren, filein);
		read_1_point(A[i].phaiduoi, filein);
	}
	cout <<"\nDoc du lieu thang cong.";
	getchar();
}

void export_point_hcn(Hcn A[], int n)
{
	if(n <= 0)
	{
		cout <<"Khong co du lieu!";
		getchar();
		return;
	}
	cout <<"\n\tDanh sach toa do cua manh ruong:";
	cout <<"\nSTT | Diem trai tren \t|\t Diem phai duoi\n";
	for(int i = 0; i < n; i++)
	{
		cout <<" " <<i+1 << " | ";
		export_1_point(A[i].traitren);
		cout <<"\t|\t ";
		export_1_point(A[i].phaiduoi);
		cout << endl;
	}
	getchar();
}

float edge_length(Pix toado)
{
	return sqrt(pow(toado.x, 2) + pow(toado.y, 2));
}

void nS_hcn(Hcn A[], int n)
{
	if(n <= 0)
	{
		cout <<"Khong co du lieu!";
		getchar();
		return;
	}
	float sum = 0;
	for(int i = 0; i < n; i++)
	{
		float c1 = edge_length(A[i].traitren);
		float c2 = edge_length(A[i].phaiduoi);
		sum += (c1 * c2);
	}
	cout <<"\nTong Dien tich cua manh ruong la: " << sum;
	getchar();
} 
