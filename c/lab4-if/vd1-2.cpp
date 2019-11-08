#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, A, B;
	printf("Nhap a, A va B: ");
	scanf("%d%d%d", &a, &A, &B);
	if(a>=A && a<=B)
		printf("a thuoc doan A va B ");
	else
		printf("a khong thuoc doan A va B ");
	return 0;
}
