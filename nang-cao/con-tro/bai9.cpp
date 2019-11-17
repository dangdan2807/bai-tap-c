#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char chuoi[100];
	char *p = chuoi;
	cout <<"Nhap chuoi ki tu: ";
	gets(chuoi);
	int dem=0;
	while( *p != '\0'){
		dem++;
		p++;
	}
	cout <<"Do dai cua chuoi la: " << dem;
	return 0;
}