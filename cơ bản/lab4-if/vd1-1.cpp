//Nhap a va b => b co phai uoc cua a
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, b;
	cout <<"Nhap a va b: ";
	cin >>a >>b;
	if(a%b==0)
		cout << "b la uoc so cua a";
	else
		cout << "b khong phai la uoc so cua a";
	return 0;
}
