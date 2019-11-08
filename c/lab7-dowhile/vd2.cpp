#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n, tong=0;
	do
	{
		printf("Nhap so tien cua hoa don: ");
		scanf("%d",&n);
		if(n>0){
			tong+=n;
		}
	}while(n>0);
	printf("Tong hoa don la: %d", tong);
	return 0;
}
