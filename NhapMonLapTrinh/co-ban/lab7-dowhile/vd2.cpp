#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, tong=0;
	do
	{
		cout <<"Nhap so tien cua hoa don: ";
		cin >>n;
		if(n>0)
			tong+=n;
	}while(n>0);
	cout << "Tong hoa don la: " << tong;
	return 0;
}
