#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n3, n1=1, n2=1, n, s=0;
	cout << "Nhap so phan tu cua day: ";
	do{
		cin >> n;
		if(n<0)
			cout <<"DK n>0, nhap lai: ";
	}while(n<0);
	int i=1;
	while(i<=n){
		if(i==1 || i==2)
			s+=1;
		else
		{
			n3=n1+n2;
			n1=n2;
			n2=n3;
			s+=n3;
		}
		i++;
	}
	cout << "Ket qua la: " << s;
	return 0;
}