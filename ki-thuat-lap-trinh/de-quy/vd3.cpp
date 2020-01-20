#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

void xuatnhiphan(int n);

int main()
{
	int n;
	cout <<"Nhap so he 10: ";
	cin >>n;
	xuatnhiphan(n);
	return 0;
}

void xuatnhiphan(int n)
{
	int i= 0;
	long long binary_number = 0;
	while(n> 0)
	{
		binary_number += (n%2) * pow(10, i);
		i++;
		n/=2;
	}
	cout <<binary_number;
}
