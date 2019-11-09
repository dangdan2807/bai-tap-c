#include <iostream>
#include <stdio.h>
using namespace std;
void input();
void output(int x, int y);
int ucln(int x, int y);
void toigian(int a, int b, int c);
int main()
{
	input();
	return 0;
}
void input()
{
	int x, y, c;
	cout << "Nhập 2 số a và b: ";
	do{
	cin >> x >> y;
	if(y<0)
		cout << "b>0, nhập lại";
	}while(y<0);
	if(x==0){
		cout << "0";
	}
	output(x, y);
	cout <<"ucln của " << x <<" và " << y << " là: ";
	c=ucln(x, y);
	cout << c <<"\n";
	toigian(x, y, c);
}
void output(int a, int b)
{
	cout << a << "/" << b << "\n";
}
int ucln(int x, int y)
{
	while(x!= y)
	{
		if(x>y)
			 x-=y;
		else if(x<y)
			y-=x;
	}
	return x;
}
void toigian(int a, int b, int c)
{
	cout <<"Phân số đơn giản là: ";
	a/=c;
	b/=c;
	output(a, b);
}