#include <iostream>
#include <stdio.h>
using namespace std;
void xuatmang(int a[], int n);
int main()
{
	int n=10;
	int mang[n];
	for(int i=0; i<n; i++)
	{
        mang[i]=i;
	}
	printf("Gia tri cua mang A la: \n");
	xuatmang(mang, n);
	int mang2[n];
	for(int i=0; i<n; i++)
	{
        mang2[i]=mang[i]+10;
	}
	printf("Gia tri cua mang A la: \n");
	xuatmang(mang2, n);
	return 0;
}
void xuatmang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
        printf("Mang[%d]= %d\n", i, a[i]);
	}
}