#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

//===== KHAI BAO CLASS =====
class PhanSo
{
protected:
	int n = 2;
	int tuso[2];
	int mauso[2];
public:
	void nhap_ps(int &tuso, int &mauso);
	void xuat_ps(int tuso, int mauso);
	void nhap_ds_ps();
	void xuat_ds_ps();
	int ucln(int x, int y);
	void rutgon(int &x, int &y);
	void cong_ps();
	void tru_ps();
	void nhan_ps();
	void chia_ps();
};

//===== DINH NGHIA HAM CUA CLASS PhanSo =====
void PhanSo:: nhap_ps(int &tuso, int &mauso)
{
	cout <<"\nNhap tu so: ";
	cin >>tuso;
	cout <<"Nhap mau so: ";
	cin >>mauso;
}
void PhanSo:: nhap_ds_ps()
{
	cout <<"\tNhap 2 phan so:\n";
	for(int i=0; i<n; i++)
	{
		cout <<"\nPhan So thu " <<i+1 <<": ";
		nhap_ps(tuso[i], mauso[i]);
	}
}
void PhanSo:: xuat_ps(int tuso, int mauso)
{
	rutgon(tuso, mauso);
	if(mauso == 1)
		cout <<tuso;
	else
		cout <<tuso <<"/" <<mauso;
}
void PhanSo:: xuat_ds_ps()
{
	cout <<"\tXuat 2 phan so";
	for(int i=0; i<n; i++)
	{
		cout <<"\nPhan So Thu " <<i+1 <<": ";
		xuat_ps(tuso[i], mauso[i]);
	}
}
// ham uoc chung lon nhat
int PhanSo:: ucln(int x, int y)
{
	while(x != y)
	{
		if(x > y)
			x -= y;
		else if(x < y)
			y -= x;
	}
	return x;
}
void PhanSo:: rutgon(int &x, int &y)
{
	float uc = ucln(x, y);
	x /= uc;
	y /= uc;
}
// cac ham tinh toan 2 phan so
void PhanSo:: cong_ps()
{
	int a = ((tuso[0] * mauso[1]) + (tuso[1] * mauso[0]));
	int b = (mauso[0] * mauso[1]);
	cout <<"\nCong 2 phan so: ";
	xuat_ps(a, b);
}
void PhanSo:: tru_ps()
{
	int a = ((tuso[0] * mauso[1]) - (tuso[1] * mauso[0]));
	int b = (mauso[0] * mauso[1]);
	cout <<"\nTru 2 phan so: ";
	xuat_ps(a, b);
}
void PhanSo:: nhan_ps()
{
	int a = tuso[0] *tuso[1];
	int b= mauso[0] * mauso[1];
	cout <<"\nNhan 2 phan so: ";
	xuat_ps(a, b);
}
void PhanSo:: chia_ps()
{
	int a = tuso[0] * mauso[1];
	int b = mauso[0] * tuso[1];
	cout <<"\nChia 2 phan so: ";
	xuat_ps(a, b);
}

int main()
{
	PhanSo *ps = new PhanSo;
	ps->nhap_ds_ps();
	ps->xuat_ds_ps();
	cout <<"\n\tKet Qua Cac Phep Tinh:";
	ps->nhan_ps();
	ps->chia_ps();
	ps->tru_ps();
	ps->cong_ps();
	return 0;
}
