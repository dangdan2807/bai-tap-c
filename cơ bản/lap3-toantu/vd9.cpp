//Nhap ngay o khach san cua 1 khach de tinh tien
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int tientra, sotuan, songay, n;
	cout <<"Nhap so ngay: ";
	cin >> n;
	sotuan=n/7;
	songay=n%7;
	tientra=sotuan*700000+ songay*120000;
	cout << "so tuan la: "<< sotuan << endl << "so ngay la: " << songay << endl;
	cout << "so tien tra la: " << tientra;
	return 0;
}
