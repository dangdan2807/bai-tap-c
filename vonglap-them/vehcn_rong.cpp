#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a;
	cout <<"Ve tam giac vuong rong: \n";
	cout <<"Nhap chieu cao tam giac: ";
	cin >> a;
	for(int i=1; i<=a; i++)
	{
		for(int j=1; j<=i ;j++)
		{
			if(i==1 || j==1 || i==a || j==a || j==i)
				cout << "* ";
			else
				cout << "  ";
		}
				cout << endl;
	}
	return 0;
}
