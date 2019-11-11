#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
void dodai(int &xa, int &xb, int &ya, int &yb);
int main()
{
	int xa, xb, ya, yb ,a;
	do{
	cout << "Nhap toa do cua diem A(xa, ya): \n";
	cin >> xa >> ya;
	cout << "Nhap toa do cua diem B(xb, yb):\n ";
	cin >> xb >> yb;
	dodai(xa, xb, ya, yb);
	printf("\nNhap 1: thoat chuong trinh");
	printf("\nNhap 2: de tinh lai\n");
	scanf("%d", &a);
	}while(a==1);
	return 0;
}
void dodai(int &xa, int &xb, int &ya, int &yb)
{
	float ab;
	ab=sqrt(pow(xa-xb, 2)+pow(ya-yb, 2));
	cout << "Do dai vecto AB la: " << ab;
}
