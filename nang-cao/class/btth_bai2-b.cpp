#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

//===== KHAI BAO STRUCT sophuc =====
struct sophuc
{
	float thuc;
	float ao;
};

//===== KHAI BAO CLASS SoPhuc =====
class SoPhuc
{
private:
	int n = 2;
	sophuc ds_sp[6];
public: 
	void nhap_sp(sophuc &x);
	void nhap_2_sp();
	void xuat_sp(sophuc x);
	void xuat_2_sp();
	void cong_sp(sophuc &x);
	void tru_sp(sophuc &x);
	void nhan_sp(sophuc &x);
	void chia_sp(sophuc &x);
};
//===== DINH NGHIA CAC HAM CUA CLASS SoPhuc =====
void SoPhuc:: nhap_sp(sophuc &x)
{
	cout <<"\nNhap phan thuc: ";
	cin >> x.thuc;
	cout <<"Nhap phan ao: ";
	cin >> x.ao;
}
void SoPhuc:: nhap_2_sp()
{
	cout <<"\tNhap ds So Phuc";
	for(int i=0; i<n; i++)
	{
		cout <<"\nNhap so phuc thu " <<i+1 <<": ";
		nhap_sp(ds_sp[i]);
	}
}
void SoPhuc:: xuat_sp(sophuc x)
{
	if(x.ao<0 )
		cout <<x.thuc <<" - " <<fabs(x.ao ) <<"j";
	else
		cout <<x.thuc <<" + " <<x.ao <<"j";
}
void SoPhuc:: xuat_2_sp()
{
	cout <<"\n\tXuat ds So Phuc";
	for(int i=0; i<n; i++)
	{
		cout <<"\nSo phuc thu " <<i+1 <<": ";
		xuat_sp(ds_sp[i]);
	}
	cout <<"\n\tCac Phep Tinh Toan So Phuc";
	cout <<"\nCong 2 so phuc: ";
	cong_sp(ds_sp[2]);
	cout <<"\nTru 2 so phuc: ";
	tru_sp(ds_sp[3]);
	cout <<"\nNhan 2 so phuc: ";
	nhan_sp(ds_sp[4]);
	cout <<"\nChia 2 so phuc: ";
	chia_sp(ds_sp[5]);
}
void SoPhuc:: cong_sp(sophuc &x)
{
	x.thuc = ds_sp[0].thuc + ds_sp[1].thuc;
	x.ao = ds_sp[0].ao + ds_sp[1].ao;
	xuat_sp(x);
}
void SoPhuc:: tru_sp(sophuc &x)
{
	 x.thuc = ds_sp[0].thuc - ds_sp[1].thuc;
	x.ao = ds_sp[0].ao - ds_sp[1].ao;
	xuat_sp(x);
}
void SoPhuc:: nhan_sp(sophuc &x)
{
	x.thuc = ds_sp[0].thuc*ds_sp[1].thuc - ds_sp[0].ao*ds_sp[1].ao;
	x.ao = ds_sp[0].thuc*ds_sp[1].ao - ds_sp[0].ao*ds_sp[1].thuc;
	xuat_sp(x);
}
void SoPhuc:: chia_sp(sophuc &x)
{
	float x_thuc_tu = ds_sp[0].thuc * ds_sp[1].thuc + ds_sp[0].ao * ds_sp[1].ao;
	float x_mau = pow(ds_sp[0].thuc, 2) * pow(ds_sp[0].ao, 2);
	float x_ao_tu = ds_sp[0].thuc * ds_sp[1].ao - ds_sp[0].ao * ds_sp[1].thuc;
	x.thuc = x_thuc_tu / x_mau;
	x.ao = x_ao_tu / x_mau;
	xuat_sp(x);
}

// ===== HAM MAIN =====
int main()
{
	SoPhuc *sp = new SoPhuc;
	sp->nhap_2_sp();
	sp->xuat_2_sp();
	return 0;
}