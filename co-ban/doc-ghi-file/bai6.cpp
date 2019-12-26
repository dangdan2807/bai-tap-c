#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

struct PhanSo
{
	int tuso;
	int mauso;
};
struct DanhSach
{
	PhanSo ds_ps[100];
	int n;
};

void doc_1_phan_so(PhanSo &a, ifstream &filein);
void doc_file(DanhSach &ds, ifstream &filein);
void xuat_mang(DanhSach a);
int ucln(int x, int y);
void rutgon_1_phanso(PhanSo &ps);
void ghifile_rutgon_ds_phanso(DanhSach &ds, ofstream &fileout);
void ghifile_ps_max(DanhSach ds, ofstream &fileout);

int main()
{
	ifstream filein;
	filein.open("//sdcard//code//bai-tap-c//co-ban//doc-ghi-file//input//bai6-in.txt", ios_base::in);
	
	DanhSach ds;
	int n=0;
	doc_file(ds, filein);
	cout <<"Day phan so doc duoc la: ";
	xuat_mang(ds);
	cout <<endl;
	//thao tac voi file thu 1
	ofstream fileout;
	ghifile_rutgon_ds_phanso(ds, fileout);
	cout <<"Day phan so sau khi rut gon: ";
	xuat_mang(ds);
	cout <<"\nPhan so lon nhat la: ";
	ghifile_ps_max(ds, fileout);
	fileout.close();
	filein.close();
	return 0;
}

void doc_1_phan_so(PhanSo &a, ifstream &filein)
{
	char x;
	filein >> a.tuso;
	filein >> x;
	filein >> a.mauso;
}
void doc_file(DanhSach &ds, ifstream &filein)
{
	if(filein.fail() == true)
	{
		cout <<"File doc khong ton tai!";
		exit(0);
	}
	filein >> ds.n;
	for(int i=0; i<ds.n; i++)
	{
		doc_1_phan_so(ds.ds_ps[i], filein);
	}
}
void xuat_mang(DanhSach a)
{
	for(int i= 0; i<a.n; i++)
		cout <<a.ds_ps[i].tuso <<"/" <<a.ds_ps[i].mauso <<"  ";
}
int ucln(int x, int y)
{
	while(x != y)
	{
		if(x > y)
			x-=y;
		else if(x <y)
			y-=x;
	}
	return x;
}
void rutgon_1_phanso(PhanSo &ps)
{
	int uc = ucln(ps.tuso, ps.mauso);
	ps.tuso /= uc;
	ps.mauso /= uc; 
}
void ghifile_rutgon_ds_phanso(DanhSach &ds, ofstream &fileout)
{
	fileout.open("//sdcard//code//bai-tap-c//co-ban//doc-ghi-file//output//bai6-rgps.txt", ios_base::out);	
	for(int i=0; i<ds.n; i++)
	{
		rutgon_1_phanso(ds.ds_ps[i]);
	}
	for(int i=0; i<ds.n; i++)
	{
		fileout <<ds.ds_ps[i].tuso <<"/" <<ds.ds_ps[i].mauso <<"\n";
	}
	fileout.close();
}
void ghifile_ps_max(DanhSach ds, ofstream &fileout)
{
	fileout.open("//sdcard//code//bai-tap-c//co-ban//doc-ghi-file//output//bai6-out.txt", ios_base::out);
	int dem = 0;
	float max = 1.0* ds.ds_ps[0].tuso / ds.ds_ps[0].mauso;
	float temp = 0;
	for(int i=1; i<ds.n; i++)
	{
		temp = ds.ds_ps[i].tuso / (ds.ds_ps[i].mauso * 1.0);
		if(max < temp)
		{
			max = temp;
			dem = i;
		}
	}
	fileout <<ds.ds_ps[dem].tuso <<"/" <<ds.ds_ps[dem].mauso <<"\n";
	cout <<ds.ds_ps[dem].tuso <<"/" <<ds.ds_ps[dem].mauso <<"\n";
	fileout.close();
}