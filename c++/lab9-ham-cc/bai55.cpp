#include <iostream>
#include <stdio.h>
using namespace std;
float mix(float a, float b);
float max(float a, float b);
int main()
{
  float a, b,c, d;
  cout<< "Nhap 2 so nguyen a va b: ";
  do
  {
  	cin >> a >> b;
  	if(a<=0 || b<=0)
  		cout << "a va b <= 0\n";
  	else if(a==b)
  		cout << "a phai khac b\n";
  }while(a<=0 || b<=0 || a==b);
  c=max(a,b);
  d=min(a, b);
  cout << "gia tri max la: " << c << "\n";
  cout << "gia tri min la: "<< d << "\n";
  return 0;
}
float max (float a, float b)
{
	if(a>b)
		return a;
	else
		return b;
}
float min(float a, float b)
{
	if(a<b)
		return a;
	else
		return b;
}
