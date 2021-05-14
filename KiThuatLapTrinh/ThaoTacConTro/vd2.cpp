#include <stdio.h>

int main()
{
	int a[10], *pa, x;
	a[0] = 11;
	a[1] = 22;
	a[2] = 33;
	a[3] = 44;
	printf("a[0] = %d \t a[1] = %d \t a[2] = %d \t a[3] = %d", a[0], a[1], a[2], a[3]);
	pa = &a[0];
	x = *pa;
	printf("\nx = *pa = %d", x);
	pa++;
	x = *pa;
	printf("\nx = *pa = %d", x);
	x = *pa + 1;
	printf("\nx = *pa + 1 = %d", x);
	x = *(pa + 1);
	printf("\nx = *(pa + 1) = %d", x);
	x = *++pa;
	printf("\nx = *++pa = %d", x);
	x = ++*pa;
	printf("\nx = ++*pa = %d", x);
	x = *pa++;
	printf("\nx = *pa++ = %d", x);
	return 0;
}