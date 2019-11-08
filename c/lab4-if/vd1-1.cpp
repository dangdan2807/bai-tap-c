//Nhap a va b => b co phai uoc cua a
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, b;
	printf("Nhap a va b: ");
	scanf("%d%d", &a, &b);
	if(a%b==0)
		printf("b la uoc so cua a");
	else
		printf("b khong phai la uoc so cua a");
	return 0;
}
