#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

long long doihe(int);

int main()
{
	int n;
	cout <<"Nhap n (he 2): ";
	cin >> n;
	cout <<"He 10 cua " <<n <<" la: " << doihe(n) << endl;  
	return 0;
}

long long doihe(int he2)
{
	int i= 0;
	long long he10= 0;
	while(he2>0)
	{
		he10 += (he2%10) * pow(2, i);
		i++;
		he2/=10;
	}
	return he10;
}
