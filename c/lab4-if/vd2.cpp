#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int ngay, luong=0, ngaycong=0;
	printf("Nhap so ngay lam viec trong thang: ");
	scanf("%d", &ngay);
	if(ngay>23)
		ngaycong=22+(ngay-22)*2;
	else
		ngaycong=ngay;
	luong=ngaycong*300000;
	printf("Luong cua %d ngay lam viec(300000/ngay) la: %d", ngaycong, luong);
	return 0;
}
