#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	printf("Nhap so nguyen thu N: ");
	do{
		scanf("%d", &n);
		if(n<0)
			printf("Dk n>1, nhap lai: ");
	}while(n<0);
	int s=0, a=1;
	#if 0 // neu thay bang 1 thi se su dung don tu #if den #else con neu 0 thi se chay doan code tu #else den #endif
	while(a<=n)
	{
		if(a%2==1)
			s+=a;
		a+=1;
	}
	#else
	for(int i=1; i<=n; i++)
	{
		if(i%2==1)
			s+=i;
	}
	#endif
	printf("Ket qua la: %d", s);
	return 0;
}
