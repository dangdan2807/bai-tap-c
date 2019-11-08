#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	float s3=1, s4;
	printf("Nhap so n: ");
	scanf("%d", &n);
	int a=1;
	while(a<=n)
	{
		s3=s3*(2.0*a-1)/(2.0*a);
		s4=s4+a*(a+1.0)*(a+2);
		a+=1;
	}
	printf("ket qua la: \n");
	printf("s3= %f\n", s3);
	printf("s4= %f\n", s4);
	return 0;
}