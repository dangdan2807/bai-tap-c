#include <iostream>
#include <stdio.h>
using namespace std;
int input();
int factorial(int n);
int main()
{
	int k;
	input();
	return 0;
}
int input()
{	
	int c=0;
	printf("Nhap so: ");
	do{
		scanf("%d", &c);
	}while(c<0);
	factorial(c);
	return c;
}
int factorial(int n)
{
	int p=1;
	for(int i=1; i<=n; i++)
		p*=i;
	printf("%d", p);
	return p;
}
