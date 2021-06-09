#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
using namespace std;
#define MAX 100

typedef struct ThongTin
{
	char hoLot[50], ten[50];
	float diemToan, diemTin;
} TN;

void checkFile(fstream &file);
void enterInfoThongTin(TN &x);
void nhapMang(TN A[], int &n);
void outputInfoThongTin(TN x);
void xuatMangSV(TN A[], int n, int id);
void writeToFile(TN A[], int n, fstream &outfile);
void readToFile(TN A[], int n, fstream &infile);
void update_info_sv(TN A[], int n, fstream &outfile);

int main()
{
	const char *address = "output/bai5.dat";
	fstream input_file, output_file;
	TN ArrayA[MAX], ArrayB[MAX];
	int n, luaChon;
	bool check_nhap = false, check_xuat = false;
	do
	{
		system("clear");
		//system("cls");
		cout << "========== MENU ==========";
		cout << "\n1. Nhap thong tin sinh vien";
		cout << "\n2. Xuat thong tin sinh vien";
		cout << "\n3. Cap nhat thong tin sinh vien";
		cout << "\n4. Xuat tep tin";
		cout << "\n5. Doc tep tin va hien thi";
		cout << "\n0. Thoat";
		cout << "\n==========================";
		cout << "\nNhap lua chon: ";
		cin >> luaChon;
		cin.ignore(31767, '\n');
		switch (luaChon)
		{
		case 0:
			system("clear");
			//system("cls");
			cout << "Ket thuc chuong trinh.";
			break;
		case 1:
			system("clear");
			//system("cls");
			cout << "\tNHAP DANH SACH SINH VIEN";
			nhapMang(ArrayA, n);
			check_nhap = true;
			getchar();
			break;
		case 2:
			system("clear");
			//system("cls");
			if (check_nhap == false)
				cout << "Chua nhap danh sach thong tin sinh vien";
			else
				xuatMangSV(ArrayA, n, 0);
			getchar();
			break;
		case 3:
			system("clear");
			//system("cls");
			if (check_nhap == false)
				cout << "Chua nhap danh sach thong tin sinh vien";
			else
			{
				output_file.open(address, ios_base::out);
				checkFile(output_file);
				update_info_sv(ArrayA, n, output_file);
				output_file.close();
			}
			getchar();
			break;
		case 4:
			system("clear");
			//system("cls");
			if (check_nhap == false)
				cout << "Chua nhap danh sach thong tin sinh vien";
			else
			{
				output_file.open(address, ios_base::out);
				checkFile(output_file);
				xuatMangSV(ArrayA, n, 0);
				check_xuat = true;
				writeToFile(ArrayA, n, output_file);
				output_file.close();
			}
			getchar();
			break;
		case 5:
			system("clear");
			//system("cls");
			if (check_nhap == false)
				cout << "Chua nhap danh sach thong tin sinh vien";
			else if (check_xuat == false)
				cout << "Chua xuat danh sach thong tin sinh vien";
			else
			{
				input_file.open(address, ios_base::in);
				checkFile(input_file);
				readToFile(ArrayB, n, input_file);
				xuatMangSV(ArrayB, n, 0);
				input_file.close();
			}
			getchar();
			break;
		default:
			system("clear");
			//system("cls");
			cout << "Lua chon khong hop le";
			getchar();
			break;
		}
	} while (luaChon != 0);
	return 0;
}

void checkFile(fstream &file)
{
	if (file.fail() == true)
	{
		cout << "File khong ton tai!!\nKet thuc chuong trinh.";
		exit(0);
	}
}

void enterInfoThongTin(TN &x)
{
	cout << "\nNhap ho ten lot: ";
	gets(x.hoLot);
	cout << "Nhap ten: ";
	fflush(stdin);
	gets(x.ten);
	cout << "Nhap diem toan: ";
	cin >> x.diemToan;
	cout << "Nhap diem tin: ";
	cin >> x.diemTin;
	cin.ignore(32767, '\n');
}

void nhapMang(TN A[], int &n)
{
	cout << "\nNhap so luong sinh vien: ";
	cin >> n;
	cin.ignore(32767, '\n');
	for (int i = 0; i < n; i++)
		enterInfoThongTin(A[i]);
}

