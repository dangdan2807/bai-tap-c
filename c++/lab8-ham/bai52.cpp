#include <iostream>
#include <stdio.h>
using namespace std;
void inMinMax(int n);
int main()
{
	int n;
	cout <<"Nhập số nguyên không âm: ";
	do{
		cin >> n;
	}while(n<0);
	cout << n << endl;
	inMinMax(n);
	return 0;
}
void inMinMax(int n)
{
	int digit;
	int min, max;
	min=max=n%10;
	while(n>0)
	{
		digit=n%10;
		n/=10;
		if(min > digit)
			min =digit;
		if(max < digit)
			max=digit;
	}
	cout <<"min là: " << min << endl;
	cout <<"max là: "<< max << endl;
}
