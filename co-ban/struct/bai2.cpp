#include <iostream> 
#include <stdio.h>
#include <math.h>
using namespace std; 
//khái báo kiểu dữ liệu phân số
struct phanso
{
	int tuso;
	int mauso;
};
//khai báo hàm cộng phân số với kiển dữ liệu vừa định nghĩa là phanso
phanso sum(phanso, phanso);

int main() {
	int tuso1, tuso2, mauso1, mauso2;
	cout <<"Nhap phan so thu 1(tu so va mau so): ";
	cin >>tuso1 >>mauso1;
	cout <<"Nhap phan so thu 2(tu so va mau so): ";
	cin >>tuso2 >>mauso2;
	//tạo phân số
	phanso f1 ={tuso1, mauso1};
	phanso f2 ={tuso2, mauso2};
	phanso ketqua = sum(f1, f2);
	//xuất kết quả
	cout <<f1.tuso <<"\\" <<f1.mauso <<" + " <<f2.tuso << "\\" <<f2.mauso <<" = ";
	cout <<ketqua.tuso <<"\\" <<ketqua.mauso <<"\n";
	return 0; 
}

phanso sum(phanso f1, phanso f2)
{
	phanso sum= {(f1.tuso * f2.mauso)+(f1.mauso*f2.tuso), (f1.mauso*f2.mauso)};
	return sum;
}
