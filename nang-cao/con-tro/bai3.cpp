#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int mang[5];
	int *prt = mang;
	cout <<"\tNhap mang: \n";
	for(int i=0; i<5; i++){
		cout <<"Mang[" << i <<"]= ";
		cin >> *(prt+i);
	}
	cout <<"\tXuat mang:\n";
	for(int i=4; i>=0; i--)
		cout <<"Mang[" << i <<"]= "<< *(prt+i) << "\n";
	return 0;
}
