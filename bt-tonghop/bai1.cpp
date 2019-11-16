#include <iostream>
#include <stdio.h>
using namespace std;

void nhapgio(int a[], int n);
void xuatgio(int a[], int n);
int timmax(int a[], int n);
int tong(int a[], int n);

int main()
{
	int n;
	cout <<"Nhap so ngay lam viec: ";
	do{
		cin >> n;
		if(n<0)
			cout <<"so ngay lam viec >= 0, nhap lai: ";
	}while(n<0);
	int a[n];
	nhapgio(a, n);
	xuatgio(a, n);
	int sum = tong(a, n);
	cout <<"Tong so tien la: " << sum <<"\n";
	cout <<"Tien cua ngay lam nhieu nhat; " << timmax(a, n) << "\n";
	cout <<"So tien trung binh moi ngay lam them la: " << sum/n << "\n";
	return 0;
}

void nhapgio(int a[], int n)
{
	cout <<"\tNhap gio lam viec\n";
	for(int i=0; i<n; i++){
		cout <<"Ngay lam thu " << i+1 << " la: ";
		cin >> a[i];
	}
}

void xuatgio(int a[], int n)
{
	cout <<"\tXuat gio lam viec\n";
	for(int i=0; i<n; i++)
		cout <<"Ngay lam thu " << i+1 << " la: " << a[i] <<"\n";
}

int tong(int a[], int n)
{
	int sum=0;
	for(int i=0; i<n; i++)
		sum+=a[i];
	return sum*15000;
}

int timmax(int a[], int n)
{
	int max=a[0];
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n-1; j++)
			if(a[j]>a[i])
				max=a[j];
	return max*15000;
}
