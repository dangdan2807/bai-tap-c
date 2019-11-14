#include <iostream>
#include <stdio.h>
#include <array> // gọi thư viện array
using namespace std;
int main()
{
	// khởi tạo mảng
	// cú pháp: array < kiểu_dữ_liệu , số_phần_tử_của_mảng > tên_mảng ;
	array <int, 5> mang;
	// cách khác
	array <int, 5> mang2 = { 1, 2, 3, 4, 5};
	array <int, 5> mang3 {6, 7, 8, 9, 10};
	// Gán giá trị 1 phần tử của mảng
	mang2[1]=7; // mang2.at(1)= 7;
	mang3[1]=35;
	//Xuất 1 phần tử 
	cout <<"mang[1]= " << mang[1] <<"\n"; 
	// hoặc cout <<"mang[1]= " << mang.at(1) <<"\n";
	cout <<"mang2[1]= " << mang2[1] <<"\n";
	cout <<"mang2[1]= " << mang3[1] <<"\n";
	// xem số lượng phần tử của mảng
	cout <<"kich thuoc cua mang2= " << mang2.size() <<"\n";
	//Xuất giá trị phần tử đầu tiên
	cout <<"mang2[0]= " << mang2.front() <<"\n";
	//Xuất giá trị phần tử cuối cùng
	cout <<"mang2[4]= " << mang2.back() <<"\n";
	//Nhập mảng
	cout <<"\tNhap mang\n";
	for(int i=0; i< mang.size(); i++){
		cout <<"mang[" << i <<"]= ";
		cin >> mang[i];
	}
	//Xuất mảng
	cout <<"\tXuat mang\n";
	for(int i=0; i< mang.size(); i++){
		cout <<"mang[" << i <<"]= " <<mang[i] <<"\n";
	}
	return 0;
}
