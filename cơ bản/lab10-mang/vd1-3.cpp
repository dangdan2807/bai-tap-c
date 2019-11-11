#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cout <<"Nhap so phan tu cua mang: ";
	do{
		cin >> n;
	}while(n<=0);
	cout << "nhap doan a va b: ";
	int a, b;
	cin >> a >> b;
	int mang[n], check;
	for(int i=0;i<n;)
	{
		do{
			cout << "mang[" << i << "]=";
			cin >> mang[i];
			check=mang[i];
			if(check<a || check>b)
				cout << a << " <= mang[" << i << "] <= " << b;
			else
				i++;
		}while(check>a && check<b);
	}
	cout <<"\nin mang theo chieu nguoc lai: \n";
	for(int j=n-1;j>=0;j--)
	{
		cout <<"mang["<<j<<"]="<< mang[j] << "\n";
	}
	return 0;
}
