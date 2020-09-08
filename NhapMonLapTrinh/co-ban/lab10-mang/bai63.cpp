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
	cout << "Gia tri cua mang 1 la: \n";
	xuatmang(mang, n);
	int mang2[n];
	for(int i=0; i<n; i++)
	{
        mang2[i]=mang[i]+10;
	}
	cout << "Gia tri cua mang 2 la: \n";
	xuatmang(mang2, n);
	return 0;
}
void xuatmang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
        cout << "Mang["<< i << "]= " <<a[i] << endl;
	}
}
