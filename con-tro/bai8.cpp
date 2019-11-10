#include <iostream>
#include <stdio.h>
using namespace std;
int dem(char *p);
int main()
{
	char chuoi[100];
	int d;
	cout <<"Nhap chuoi ki tu: ";
	gets(chuoi);
	d=dem(chuoi);
	cout <<"Do dai cua chuoi la: " << d;
	return 0;
}
int dem(char *p)
{
	int dem=0;
	while( *p != '\0'){
		dem++;
		p++;
	}
	return dem;
}
