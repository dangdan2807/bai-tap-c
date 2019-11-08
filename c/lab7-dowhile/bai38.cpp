#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int n, s=0, a=0;
	printf("Nhap so phan tu n: ") ;
	do
	{
		scanf("%d", &n);
		if(n<=0)
			printf("N>0, nhap lai: ");
	}while(n<=0);
	while(a<n)
	{
		s=s+pow((2*a+1), 2);
		a+=1;
	}
	printf("ket qua la: %d", s);
	return 0;
}
