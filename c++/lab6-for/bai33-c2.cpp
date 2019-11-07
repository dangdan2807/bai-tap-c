#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, a, b;
	cout <<"Nhap so n: ";
	cin >> n;
	cout << "cac dang so ab de a+b=n: \n";
	for(a=0;(n-a)>=0 && (n-a) <=9 ;a++)
	{
		b=n-a;
		if(a+b==n)
			cout << a<<b << "\t";	
	}
	return 0;
}
