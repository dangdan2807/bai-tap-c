#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int a=999, b=9999, d1, d2, d3;
	char e='a';
	unsigned int c, d;
	unsigned char e1='a';
	c=a;
	d2=pow(e, b);
	d3=pow(e1, b);
	d1=pow(a, b);
	d=pow(c, b);
	cout <<"Kieu int co gioi han tu " << -d1 << " den " << d1 << endl << endl;
	cout <<"Kieu unsigned int co gioi han tu " << -d << " den " << d << endl << endl;
	cout <<"Kieu char co gioi han tu " << -d2 << " den " << d2 << endl << endl;
	cout <<"Kieu unsigned char co gioi han tu " << -d3 << " den " << d3 << endl;
	return 0;
}
