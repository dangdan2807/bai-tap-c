#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

long long doihe(int);

int main()
{
	int n;
	cout <<"Nhap n (he 10): ";
	cin >> n;
	cout <<"He 2 cua " <<n <<" la: " << doihe(n) << endl;  
	return 0;
}

long long doihe(int x)
{
	int i= 0;
	long long he2= 0;
	while(x>0)
	{
		if(x%2 == 0)
			he2 += 0;
		else if(x%2 == 1)
			he2 += 1 * pow(10, i);
		i++;
		x/=2;
	}
	return he2;
}