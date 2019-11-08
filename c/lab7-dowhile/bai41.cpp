#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, a=1;
	float s=1;
	printf("Nhap so phan tu: ");
	do
	{
		scanf("%d", &n);
		if(n<=0)
			printf("N>0, nhap lai: ");
	}while(n<=0);
	while(a<=n)
	{
		s*=(2.0*a-1)/(2.0*a);
		a+=1;
	}
	printf("ket qua la: %f", s);
	return 0;
}
