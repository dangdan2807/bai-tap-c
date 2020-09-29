#include <stdio.h>
#include <iostream>
using namespace std;
#include <math.h>

long long doihe (int x)
{
	long long he2= 0;
	int i = 0;
	while(x>0)
	{
		he2 += (x%2)*pow(10, i);
		i++;
		x/= 2;
	}
	return he2;
}

int main () 
{
	int n;
	cout <<"Nhap so n (he 10): ";
	cin >> n;
	cout <<"So " << n <<" chuyen sang he 2 la: " << doihe(n);
	return 0;
}
