#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so nguyen thu N: ";
	do{
		cin >> n;
		if(n<0)
			cout << "Dk n>1, nhap lai: ";
	}while(n<0);
	int s=0, a=1;
	#if 0
	while(a<=n)
	{
		if(a%2==1)
			s+=a;
		a+=1;
	}
	#else
	for(int i=1; i<=n; i++)
	{
		if(i%2==1)
			s+=i;
	}
	#endif
	cout <<"Ket qua la: " << s;
	return 0;
}
