#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void TaoMang (int *&a, int &n)
{
	int i;
	printf("Nhap so phan tu : ");
	scanf ("%d", &n);
	a= new int [n];
	srand (time(NULL));
	for (i=0; i<n; i++)
		*(a+i)= -100 + rand()%201; //[a,b] , a + rand()%(b-a+1);	
}

void XuatMang (int *a, int n)
{
	for (int i=0; i<n; i++)
		printf("%6d", *(a+i));
	printf("\n");	
	
}

int Dem46 (int *a, int n)
{
	int d =0;
	for (int i=0; i<n; i++)
		if ((*(a+i)%4 == 0) && (*(a+i)%10 == 6))
			d++;
	return d;			 
}

void repOdd2(int *&a , int n)
{	for (int i=0;i<n;i++)
		if ( *(a+i) % 2 !=0)
			(*(a+i)) *= 2 ;
}

int main()
{	int *a, n;
	TaoMang(a,n);
	XuatMang(a,n);
	printf("\nDem = %d \n", Dem46(a,n));
	repOdd2(a,n);
	XuatMang(a,n);	
	return 0;

}
