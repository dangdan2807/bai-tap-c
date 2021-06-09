#include <stdio.h>
int main()
{
	float *f1, *f2;
	f1 = new float;
	f2 = new float;
	printf("Nhap so thuc thu nhat : ");	scanf ("%f", f1);
	do
	{
		printf("Nhap so thuc thu hai : ");	scanf ("%f", f2);
	}while (*f2 == 0);
	printf("Tong hai so thuc la : %.2f ", *f1 + *f2);
	printf("\nHieu hai so thuc la : %.2f ", *f1 - *f2);
	printf("\nTich hai so thuc la : %.2f ", *f1 * *f2);
	printf("\nThuong hai so thuc la : %.2f\n ", *f1 / *f2);
	return 0;	
}