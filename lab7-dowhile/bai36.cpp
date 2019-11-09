#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	float s3=1, s4;
	cout <<"Nhap so n: ";
	cin >> n;
	int a=1;
	while(a<=n)
	{
		s3=s3*(2.0*a-1)/(2.0*a);
		s4=s4+a*(a+1.0)*(a+2);
		a+=1;
	}
	cout << "ket qua la: \n";
	cout << "s3= " << s3 << "\n";
	cout << "s4= " << s4;
	return 0;
}
