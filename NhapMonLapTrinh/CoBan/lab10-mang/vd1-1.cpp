#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	cout << "so luong phan tu cua mang n= " ;
	int n, k;
	do{
	cin >>n;
	}while(n<=0);
	int mang[n];
	for(int i=0; i<n;i++)
	{
		mang[i]=i+1;
		printf("a[%d]=", i);
		cin >> mang[i];
		cout << "\n";
	}
	cout << "so phan tu can in tren 1 dong? ";
	cin >> k;
	cout << "\ncac phan tu cua day:\n";
	for (int i=0; i<n; i++)
	{
		cout << mang[i] << "\t";
		if((i+1)%k==0)
			cout <<"\n";
	}
	return 0;
}
