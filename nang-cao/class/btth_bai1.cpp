#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

// Định nghĩa class DocGia(class cha)
class DocGia
{
protected:
	string hoten;
	string ngaysinh;
	int sothanghieuluc;
public:
	void input();
	void output();
};
// Định nghĩa class TreEm kế thừ từ class DocGia
class TreEm :public DocGia
{
private:
	string ten_nguoidaidien;
public:
	void input();
	void output();
	int tinhtien();
};
// Định nghĩa class NguoiLon kế thừa từ class DocGia
class NguoiLon: public DocGia
{
private:
	string cmnd;
public:
	void input();
	void output();
	int tinhtien();
};

class ThuVien
{
private:
	vector<TreEm> ds_treem;
	vector<NguoiLon> ds_nguoilon;
public:
	void input();
	void output();
	int tinhtongtien();
};

// hàm main
int main()
{
	ThuVien *a = new ThuVien;
	a->input();
	a->output();
	a->tinhtongtien();
	return 0;
}


// Định nghĩa các phương thức của class DocGia
void DocGia:: input()
{
	cout <<"Nhap ho va ten: ";
	cin.ignore();
	getline(cin, hoten);
	cout <<"Nhap ngay thang nam sinh(dd/mm/yyyy): ";
	getline(cin, ngaysinh);
	cout <<"Nhap so thang hieu luc: ";
	cin >>sothanghieuluc;
}

void DocGia:: output()
{
	cout <<"Ho va ten: " <<hoten <<"\n";
	cout <<"Nhap ngay thang nam sinh(dd/mm/yyyy): " <<ngaysinh <<"\n";
	cout <<"Nhap so thang hieu luc: " <<sothanghieuluc <<"\n";
}

// Định nghĩa các phương thức của class TreEm 
void TreEm::input()
{
	DocGia::input();
	cout <<"Nhap ho ten nguoi dai dien: ";
	cin.ignore();
	getline(cin, ten_nguoidaidien);
}

void TreEm::output()
{
	DocGia::output();
	cout <<"Ho ten nguoi dai dien: " <<ten_nguoidaidien <<"\n";
}
 
int TreEm:: tinhtien()
{
	return sothanghieuluc * 5000;
}

// Định nghĩa các phương thức của class NguoiLon
void NguoiLon::input()
{
	DocGia::input();
	cout <<"Nhap CMND: ";
	cin.ignore();
	getline(cin, cmnd);
}

void NguoiLon::output()
{
	DocGia::output();
	cout <<"CMND: " <<cmnd <<"\n";
}

int NguoiLon::tinhtien()
{
	return sothanghieuluc * 10000;
}

//Định nghĩa các phương thức của class ThuVien
void ThuVien::input()
{
	int luachon;
	while(true){
		cout <<"\t\t=== MENU ===\n";
		cout <<"\n1. Tao the doc gia tre em.";
		cout <<"\n2. Tao the doc gia nguoi lon";
		cout <<"\n0. De thoat";
		cout <<"\n\nNhap lua chon: ";
		cin >> luachon;
		if(luachon == 1){
			cout <<"\n\n\tNhap Thong Tin Doc Gia Tre Em\n";
			TreEm x;
			x.input();
			ds_treem.push_back(x);
		}
		else if(luachon == 2){
			cout <<"\n\n\tNhap Thong Tin Doc Gua Nguoi Lon\n";
			NguoiLon x;
			x.input();
			ds_nguoilon.push_back(x);
		}
		else if(luachon == 3){
			cout <<"\nTong tien la: " << ThuVien::tinhtongtien() << endl;
		}
			
		else if(luachon == 0)
			break;
	}
}

void ThuVien::output()
{
	cout <<"\n\n\tXuat Thong Tin Doc Gia Tre Em\n";
	for(int i=0; i<ds_treem.size(); i++){
		cout <<"\nThong Tin Doc Gia Tre Em Thu " << i+1 <<endl;
		ds_treem[i].output();
	}
	cout <<"\n\n\tXuat Thong Tin Doc Gia Nguoi Lon\n";
	for(int i=0; i<ds_nguoilon.size(); i++){
		cout <<"\nThong Tin Doc Gia Nguoi Lon Thu " << i+1 <<endl;
		ds_nguoilon[i].output();
	}
}

int ThuVien::tinhtongtien()
{
	//duyệt ds_treem
	long int sum=0;
	for(int i=0; i<ds_treem.size(); i++){
		sum+=ds_treem[i].tinhtien();
	}
	//duyệt mảng vector ds_nguoilon
	for(int i=0; i<ds_nguoilon.size(); i++){
		sum+=ds_nguoilon[i].tinhtien();
	}
	return sum;
}
