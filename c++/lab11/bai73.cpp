#include <iostream>
#include <stdio.h>
using namespace std;

void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
void dieukien(int a[], int n);
// điều kiện là có 3 chữ số và mỗi chữ số đều là số lẻ. ví dụ: 137, 553, ...
int main()
{
	cout <<"dieu kien cua bai: \nDem trong day co bao nhi so co 3 chu so va moi chu so deu la so le.\n";
	int n;
	cout << "Nhap so luong phan tu cua mang: ";
	do{
		cin >> n;
		if(n<0)
			cout <<"n>0, nhap lai: ";
	}while(n<0);
	int mang[n];
	nhapmang(mang, n);
	xuatmang(mang, n);
	dieukien(mang, n);
	return 0;
}
void nhapmang(int a[], int n)
{
	cout <<"Nhap mang tu dong.\n";
	srand(time(0));
	for(int i=0; i<n; i++)
		a[i]=rand()%1000;
}
void xuatmang(int a[], int n)
{
	cout << "\tXuatmang\n";
	for(int i=0; i<n; i++)
		cout <<"Mang["<< i << "]= " << a[i] << "\n";
}
void dieukien(int a[], int n)
{
	int dem=0;
	int c, d;
	for(int i=0; i<n; i++){
		if(a[i]>=100 && a[i]<1000){
			int b=a[i]%10;
			int c=a[i]/10%10;
			int d=a[i]/100%100;
			if(b%2==1 && c%2==1 && b%2==1)
				dem++;
		}
	}
	cout <<"\nSo gia tri cua mang co 3 chu so va moi chu so deu la so le la: "<< dem;
}
