#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float tk1, tk2, tk3, bt1, bt2, gk, ck, tbckt, tbcbt, tbc;
	printf("Nhap diem 3 bai kiem tra thuong ki: ");
	cin >> tk1 >> tk2 >> tk3;
	printf("Nhap diem 2 bai kiem tra bai tap: ");
	cin >> bt1 >> bt2;
	printf("Nhap diem bai kiem tra giua ki: ");
	cin >> gk;
	cout << "Nhap diem bai kien tra cuoi ki: ";
	cin >> ck;
	tbckt= (2*((tk1+tk2+tk3)/3)+3*gk+5*ck)/10;
	tbcbt= (bt1+bt2)/2;
	tbc= (tbckt+2*tbcbt)/3;
	cout << endl;
	cout <<"Diem TBC KT la: " << tbckt << endl;
	cout <<"Diem TBC BT la: " << tbcbt << endl;
	cout <<"Diem TBC la: " << tbc << endl;
	return 0;
}
