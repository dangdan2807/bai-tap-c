#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct thanhpho
{
	char name[50];
	int income;
	int danso;
	float tile_docviet;
};
thanhpho nhap(thanhpho a[], int n);

int main()
{
	int n;
	cout <<"Nhap so luong thanh pho: ";
	do{
		cin >>n;
		if(n<0)
			cout <<"n>0, nhap lai: ";
	}while(n<0);
	thanhpho tp[n];
	nhap(tp, n);
	int thunhap_max = tp[0].income;
	float docviet_max = tp[0].tile_docviet;
	int n_thunhap, n_docviet;
	for(int i=0; i<n; i++){
		n_thunhap=0;
		if(thunhap_max< tp[i].income){
			thunhap_max= tp[i].income;
			n_thunhap=i;
		}
		n_docviet=0;
		if(docviet_max< tp[i].tile_docviet){
			docviet_max= tp[i].tile_docviet;
			n_docviet=i;
		}
	}
	cout <<"\nThanh pho " <<tp[n_thunhap].name <<" co tong thu nhap cao nhat la: "<< thunhap_max <<"\n";
	cout <<"Thanh pho " <<tp[n_docviet].name <<" co ti le biet doc, viet cao nhat la: "<< docviet_max <<"\n";
	return 0;
}
thanhpho nhap(thanhpho a[], int n)
{
	cout<<"\tNhap thong tin thanh pho:\n";
	for(int i=0; i<n; i++){
		cout <<"\nTen thanh pho: ";
		cin.ignore();
		gets(a[i].name);
		cout <<"Tong thu nhap: ";
		cin >>a[i].income;
		cout <<"Dan so: ";
		cin >>a[i].danso;
		cout <<"Ti le biet doc, viet: ";
		cin >>a[i].tile_docviet;
	}
}