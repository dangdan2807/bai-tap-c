﻿#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int m, y;
	cout << "Nhap thang vs nam: ";
	cin >>m >>y;
	switch(m)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout <<"Thang nay co 31 ngay";break;
		case 4: case 6: case 9: case 11:
			cout <<"Thang nay co 31 ngay";break;
		case 2:
			if(y%400==0 ||( y%100!=0 && y%4==0))
				cout <<"Thang nay co 29 ngay";
			else
				cout <<"Thang nay co 28 ngay";
	}
	return 0;
}
