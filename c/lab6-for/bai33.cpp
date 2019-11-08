#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, dem=0;
	printf("Nhap so n: ");
	scanf("%d", &n);
	printf("cac dang so ab de a+b=n: \n");
	for(int a=0;a<=9;a++)
		for(int b=0; b<=9; b++)
			if(a+b==n)
				printf("%d\t", a*10+b);
	return 0;
}