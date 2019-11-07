#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int intprime (int n);
int main()
{
	int n, a;
	cout <<"Nhập số nguyên dương n (n>=2): ";
	do{
		cin >> n;
		cout << n << "\n";
		if(n<=2)
			cout << "n>=2\n";
	}while(n<2);
	cout << "Các số nguyên tố là: ";
	for(int i=2; i<=n; i+=1)
	{
		a=intprime(i);
		if(a==1)
			cout << i << " ";
	}
	return 0;
}
int intprime (int n)
{
	float m= sqrt(n);
	int i;
    for( i=2; i<=m; i+=1)
	{
		if(n%i==0) 
			return 0;
	}
	return 1;
}
    
    
