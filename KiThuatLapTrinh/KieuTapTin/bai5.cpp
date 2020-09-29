#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
using namespace std;
#define MAX 100

typedef struct Sinhvien
{
	char holot[50], ten[50];
	float diem_toan, diem_tin;
}SV;

void check_file(fstream& file);
void enter_info_sv(SV& x);
void enter_info_array_sv(SV A[], int& n);
void export_info_sv(SV x);
void export_info_array_sv(SV A[], int n, int id);
void write_to_file(SV A[], int n, fstream& outfile);
void read_to_file(SV A[], int n, fstream& infile);
void update_info_sv(SV A[], int n, fstream& outfile);

int main()
{
	const char* address = "output//bai5.dat";
	fstream input_file, output_file;
	SV ArrayA[MAX], ArrayB[MAX];
	int n, luachon;
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
		cin >> luachon;
		cin.ignore(31767, '\n');
		switch (luachon)
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
				enter_info_array_sv(ArrayA, n);
				check_nhap = true;
				getchar();
				break;
			case 2:
				system("clear");
				//system("cls");
				if (check_nhap == false)
					cout << "Chua nhap danh sach thong tin sinh vien";
				else
					export_info_array_sv(ArrayA, n, 0);
				getchar();
				break;
			case 3:
				system("clear");
				//system("cls");
				if (check_nhap == false)
					cout << "Chua nhap danh sach thong tin sinh vien";
				else
				{
					output_file.open(address, ios_base:: out);
					check_file(output_file);
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
					check_file(output_file);
					export_info_array_sv(ArrayA, n, 0);
					check_xuat = true;
					write_to_file(ArrayA, n, output_file);
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
					input_file.open(address, ios_base:: in);
					check_file(input_file);
					read_to_file(ArrayB, n, input_file);
					export_info_array_sv(ArrayB, n, 0);
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
	} while (luachon != 0);
	return 0;
}

void check_file(fstream& file)
{
	if (file.fail() == true)
	{
		cout << "File khong ton tai!!\nKet thuc chuong trinh.";
		exit(0);
	}
}

void enter_info_sv(SV& x)
{
	cout << "\nNhap ho ten lot: ";
	gets(x.holot);
	cout << "Nhap ten: ";
	fflush(stdin);
	gets(x.ten);
	cout << "Nhap diem toan: ";
	cin >> x.diem_toan;
	cout << "Nhap diem tin: ";
	cin >> x.diem_tin;
	cin.ignore(32767, '\n');
}

void enter_info_array_sv(SV A[], int& n)
{
	cout << "\nNhap so luong sinh vien: ";
	cin >> n;
	cin.ignore(32767, '\n');
	for (int i = 0; i < n; i++)
		enter_info_sv(A[i]);
}

void export_info_sv(SV x)
{
	cout << "|  " << x.holot << "\t";
	cout << "|  " << x.ten << "\t";
	cout << "|    " << x.diem_toan;
	cout << "    |    " << x.diem_tin << "    |";
}

void export_info_array_sv(SV A[], int n, int id)
{
	cout << "\n\tXUAT THONG TIN SINH VIEN:";
	cout << "\n|  STT  |  Ho ten lot\t|  Ten\t|  Diem Toan |  Diem Tin |";
	if (id != 0)
	{
		cout << "\n| " << id + 1 << " ";
		export_info_sv(A[id]);
	}
	else if(id == 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "\n| " << i + 1 << " ";
			export_info_sv(A[i]);
		}
	}
}

void write_to_file(SV A[], int n, fstream& outfile)
{
	for (int i = 0; i < n; i++)
	{
		outfile << A[i].holot << endl;
		outfile << A[i].ten << endl;
		outfile << A[i].diem_toan << endl;
		outfile << A[i].diem_tin << endl;
	}
}

void read_to_file(SV A[], int n, fstream& infile)
{
	int i = 0;
	while (infile.eof() == false)
	{
		if (infile.eof() == true)
			break;
		infile.getline(A[i].holot, 50);
		infile.getline(A[i].ten, 50);
		infile >> A[i].diem_toan;
		infile >> A[i].diem_tin;
		infile.ignore(32767, '\n');
		i++;
	}
}

void update_info_sv(SV A[], int n, fstream& outfile)
{
	int id = 0, luachon;
	bool id_check = false;
	do {
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
		cin >> luachon;
		cin.ignore(32767, '\n');
		switch (luachon)
		{
		case 0:
			break;
		case 1:
			system("clear");
			//system("cls");
			export_info_array_sv(A, n, id);
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
				gets(A[id].holot);
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
				cin >> A[id].diem_toan;
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
				cin >> A[id].diem_tin;
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
				enter_info_sv(A[id]);
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
	} while (luachon != 0 || luachon < 0 || luachon > 6);
	cout << "\n\tTHONG TIN SAU KHI DA CAP NHAT: \n";
	export_info_array_sv(A, n, id);
	write_to_file(A, n, outfile);
}