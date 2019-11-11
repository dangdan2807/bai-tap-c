#include <iostream>
#include <stdio.h>
using namespace std;
int giaithua(int a);
int main()
{
	int n;
	cout <<"nhap so gia thu: ";
	do{
		cin >>n;
		if(n<0)
			cout <<"n>0, nhap lai: ";
	}while(n<0);
	int a=giaithua(n);
	cout <<"n giai thua la: "<< a;
	return 0;
}
int giaithua(int a)
{
	if(a==1)
		return 1;
	return a*giaithua(a-1);;
}
