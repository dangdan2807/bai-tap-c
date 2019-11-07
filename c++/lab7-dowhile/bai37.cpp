#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, s1=1, s2=1;
	cout << "Nhap so phan tu N: ";
	cin >> n;
	int a=1;
	cin >>n;
	while(n<1)
	{
		cin >> n;
		if(n<=1)
		{
			cout <<"N phai la so duong, vui long nhap lai: ";
		}
	}
	while(a<=n)
	{
		if(a%2==1)
			s1=s1*a;
		else
			s2=s2*a;
		a+=1;
	}
	cout << "Ket qua la: \n";
	if(n%2==1)
		cout << "Tich cac so le s1= " << s1 << "\n";
	else
		cout << "Tich cac so chan s2= " << s2 << "\n";
	return 0;
}
