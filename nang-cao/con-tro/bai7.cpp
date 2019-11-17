#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cout <<"Nhap so luong phan tu cua mang: ";
	do{
		cin >> n;
		if(n<0)
			cout <<"n>0, nhap lai: ";
	}while(n<0);
	int mang[n];
	int *ptr;
	ptr = mang; // ptr = &mang
	cout <<"\tNhap mang:\n";
	for(int i=0; i<n; i++){
		cout <<"Mang[" << i <<"]= ";
		cin >> mang[i]; //*(ptr+i);
	}
	int sum=0;
	for(int i=0; i<n; i++)
		sum += *(ptr+i);
	cout <<"Tong cua mang la: " << sum;
	return 0;
}
