#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void xuatmang(int a[], int n);
void sapxep(int a[], int n);
int main()
{
	int mang[50];
	int n=50;
	/*do{
		cout <<"Nhap so phan tu cua mang: ";
		cin >> n;
	}while(n<0 && n>100);
	*/srand(time(NULL));
	for (int i = 0; i < 50; ++i)
	{
		mang[i]=rand()%99;
		
	}
	sapxep(mang, n);
	xuatmang(mang, 50);
	return 0;
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("mang[%d]= %d\n",i, a[i]);
	}
}
void sapxep(int a[], int n)
{
	int temp;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				a[i]=temp;
				a[i]=a[j];
				a[j]=a[i];
			}
		}
	}
}