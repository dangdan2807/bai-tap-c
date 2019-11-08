#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, s1=1, s2=1;
	printf( "Nhap so phan tu N: ");
	int a=1;
	do
	{
		scanf("%d",&n);
		if(n<=1)
		{
			printf("N phai la so duong, vui long nhap lai: ");
		}
	}while(n<1);
	while(a<=n)
	{
		if(a%2==1)
			s1=s1*a;
		else
			s2=s2*a;
		a+=1;
	}
	printf("Ket qua la: \n");
	if(n%2==1)
		printf("Tich cac so le s1= %d\n", s1);
	else
		printf("Tich cac so le s2= %d\n", s2);
	return 0;
}