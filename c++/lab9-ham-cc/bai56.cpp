#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
float luythua(float x, int k);
double giaithua(int k);
float cos(float x, float e);
int main()
{
  float x, e;
  int k;
  cout << "Nhap so x, k va sai so e: ";
  	cin >> x >> k >> e;
  cout << "x^k = " << luythua(x, k) << "\n";
  cout << "k! = " << giaithua(k) << "\n";
  cout << "cosx = " << cos(x, e) << "\n";
  return 0;
}
float luythua(float x, int k)
{
	return pow(x, k);
}
double giaithua(int k)
{
	int gt=1;
	if(k==0)
		return 1;
	for(int i=1; i<=k; i++)
	{
		gt*=i;
	}
	return gt;
}
float cos(float x, float e)
{
	float s=0.0;
	for(int n=1; n>=1; n++)
	{
		float a= luythua(-1.0, n);
		float b= luythua(x, 2.0*n);
		float c= giaithua(2.0*n);
		s+=abs(a*(b/c));
		if(abs(a*(b/c))<e)
			return (float)s;
	}
}
