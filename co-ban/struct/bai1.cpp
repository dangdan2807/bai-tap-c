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
	fflush(stdin);
	//Nhap thong tin sach
	book sach[n];
	for(int i=0; i<n; i++){
		cout <<"Nhap thong tin sach " << i+1<<":\n";
		cout <<"Nhap ten sach: ";
		fflush(stdin);
		gets(sach[i].tensach);
		cout <<"Nhap ten tac gia: ";
		fflush(stdin);
		gets(sach[i].tacgia);
	}
	//xuat thong tin sach
	for(int i=0; i<n; i++){
		cout <<"Thong tin sach " << i+1<<":\n";
		cout <<"Ten sach: " <<sach[i].tensach <<"\n";
		cout <<"Ten tac gia: " <<sach[i].tacgia <<"\n";
	}
	return 0;
}
