#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>

using namespace std;
void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
int timgt_max(int a[], int n);
int main()
{
	int n;
	cout <<"Nhap so luong phan tu cua day so: ";
	do{
		cin >> n;
		if(n<0)
			cout <<"n>0, nhap lai: ";
	}while(n<0);
	int mang[n];
	nhapmang(mang, n);
	xuatmang(mang, n);
	cout <<"Gia tri lon nhat cua day so la: " << timgt_max(mang, n);
	return 0;
}
void nhapmang(int a[], int n)
{
	//ở đây mình sẽ sử dụng cách tạo mảng ngẫu nhiên giá trị để tiện cho việc nhập và test case. Các bạn có thể tự sửa lại theo í muốn.
	srand(time(0));
	cout <<"Tao mang " << n<< " phan tu co gia tri ngau nhien\n";
	for(int i=0; i<n; i++)
	{
		a[i]=rand()%100;
	}
}
void xuatmang(int a[], int n)
{
	cout <<"\tXuat Mang\n";
	for(int i=0; i<n; i++)
		cout <<"Mang[" << i <<"]= " << a[i] << "\n";
}
int timgt_max(int a[], int n)
{
	int  *max=a;
	for(int i=1; i<n; i++)
		if(*max< *(max+i))
			*max= *(max+i);
	return *max;
}