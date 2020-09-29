#include <iostream>
#include <stdio.h>
using namespace std;

class GiaiThua
{
	int n, gt=1;
public:
	GiaiThua(int nhap)
	{
		n=nhap;
	}
	
	double calculate()
	{
		for(int i=1; i<=n; i++){
			gt*=i;
		}
		return gt;
	}
};
int main()
{
	int a;
	cout <<"Nhap so giai thua: ";
	cin >>a;
	GiaiThua b(a);
	GiaiThua copy =b;
	cout <<"\n\tClass b: \t" <<a <<"! = " <<b.calculate();
	cout <<"\n\tClass copy: \t" <<a <<"! = " <<copy.calculate();
	return 0;
}