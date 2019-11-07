#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, b=1;
			printf("Ve tam giac can\n");
			printf("Nhap chieu cao tam giac: ");
			scanf("%d", &a);
			for(int i=1;i<=a;i++)
			{
				for(int j=1; j<=a-i;j++)
				{
					printf(" ");
				}
				for(int k=1; k<=b; k++)
				{
					printf( "*");
				}
				printf("\n");
				b+=2;
			}
	return 0;
}
