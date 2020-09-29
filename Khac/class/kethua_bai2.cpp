#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

class NhanVien
{
protected:
	int id;
	string name, chucvu;
public:
	void nhapthongtin()
	{
		cout <<"ID nhan vien: ";
		cin >>id;
		cout <<"Ten nhan vien: ";
		cin.ignore();
		getline(cin, name);
		cout <<"Chuc vu: ";
		cin.ignore();
		getline(cin, chucvu);
	}
};

class Luong: public NhanVien
{
	float luongcb, pcthuhut, pcchucvu, pctrachnhiem, tongluong;
public:
	void nhapluong()
	{
		cout <<"Nhap luong co ban: ";
		cin >>luongcb;
		cout <<"Nhap phu cap thu hut: ";
		cin >>pcthuhut;
		cout <<"Nhap phu cap chuc vu: ";
		cin >>pcchucvu;
		cout <<"Nhap phu cap trach nhien: ";
		cin >>pctrachnhiem;
		
	}
	
	void calculate()
	{
		tongluong= luongcb+pcthuhut+pcchucvu+pctrachnhiem;
	}
	
	void display()
	{
		cout <<id <<"\t" <<name <<"\t" <<chucvu <<"\t" <<luongcb <<"\t" <<pcthuhut <<"\t" <<pcchucvu <<"\t" <<pctrachnhiem <<"\n";
	}
};

int main()
{
	Luong luong;
	luong.nhapthongtin();
	luong.nhapluong();
	cout <<"\nID\tTen\tChucvu\tLuongcb\tPcthuhut\tPcchucvu\tPctrachnhiem\tTongluong\n";
	luong.display();
	return 0;
}