#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n3, n1=0, n2=1, n, s=0;
	cout << "Nhap so phan tu cua day: ";
	do{
		cin >> n;
		if(n<2)
			cout <<"DK n>2, nhap lai: ";
	}while(n<2);
	int i;
	 for(i=2;i<n;++i)
	 {  
		 n3=n1+n2;  
		 n1=n2;  
		 n2=n3;
		 s+=n3;
	 }  
	cout << "Ket qua la: " << s;
	return 0;
}
