#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>
using namespace std;

void check_file(fstream &file);
void enter_array(float A[], int &n);
void write_to_file(float A[], int n, fstream &fileout);
void write_to_end_file(float A[], int &n, fstream &fileout);
void update_value(float A[], int &n);
void read_to_file(float A[], int &n, fstream &filein);
void export_array(float A[], int n);
float sum(float A[], int n);

int main()
{
	fstream filein, fileout, file_add_end;
	const char* address = "output//bai3.txt"; 
	float array_write[100];
	float array_read[100];
	int n, luachon, danh_dau = 0; 
	float tong_binhphuong;
	do{
		system("clear");
		cout <<"========= MENU =========";
		cout << "\n1. Nhap mang so thuc.";
		cout << "\n2. Them so thuc vao cuoi mang va viet vao cuoi file.";
		cout << "\n3. Cap nhat so thuc.";
		cout << "\n4. Viet so thuc vao tep tin.";
		cout << "\n5. Doc so thuc tu tap tin da ghi.";
		cout << "\n6. Hien so thuc da doc.";
		cout << "\n7. Tong binh phuong cac so thuc da doc duoc.";
		cout << "\n0. Thoat";
		cout <<"\n==========================";			cout << "\nNhap lua chon: ";
		cin >> luachon;
		cin.ignore();
		switch(luachon)
		{
		case 0:
			system("clear");
			cout << "Ket thuc chuong trinh.";
			break;
		case 1:
			system("clear");
			enter_array(array_write, n);
			danh_dau = 1;
			break;
		case 2:
			system("clear");
			if(danh_dau == 0)
			{
				cout << "\nBan chua viet danh sach so thuc vao file.";
				getchar();
			}
			else
			{
				file_add_end.open(address, ios_base::app);
				check_file(file_add_end);
				write_to_end_file(array_write, n, file_add_end);
				file_add_end.close();
				danh_dau = 1;
			}
			break;
		case 3:
			system("clear");
			cout << "\n\tCap nhat so thuc:";
			if(danh_dau == 0)
			{
				cout << "\nBan chua viet danh sach so thuc vao file";
				getchar();
			}
			else
			{
				fileout.open(address, ios_base::out);
				check_file(fileout);
				update_value(array_write, n);
				write_to_file(array_write, n, fileout);
				fileout.close();
			}
			break;
		case 4:
			system("clear");
			fileout.open(address, ios_base::out);
			check_file(fileout);
			cout << "\nViet danh sach so thuc vao file";
			write_to_file(array_write, n, fileout);
			fileout.close();
			break;
		case 5:
			system("clear");
			filein.open(address, ios_base::in);
			check_file(filein);
			read_to_file(array_read, n, filein);
			filein.close();
			break;
		case 6:
			system("clear");
			export_array(array_read, n);
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
    }while(luachon != 0 || luachon < 0 || luachon > 7);
	return 0;
}

void check_file(fstream &file)
{
    if(file.fail() == true)
    {
        cout <<"File khong ton tai!";
        exit(0);
	}
}

void enter_array(float A[], int &n)
{
    do{
        system("clear");
        cout << "\n\tNhap danh sach so thuc: ";
        cout << "\nNhap so luong so thuc(n > 0): ";
        cin >> n;
		if(cin.fail())
		{
		    cin.clear();
			cin.ignore(32767, '\n');
		}
		if(n <= 0)
        {
			cout << "\nDu lieu khong hop le.";
            getchar();
        }
	}while(n <= 0);
	for(int i = 0; i < n; i++)
	{
        cout << "Nhap so thuc thu " << i+1 <<": ";
        cin >> A[i];
	}
}

void write_to_file(float A[], int n, fstream &fileout)
{
	for(int i = 0; i < n; i++)
	{
		if(i == n-1)
		{
			cout <<"\nDa viet du lieu vao file.";
			fileout << A[i];
		}
		else
			 fileout << A[i] << endl;
	}
	getchar();
}

void write_to_end_file(float A[], int &n, fstream &fileout)
{
	cout << "\n\tThem so thuc vao cuoi danh sach so thuc va file:";
	cout << "\nNhap so thuc: ";
	cin >> A[n];
	fileout << endl << A[n];
	n++;
	cout << "\nDa them vao cuoi file";
	getchar();
}

void update_value(float A[], int &n)
{
	int id;
	export_array(A, n);
	cout << "\nNhap so thu tu cua mang (i) can cap nhat: ";
	cin >> id;
	cout << "\nNhap A[" << id << "] = ";
	cin >> A[id];
}

void read_to_file(float A[], int &n, fstream &filein)
{
	n = 0;
	while( filein.eof() == false)
	{
		filein >> A[n];
		if(A[n] == '\n')
			break;
		n++;
		filein.ignore();
	}
	cout << "Doc du lieu xong.";
	getchar();
}

void export_array(float A[], int n)
{
	int dem = 1;
	cout << "\n\tXuat cac phan tu hien co cua mang: ";
	for(int i = 0; i < n; i++)
	{
		cout <<"\nA[" <<i <<"] = " << A[i] << "\t";
		if(dem % 5 == 0)
			cout << endl;
		dem++;
	} 
}

float sum(float A[], int n)
{
	float sum = 0;
	for(int i = 0; i < n; i++)
		sum += pow(A[i], 2);
	return sum;
}