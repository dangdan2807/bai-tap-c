#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int chon, a, b, c;
	float s, Area=0, r;
	cout <<"1. Hinh tam giac\n";
	cout <<"2. Hinh chu nhat\n";
	cout <<"3. Hinh tron\n";
	cout <<"4. Thoat\n";
	cout <<"Hay bam so de chon hinh can tinh hoac bam 4 de ket thuc: ";
	cin >> chon;
	switch(chon)
	{
		case 1: cout <<"Tinh hinh tam giac\n";
			cout <<"a= ";
			cin >>a;
			cout <<"b= ";
			cin >>b;
			cout <<"c= ";
			cin >>c;
			s=(a+b+c)/3;
			Area=sqrt(s*(s-a)*(s-b)*(s-c));
			if(a+b>c && b+c>a && c+a>b)
				cout<< "Dien tich: " << Area;
			else 
				cout << "3 so khong phai la 3 canh cua tam giac";break;
		case 2: cout <<"a= ";
			cin >>a;
			cout << "b= ";
			cin >>b;
			s=a*b;
			cout<<"Dien tich: " << s;
		break;
		case 3: cout << "R= ";
			cin >>r;
			s=3.14*r*r;
			cout << "Dient tich: ";
		break;
		case 4: break;
	}
	return 0;
}
