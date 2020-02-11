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

void enter_1_tn(TN& x, ofstream &fileout);
void write_file(TN A[], ifstream fileout);
void read_1_tn(TN& x, ifstream& filein);
void export_1_tn(TN x);
void read_file(TN A[], int &n, ifstream& filein);
void export_file(TN A[], int n);

int main()
{
	ifstream filein;
	ofstream fileout;
	fileout.open("bai2.txt", ios_base::in);
	filein.open("bai2.txt", ios_base::in);
	TN output[MAX];
	TN input[MAX];
	int n;
	
	fileout.close();
	filein.close();
	return 0;
}

void enter_1_tn(TN& x, ofstream& fileout)
{
	cout << "\nNhap ho va ten: ";
	gets_s(x.name);
	cout << "\nNhap tuoi: ";
	cin >> x.age
	cout <<

}

void read_1_tn(TN& x, ifstream& filein)
{
	filein.getline(x.name, 100);
	filein >> x.age;
	filein >> x.luong;
	filein.ignore();
}

void export_1_tn(TN x)
{
	cout << "\nHo va ten: " << x.name;
	cout << "\nTuoi: " << x.age;
	cout << "\nLuong: " << x.luong;
	cout << endl;
}

void read_file(TN A[], int& n, ifstream& filein)
{
	if (filein.fail() == true)
	{
		cout << "File khong ton tai!";
		exit(0);
	}
	n = 0;
	while (filein.eof() == false)
	{
		read_1_tn(A[n], filein);
		if (strcmp(A[n].name, "") == 0)
			break;
		n++;
	}
}

void export_file(TN A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nXuat thong tin nguoi thu " << i + 1;
			export_1_tn(A[i]);
	}
}
