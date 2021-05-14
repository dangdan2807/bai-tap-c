#include <stdio.h>

int main()
{
	int x = 10;
	int *xTro = &x;
	printf("\n1. Dia chi cua bien x la: %p", &x);
	printf("\n2. Dia chi của bien xTro la: %p", &xTro);
	printf("\n3. Noi dung cua bien x la: %d", x);
	printf("\n4. Noi dung cua bien xTro la: %p", xTro);
	printf("\n5. Gia tri ma xTro tro den: %d", *xTro);
	*xTro = 50;
	printf("\n6. Giá tri x la %d", x);
	return 0;
}
