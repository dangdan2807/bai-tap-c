#include <iostream>
#include <stdio.h>
using namespace std;
int tinhtong(int a);
int main()
{
	int n;
	cout <<"nhap n: ";
	do{
		cin >>n;
		if(n<0)
			cout <<"n>0, nhap lai: ";
	}while(n<0);
	int sum=tinhtong(n);
	cout <<"Tong cua n so la: "<< sum;
	return 0;
}
int tinhtong(int a)
{
	int tong=0;
	if(a==1)
		tong=1;
	else{
		tong=a+tinhtong(a-1);
	}
	return tong;
}
