#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a=1, n;
	float x, s=0;
	printf("Nhap so thuc x: ");
	cin >> x;
	printf("Nhap so phan tu: ");
	do
	{
		scanf("%d", &n);
		if(n<0)
			printf("N>=0, nhap lai: ");
	}while(n<0);
	float giaithua=1.0;
	while(a<=n)
	{
		s+=((pow(x, a)/(giaithua*=a)));
		a+=1.0;
	}
	printf("\nx= %f", x);
	printf("\nket qua la: %f", s+1);
	return 0;
}
