#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>
using namespace std;

void checkFile(fstream &file);
void enterArray(float A[], int &n);
void writeToFile(float A[], int n, fstream &fileOutput);
void writeToEndFile(float A[], int &n, fstream &fileOutput);
void updateValue(float A[], int &n);
void readToFile(float A[], int &n, fstream &fileInput);
void outputArray(float A[], int n);
float sum(float A[], int n);

int main()
{
	fstream fileInput, fileOutput, fileAddEnd;
	const char *pathInput = "output/bai3.txt";
	float array_write[100];
	float array_read[100];
	int n, luaChon, danh_dau = 0;
	float tong_binhphuong;
	do
	{
		system("clear");
		cout << "========= MENU =========";
		cout << "\n1. Nhap mang so thuc.";
		cout << "\n2. Them so thuc vao cuoi mang va viet vao cuoi file.";
		cout << "\n3. Cap nhat so thuc.";
		cout << "\n4. Viet so thuc vao tep tin.";
		cout << "\n5. Doc so thuc tu tap tin da ghi.";
		cout << "\n6. Hien so thuc da doc.";
		cout << "\n7. Tong binh phuong cac so thuc da doc duoc.";
		cout << "\n0. Thoat";
		cout << "\n==========================";
		cout << "\nNhap lua chon: ";
		cin >> luaChon;
		cin.ignore();
		switch (luaChon)
		{
		case 0:
			system("clear");
			cout << "Ket thuc chuong trinh.";
			break;
		case 1:
			system("clear");
			enterArray(array_write, n);
			danh_dau = 1;
			break;
		case 2:
			system("clear");
			if (danh_dau == 0)
			{
				cout << "\nBan chua viet danh sach so thuc vao file.";
				getchar();
			}
			else
			{
				fileAddEnd.open(pathInput, ios_base::app);
				checkFile(fileAddEnd);
				writeToEndFile(array_write, n, fileAddEnd);
				fileAddEnd.close();
				danh_dau = 1;
			}
			break;
		case 3:
			system("clear");
			cout << "\n\tCap nhat so thuc:";
			if (danh_dau == 0)
			{
				cout << "\nBan chua viet danh sach so thuc vao file";
				getchar();
			}
			else
			{
				fileOutput.open(pathInput, ios_base::out);
				checkFile(fileOutput);
				updateValue(array_write, n);
				writeToFile(array_write, n, fileOutput);
				fileOutput.close();
			}
			break;
		case 4:
			system("clear");
			fileOutput.open(pathInput, ios_base::out);
			checkFile(fileOutput);
			cout << "\nViet danh sach so thuc vao file";
			writeToFile(array_write, n, fileOutput);
			fileOutput.close();
			break;
		case 5:
			system("clear");
			fileInput.open(pathInput, ios_base::in);
			checkFile(fileInput);
			readToFile(array_read, n, fileInput);
			fileInput.close();
			break;
		case 6:
			system("clear");
			outputArray(array_read, n);
			getchar();
			break;
		case 7:
			system("clear");
			tong_binhphuong = sum(array_read, n);
			cout << "Tong binh phuong cua cac so da doc duoc: " << tong_binhphuong;
			getchar();
			break;
		default:
			system("clear");
			cout << "\nLua chon khong hop le.";
			getchar();
			break;
		}
	} while (luaChon != 0 || luaChon < 0 || luaChon > 7);
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

void enterArray(float A[], int &n)
{
	do
	{
		system("clear");
		cout << "\n\tNhap danh sach so thuc: ";
		cout << "\nNhap so luong so thuc(n > 0): ";
		cin >> n;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		if (n <= 0)
		{
			cout << "\nDu lieu khong hop le.";
			getchar();
		}
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so thuc thu " << i + 1 << ": ";
		cin >> A[i];
	}
}

void writeToFile(float A[], int n, fstream &fileOutput)
{
	for (int i = 0; i < n; i++)
	{
		fileOutput << A[i] << endl;
	}
}

void writeToEndFile(float A[], int &n, fstream &fileOutput)
{
	cout << "\n\tThem so thuc vao cuoi danh sach so thuc va file:";
	cout << "\nNhap so thuc: ";
	cin >> A[n];
	fileOutput << endl
			   << A[n];
	n++;
	cout << "\nDa them vao cuoi file";
	getchar();
}

void updateValue(float A[], int &n)
{
	int id;
	outputArray(A, n);
	cout << "\nNhap so thu tu cua mang (i) can cap nhat: ";
	cin >> id;
	cout << "\nNhap A[" << id << "] = ";
	cin >> A[id];
}

void readToFile(float A[], int &n, fstream &fileInput)
{
	n = 0;
	while (fileInput.eof() == false)
	{
		fileInput >> A[n];
		if (A[n] == '\n')
			break;
		n++;
		fileInput.ignore();
	}
	cout << "Doc du lieu xong.";
	getchar();
}

void outputArray(float A[], int n)
{
	int dem = 1;
	cout << "\n\tXuat cac phan tu hien co cua mang: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\nA[" << i << "] = " << A[i] << "\t";
		if (dem % 5 == 0)
			cout << endl;
		dem++;
	}
}

float sum(float A[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += pow(A[i], 2);
	return sum;
}