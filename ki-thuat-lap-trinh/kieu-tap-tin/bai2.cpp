#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
using namespace std;
#define MAX 100

typedef struct ThongTin
{
	char name[100];
	int age, luong;
}TN;

void check_file(fstream& file);
void enter_info_tn(TN& x);
void write_info_tn(TN x, fstream& fileout);
void write_to_file(TN Arr[], fstream& fileout);
void export_info_tn(TN x);
void read_info_tn(TN& x, fstream& filein);
void read_to_file(TN A[], int& n, fstream& filein);
void export_array(TN A[], int n);

int main()
{
	const char* address = "output//bai2.txt";
	fstream filein, fileout, file_addend;
	TN Array_A[MAX], Array_B[MAX];
	int n, luachon;
	do{
		system("clear");
		cout <<"========= MENU =========";
		cout << "\n1. Viet vao tap tin moi";
		cout << "\n2. Them du lieu vao tep tin";
		cout << "\n3. Doc du lieu cua tap tin da ghi.";
		cout << "\n4. Hien du lieu da doc";
		cout << "\n0.Thoat";
		cout <<"\n==========================";		cout << "\nNhap lua chon: ";
		cin >> luachon;
		cin.ignore();
		switch(luachon)
		{
			case 0:
				system("clear");
				cout << "\nKet thuc chuong trinh.";
				break;
			case 1:
				system("clear");
				fileout.open(address, ios::out);
				check_file(fileout);
				write_to_file(Array_A, fileout);
				fileout.close();
				break;
			case 2:
				system("clear");
				file_addend.open(address, ios::app);
				check_file(file_addend);
				write_to_file(Array_A, file_addend);
				file_addend.close();
				break;
			case 3:
				system("clear");
				filein.open(address, ios::in);
				check_file(filein);
				read_to_file(Array_B, n, filein);
				cout << "\nDoc du lieu";
				getchar();
				filein.close();
				break;
			case 4:
				system("clear");
				export_array(Array_B, n);
				getchar();
				break;
			default:
				system("clear");
				cout << "\nLua chon khong hop le.";
				getchar();
				break;
			
		}
	}while(luachon != 0 || luachon < 0 || luachon > 3);
	return 0;
}

void check_file(fstream& file)
{
	if (file.fail() == true)
	{
		cout << "File khong ton tai!";
		exit(0);
	}
}

void enter_info_tn(TN& x)
{
	cout << "Nhap ho va ten: ";
	gets(x.name);
	if (strcmp(x.name, "") == 0)
		return;
	cout << "Nhap tuoi: ";
	cin >> x.age;
	cout << "Nhap luong: ";
	cin >> x.luong;
	cin.ignore(32767, '\n');
}

void write_info_tn(TN x, fstream& fileout)
{
	fileout << x.name << endl;
	fileout << x.age << endl;
	fileout << x.luong << endl << endl;
}

void write_to_file(TN Arr[], fstream& fileout)
{
	int i = 0;
	while (true)
	{
		cout << "\nNhap thong tin nguoi thu " << i + 1 << ":\n";
		enter_info_tn(Arr[i]);
		if (strcmp(Arr[i].name, "") == 0)
			return;
		else
			write_info_tn(Arr[i], fileout);
		i++;
	}
}

void export_info_tn(TN x)
{
	cout << " |   " << x.name;
	cout << "\t|  " << x.age;
	cout << "  |  " << x.luong << "  |";
}

void read_info_tn(TN& x, fstream& filein)
{
	filein.getline(x.name, 100);
	if (strcmp(x.name, "") == 0)
		return;
	filein >> x.age;
	filein >> x.luong;
	filein.ignore();
}

void read_to_file(TN A[], int& n, fstream& filein)
{
	n = 0;
	filein.seekg(0);
	while (!filein.eof())
	{
		read_info_tn(A[n], filein);
		if (strcmp(A[n].name, "") == 0)
			return;
		filein.ignore();
		n++;
	}
}

void export_array(TN A[], int n)
{
	cout <<"\n| STT |    Ho va ten\t|  Tuoi  |   Luong  |";
	for(int i = 0; i < n; i++)
	{
		cout << "\n| " << i+1;
		export_info_tn(A[i]);
	}
}