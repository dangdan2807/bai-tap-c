#include <iostream>
#include <stdio.h>
using namespace std;

int gtln(int a, int b);
int gtnn(int a, int b);
int main()
{
	int a, b, d, m;
	cout <<"Nhập 2 số nguyên dương a và b: ";
	do{
		cin >> a >> b;
	}while(a<=0 || b<=0);
	cout << a << " " << b << endl;
	d= gtln(a, b);
	m= gtnn(a, b);
	cout << "Uớc chung lớn nhất là: "<< d << endl;
	cout << "Bội chung nhỏ nhất là: "<< m << endl;
	return 0;
}
int gtln(int a, int b)
{
	while(a!= b)
	{
		if(a>b)
			 a-=b;
		else if(a<b)
			b-=a;
	}
	return a;
}
int gtnn(int a, int b)
{
	return a*b/ gtln(a, b);
}