#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float A;
	printf("Nhap so thuc A (0<A<2): ");
	do{
		scanf("%f", &A);
		if(A<0)
			printf("DK 0<A<2, nhap lai: ");
	}while( A<0);
	int n=0;
	float s=0;
	while(A>=s){
		n++;
		s+=(1.0/n);
	}
	printf("Ket qua la: %d", n);
	return 0;
}
