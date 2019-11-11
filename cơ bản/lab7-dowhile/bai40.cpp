#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	int n, a=0;
	double s=0;
	cout << "Nhap so phan tu n: ";
	do
	{
		cin >> n;
		if(n<0)
			cout << "N>0, nhap lai: ";
	}while(n<0);
	/* de dap an n=5 trong thuc ra la n=4
		de n=5 co dap an nhu trong sach thi a<n tai vi tri while phia duoi => dap an n=1 se thanh n=2 va n=2 se thanh n=3....
	*/
	while(a<=n)
	{
		s=s+1.0*(pow((-1), a)/pow((2*a+1), 2));
		a+=1;
	}
	cout << "ket qua la: " << s;
	return 0;
}
