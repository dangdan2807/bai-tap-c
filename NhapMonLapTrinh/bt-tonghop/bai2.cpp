#include <iostream>
#include <stdio.h>
#include <array>
using namespace std;

int main()
{
	int ngay= 28;
	int thang= 01;
	int nam= 2001;
	int tich= ngay*thang*nam;
	cout <<"Ngày*Tháng*Năm = " <<tich <<"\n\n";
	// tìm các giá trị chia hết cho ngày sinh và 17
	int dem=0, n=1000;
	int ketqua[n];
	for(int i=0; i<tich; i++){
		if(i%ngay==0 && i%17==0){
			ketqua[dem]=i;
			dem++;
			//n++;
		}
	}
	//sắp xếp mảng vừa tìm dc
	for(int i=0; i<dem-1; i++){
		for(int j=i+1; j<dem; j++){
			if(ketqua[i]<ketqua[j]){
				int temp = ketqua[i];
				ketqua[i] = ketqua[j];
				ketqua[j] = temp;
			}
		}
	}
	//in ra 10 giá trị lớn nhất
	cout <<"Ket qua la:\n";
	for(int i=0; i<10; i++){
		cout <<ketqua[i] <<"\t";
	}
	return 0;
}
