#include <iostream>
#include <stdio.h>
using namespace std;

struct book
{
	char tensach[100];
	char tacgia[50];
};

int main()
{
	int n;
	cout <<"Nhap so sach: ";
	cin >> n;
	//xoa bo nho dep nhap bang cin
	cin.ignore(32676, '\n');
	//Nhap thong tin sach
	book sach[10];
	for(int i=0; i<n; i++){
		cout <<"Nhap thong tin sach:\n";
		cout <<"Nhap ten sach: ";
		fflush(stdin);
		gets(sach[i].tensach);
		cout <<"Nhap ten tac gia: ";
		fflush(stdin);
		gets(sach[i].tacgia);
	}
	//xuat thong tin sach
	for(int i=0; i<n; i++){
		cout <<"Thong tin sach:\n";
		cout <<"Ten sach: " <<sach[i].tensach <<"\n";
		cout <<"Ten tac gia: " <<sach[i].tacgia <<"\n";
	}
	return 0;
}
