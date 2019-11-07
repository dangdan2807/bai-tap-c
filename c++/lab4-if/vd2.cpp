#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int ngay, luong=0, ngaycong=0;
	cout <<"Nhap so ngay lam viec trong thang: ";
	cin >> ngay;
	if(ngay>23)
		ngaycong=22+(ngay-22)*2;
	else
		ngaycong=ngay;
	luong=ngaycong*300000;
	printf("Luong cua %d ngay lam viec la: %d", ngaycong, luong);
	return 0;
}
