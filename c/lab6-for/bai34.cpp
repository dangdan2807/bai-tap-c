#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	printf("Nhap so phan tu cua tbc: ");
	scanf("%d", &n);
	int mang[n], tong=0, dem=0;
	float tbc=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d", &mang[i]);
		tong=tong+mang[i];
		dem++;
	}
	tbc=tong/dem;
	printf("tbc la: %f", tbc);
	return 0;
}