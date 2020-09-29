#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
float luythua(float x, int k);
double giaithua(int k);
float emux(float x, float e);
int main()
{
  float x, e;
  cout << "Nhap so x va sai so e: ";
  	cin >> x >> e;
  cout << "e^x = " << emux(x, e) << "\n";
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
float emux(float x, float e)
{
	float s=0.0;
	for(int n=1; n>=1; n++)
	{
		float a= luythua(x, n);
		float c= giaithua(n);
		s+=abs(a/c);
		if(abs(a/c))<e)
			return (float)s;
	}
}
