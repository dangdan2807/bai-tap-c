//Nhap ngay o khach san cua 1 khach de tinh tien
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int tientra, sotuan, songay, n;
	printf("Nhap so ngay: ") ;
	scanf("%d",  &n) ;
	sotuan=n/7;
	songay=n%7;
	tientra=sotuan*700000+ songay*120000;
	printf("so tuan la: %d\n o ngay la: %d\n",  sotuan,  songay) ;
	printf("so tien tra la: %d",  tientra);
	return 0;
}
