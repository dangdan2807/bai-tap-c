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
} TN;

void checkFile(fstream &file);
void enterInfoThongTin(TN &x);
void writeInfoThongTin(TN x, fstream &fileout);
void writeToFile(TN Arr[], fstream &fileout);
void exportInfoThongTin(TN x);
void readInfoThongTin(TN &x, fstream &filein);
void readToFile(TN A[], int &n, fstream &filein);
void exportArray(TN A[], int n);

int main()
{
	const char *address = "output//bai2.txt";
	fstream filein, fileout, file_addend;
	TN Array_A[MAX], Array_B[MAX];
	int n, luaChon;
	do
	{
		system("clear");
		cout << "========= MENU =========";
		cout << "\n1. Viet vao tap tin moi";
		cout << "\n2. Them du lieu vao tep tin";
		cout << "\n3. Doc du lieu cua tap tin da ghi.";
		cout << "\n4. Hien du lieu da doc";
		cout << "\n0.Thoat";
		cout << "\n==========================";
		cout << "\nNhap lua chon: ";
		cin >> luaChon;
		cin.ignore();
		switch (luaChon)
		{
		case 0:
			system("clear");
			cout << "\nKet thuc chuong trinh.";
			break;
		case 1:
			system("clear");
			fileout.open(address, ios::out);
			checkFile(fileout);
			writeToFile(Array_A, fileout);
			fileout.close();
			break;
		case 2:
			system("clear");
			file_addend.open(address, ios::app);
			checkFile(file_addend);
			writeToFile(Array_A, file_addend);
			file_addend.close();
			break;
		case 3:
			system("clear");
			filein.open(address, ios::in);
			checkFile(filein);
			readToFile(Array_B, n, filein);
			cout << "\nDoc du lieu";
			getchar();
			filein.close();
			break;
		case 4:
			system("clear");
			exportArray(Array_B, n);
			getchar();
			break;
		default:
			system("clear");
			cout << "\nLua chon khong hop le.";
			getchar();
			break;
		}
	} while (luaChon != 0 || luaChon < 0 || luaChon > 3);
	return 0;
}

void checkFile(fstream &file)
{
	if (file.fail() == true)
	{
		cout << "File khong ton tai!";
		exit(0);
	}
}

void enterInfoThongTin(TN &x)
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

void writeInfoThongTin(TN x, fstream &fileout)
{
	fileout << x.name << endl;
	fileout << x.age << endl;
	fileout << x.luong << endl
			<< endl;
}

void writeToFile(TN Arr[], fstream &fileout)
{
	int i = 0;
	while (true)
	{
		cout << "\nNhap thong tin nguoi thu " << i + 1 << ":\n";
		enterInfoThongTin(Arr[i]);
		if (strcmp(Arr[i].name, "") == 0)
			return;
		else
			writeInfoThongTin(Arr[i], fileout);
		i++;
	}
}

void exportInfoThongTin(TN x)
{
	cout << " |   " << x.name;
	cout << "\t|  " << x.age;
	cout << "  |  " << x.luong << "  |";
}

void readInfoThongTin(TN &x, fstream &filein)
{
	filein.getline(x.name, 100);
	if (strcmp(x.name, "") == 0)
		return;
	filein >> x.age;
	filein >> x.luong;
	filein.ignore();
}

void readToFile(TN A[], int &n, fstream &filein)
{
	n = 0;
	filein.seekg(0);
	while (!filein.eof())
	{
		readInfoThongTin(A[n], filein);
		if (strcmp(A[n].name, "") == 0)
			return;
		filein.ignore();
		n++;
	}
}

void exportArray(TN A[], int n)
{
	cout << "\n| STT |    Ho va ten\t|  Tuoi  |   Luong  |";
	for (int i = 0; i < n; i++)
	{
		cout << "\n| " << i + 1;
		exportInfoThongTin(A[i]);
	}
}