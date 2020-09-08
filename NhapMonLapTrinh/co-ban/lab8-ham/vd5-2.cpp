#include <iostream>
#include <stdio.h>
using namespace std;
int sumdigits (int k);
int main()
{
	int n, s=0;
	cout << "Nhập số n: ";
	do{
		cin >> n;
		cout << n << "\n";
		if(n>=0)
		{
			s=sumdigits(n);
			printf("kết quả là: %d", s);
		}
	}while(n<=0);
	return 0;
}
int sumdigits(int k)
{
	int sum=0;
	do
	{
		sum+=k%10;
		k/=10;
	}while(k>0);
	return sum;
}