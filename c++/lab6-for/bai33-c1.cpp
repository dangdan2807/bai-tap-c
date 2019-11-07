#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, dem=0;
	cout <<"Nhap so n: ";
	cin >> n;
	cout << "cac dang so ab de a+b=n: \n";
	for(int a=0;a<=9;a++)
		for(int b=0; b<=9; b++)
			if(a+b==n)
				cout << a*10+b << "\t";
	return 0;
}
