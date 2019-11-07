#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float tk1, tk2, tk3, bt1, bt2, gk, ck, tbckt, tbcbt, tbc;
	printf("Nhap diem 3 bai kiem tra thuong ki: ");
	scanf("%f%f%f",  &tk1,  &tk2,  &tk3) ;
	printf("Nhap diem 2 bai kiem tra bai tap: ");
	scanf("%f%f",  &bt1,  &bt2);
	printf("Nhap diem bai kiem tra giua ki: ");
	scanf("%f",  &gk) ;
	cout << "Nhap diem bai kien tra cuoi ki: ";
	scanf("%f",  &ck);
	tbckt= (2*((tk1+tk2+tk3)/3)+3*gk+5*ck)/10;
	tbcbt= (bt1+bt2)/2;
	tbc= (tbckt+2*tbcbt)/3;
	printf("Diem TBC KT la: %f\n",  tbckt) ;
	printf("Diem TBC BT la: %f",  tbcbt) ;
	printf("Diem TBC la: %f",  tbc) ;
	return 0;
}