void outputInfoThongTin(TN x)
{
	cout << "|  " << x.hoLot << "\t";
	cout << "|  " << x.ten << "\t";
	cout << "|    " << x.diemToan;
	cout << "    |    " << x.diemTin << "    |";
}

void xuatMangSV(TN A[], int n, int id)
{
	cout << "\n\tXUAT THONG TIN SINH VIEN:";
	cout << "\n|  STT  |  Ho ten lot\t|  Ten\t|  Diem Toan |  Diem Tin |";
	if (id != 0)
	{
		cout << "\n| " << id + 1 << " ";
		outputInfoThongTin(A[id]);
	}
	else if (id == 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "\n| " << i + 1 << " ";
			outputInfoThongTin(A[i]);
		}
	}
}

void writeToFile(TN A[], int n, fstream &outfile)
{
	for (int i = 0; i < n; i++)
	{
		outfile << A[i].hoLot << endl;
		outfile << A[i].ten << endl;
		outfile << A[i].diemToan << endl;
		outfile << A[i].diemTin << endl;
	}
}

void readToFile(TN A[], int n, fstream &infile)
{
	int i = 0;
	while (infile.eof() == false)
	{
		if (infile.eof() == true)
			break;
		infile.getline(A[i].hoLot, 50);
		infile.getline(A[i].ten, 50);
		infile >> A[i].diemToan;
		infile >> A[i].diemTin;
		infile.ignore(32767, '\n');
		i++;
	}
}

void update_info_sv(TN A[], int n, fstream &outfile)
{
	int id = 0, luaChon;
	bool id_check = false;
	do
	{
		system("clear");
		//system("cls");
		cout << "===== MENU CAP NHAT =====";
		cout << "\n1. Nhap STT cua sv can thay doi.";
		cout << "\n2. Cap nhat ho ten lot.";
		cout << "\n3. Cap nhat ten";
		cout << "\n4. Cap nhat diem toan";
		cout << "\n5. Cap nhat diem tin";
		cout << "\n6. Cap nhat Toan bo";
		cout << "\n0. Thoat";
		cout << "\n=========================";
		cout << "\nNhap lua chon: ";
		cin >> luaChon;
		cin.ignore(32767, '\n');
		switch (luaChon)
		{
		case 0:
			break;
		case 1:
			system("clear");
			//system("cls");
			xuatMangSV(A, n, id);
			cout << "\nNhap so thu tu can doi: ";
			cin >> id;
			id--;
			cin.ignore(32767, '\n');
			id_check = true;
			getchar();
			break;
		case 2:
			system("clear");
			//system("cls");
			if (id_check == false)
				cout << "\nChua nhap STT.";
			else
			{
				cout << "\tCap nhat ho ten lot";
				cout << "\nNhap ho ten lot: ";
				gets(A[id].hoLot);
			}
			getchar();
			break;
		case 3:
			system("clear");
			//system("cls");
			if (id_check == false)
				cout << "\nChua nhap STT.";
			else
			{
				cout << "\tCap nhat ten";
				cout << "\nNhap ten: ";
				gets(A[id].ten);
			}
			getchar();
			break;
		case 4:
			system("clear");
			//system("cls");
			if (id_check == false)
				cout << "\nChua nhap STT.";
			else
			{
				cout << "\tCap nhat diem toan";
				cout << "\nNhap diem toan: ";
				cin >> A[id].diemToan;
			}
			getchar();
			break;
		case 5:
			system("clear");
			//system("cls");
			if (id_check == false)
				cout << "\nChua nhap STT.";
			else
			{
				cout << "\tCap nhat diem tin";
				cout << "\nNhap diem tin: ";
				cin >> A[id].diemTin;
			}
			getchar();
			break;
		case 6:
			system("clear");
			//system("cls");
			if (id_check == false)
				cout << "\nChua nhap STT.";
			else
			{
				cout << "\tCap nhat toan bo thong tin: ";
				enterInfoThongTin(A[id]);
			}
			getchar();
			break;
		default:
			system("clear");
			//system("cls");
			cout << "Lua chon khong hop le";
			getchar();
			break;
		}
	} while (luaChon != 0 || luaChon < 0 || luaChon > 6);
	cout << "\n\tTHONG TIN SAU KHI DA CAP NHAT: \n";
	xuatMangSV(A, n, id);
	writeToFile(A, n, outfile);
}