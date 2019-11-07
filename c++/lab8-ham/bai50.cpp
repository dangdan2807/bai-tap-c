#include <iostream>
#include <stdio.h>
using namespace std;
int fibo(int n);
int main()
{
	cout << "Dãy Fibonacci\n";
	int n, a;
	cout <<"Nhập số phần tử: ";
	do{
		cin >> n;
	}while(n<1);
	cout << n << endl;
	a=fibo(n);
	cout << "số hạng thứ "<< n << " của dãy Fibonacci là: "<< a ;
	return 0;
}
int fibo(int n)
{
	int t1=1, t2=1, f=1;
	for(int i=3; i<=n; i+=1)
	{
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	return f;
}
