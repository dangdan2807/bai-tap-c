#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, b, c;
	float s, Area;
	cout << "Nhap 3 canh a, b, c: ";
	cin >> a >> b >> c;
	if(a+b>c && b+c>a && c+a>b)
	{
		if(a*a+b*b==c*c && b*b+c*c==a*a && c*c+a*a==b*b)
			cout<<"Day la tam giac vuong";
		else if(a==b && b==c && a==c)
			cout <<"Day la tam giac deu";
		else if(a==b || b==c || c==a)
		{
			if(a*a+b*b==c*c && b*b+c*c==a*a && c*c+a*a==b*b)
				cout<<"Day la tam giac vuong can";
			else
				cout <<"Day la tam giac can";
		}
		else
			cout << "Day la tam giac thuong";
		cout<< "\nDien tich tam giac abc la: ";
		s=(a+b+c)/3;
		Area=sqrt(s*(s-a)*(s-b)*(s-c));
		cout << Area;
	}else
		cout <<"khong ton tai tam giac canh abc";
	return 0;
}
