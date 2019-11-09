#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;
void xuatmang(int a[], int n);
void sapxep(int a[], int n);
int main()
{
	int n;
	cout <<"Nhap so phan tu cua mang: ";
	do{
		cin >> n;
		if(n<0 || n>100)
			cout << "\n 0<= n < 100, nhap lai: ";
	}while(n<0 || n>100);
	//srand(time(NULL));
	int mang[n];
	for (int i = 0; i<n; ++i)
	{
		cout <<"mang[" << i << "]= ";
		//mang[i]=rand()%99;
		cin >> mang[i];
	}
	sapxep(mang, n);
	xuatmang(mang, n);
	return 0;
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "mang[" << i << "]= " << a[i] << endl;
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
