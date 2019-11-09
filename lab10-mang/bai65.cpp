#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void xuatmang(int a[], int n);
void chen(int a[], int &n, int &x);
void sapxep(int a[], int n);
int main()
{
	int n;
	cout <<"Nhap so phan cua mang: ";
	do{
		cin >> n;
		if(n<0)
			cout <<"n>0, nhap lai: ";
	}while(n<=0);
	int mang[n];
	cout <<"Tao mang n phan tu ngau nhien \n";
	srand(time(0));
	for(int i=0; i<n; i++)
		mang[i]=rand()%100;
	sapxep(mang, n);
	xuatmang(mang, n);
	int x;
	chen(mang, n, x);
	xuatmang(mang, n);
}
void xuatmang(int a[], int n)
{
	cout <<"\tXuat Mang\n";
	for(int i=0; i<n; i++)
		cout <<"mang[" << i << "]= " << a[i] << "\n";
}
void sapxep(int a[], int n)
{
	int temp;
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}
void chen(int a[], int &n, int &x)
{
	cout <<"Nhap gia tri x: ";
	cin >> x;
	a[n]=x;
	n++;
	sapxep(a, n);
}