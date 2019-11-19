#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

struct sinhvien
{
	char tname[50];
	char pname[50];
	int diem;
};

int main()
{
	int n;
	cout <<"Nhap so doi bong: ";
	do{
		cin >>n;
		if(n<0 || n>10)
			cout <<"0< n <=10, nhap lai: ";
	}while(n<0 || n>10);
	sinhvien doibong[n];
	//Nhập thông tin về các đội
	cout <<"\tNhap thong tin:\n";
	for(int i=0; i<n; i++){
		cout <<"\nDoi bong " <<i+1 <<"\n";
		cout <<"Nhap ten sinh vien: ";
		cin.ignore();
		gets(doibong[i].pname);
		cout <<"Nhap Ten doi bong: ";
		//cin.ignore();
		fflush(stdin);
		gets(doibong[i].tname);
		cout <<"Nhap diem so: ";
		cin >> doibong[i].diem;
	}
	//Săp xếp
	for(int i=0; i<n; i++){
		sinhvien temp;
		for(int j=0; j<n; j++){
			if(doibong[i].tname<doibong[j].tname){
				temp=doibong[i];
				doibong[i]=doibong[j];
				doibong[j]=temp;
			}
		}
	}
	
	//Xuất thông tin
	cout <<"Doi bong\tSinh vien\tDiem so\n";
	for(int i=0; i<n; i++){
		cout <<"\n" <<doibong[i].tname;
		cout <<"\t" <<doibong[i].pname;
		cout <<"\t" <<doibong[i].diem;
	}
	return 0;
}
