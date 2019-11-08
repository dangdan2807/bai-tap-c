#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float A;
	cout << "Nhap so thuc A (0<A<2): ";
	do{
		cin >> A;
		if(A<0)
			cout << "DK 0<A<2, nhap lai: ";
	}while( A<0);
	int n=0;
	float s=0;
	while(A>=s){
		n++;
		s+=(1.0/n);
	}
	cout <<"Ket qua la: "<< n;
	return 0;
}
