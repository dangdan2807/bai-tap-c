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
	int n=2;
	float s=1;
	while(s<A)
	//do
	{
		s+=(1.0/n);
		n++;
		cout << A << " | " << s << " | "<< n << "\n";
	}//while(A>s);
	cout <<"Ket qua la: "<< n;
	return 0;
}
