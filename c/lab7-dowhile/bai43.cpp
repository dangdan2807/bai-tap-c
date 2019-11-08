#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, k;
	printf("Nhap so nguyen duong n va k (k<=n): ");
	do
	{
		scanf("%d%d", &n, &k);
		if(k<=0 || n<= 0)
			printf("n va k >=0, nhap lai: ");
		if(k>n)
			printf("DK k<=n, nhap lai: ");
	}while((k<=0 || n<=0)|| (k>n));
	float c=0;
	int a=1, b=1, gt=1, dem=1, d=1;
	while(dem<=n)
	{
		if(dem<=n)
			a*=gt;
		if(dem<=k)
			b*=gt;
		if(dem<=(n-k))
			d*=gt;
		gt++;
		dem++;
	}
	c=(a/(b*d));
	printf("ket qua la: %f", c);
	return 0;
}
