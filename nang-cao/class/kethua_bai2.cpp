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
		cin >>name;
		cout <<"Chuc vu: ";
		cin >>chucvu;
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
		
	}
}
int main()
{
	
	return 0;
}