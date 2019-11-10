#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Chon hinh can ve: " << endl;
	cout << "1. Hinh chu nhat \n";
	cout << "2. Hinh vuong \n";
	cout << "3. Hinh tam giac vuong \n";
	cout << "4. Hinh tam giac vuong nguoc \n";
	cout << "5. Hinh tam giac deu \n";
	cout << "Nhap so cua hinh can ve: ";
	do{
	cin >> c;
	}while(c >5);
	cout << endl;
	switch(c)
	{
		case 1:
			cout << "Ve hinh chu nhat: \n";
			cout << "Nhap chieu dai va chieu rong  canh: ";
			cin >>a >> b;
			for(int i=1; i<=a; i++)
			{
				for(int j=1; j<=b; j++)
				{
					cout << "* ";
				}
				cout << endl;
			}
			break;
		case 2:
			cout << "Ve hinh vuong: \n";
			cout << "Nhap chieu dai canh: ";
			cin >>a;
			for(int i=1; i<=a; i++)
			{
				for(int j=1; j<=a; j++)
				{
					cout << "* ";
				}
				cout << endl;
			}break;
		case 3:
			cout <<"Ve tam giac vuong: \n";
			cout <<"Nhap chieu cao tam giac: ";
			cin >> a;
			for(int i=1; i<=a; i++)
			{
				for(int j=1; j<=i ;j++)
				{
					cout << "* ";
				}
				cout << endl;
			}break;
		case 4:
			cout <<"Ve tam giac vuong nguoc \n";
			cout <<"Nhap chieu cao tam giac: ";
			cin >> a;
			for(int i=1; i<=a; i++)
			{
				for(int j=a; j>=i ;j--)
				{
					cout << "* ";
				}
				cout << endl;
			}break;
		case 5:
			cout <<"Ve tam giac deu\n";
			cout <<"Nhap chieu cao tam giac: ";
			cin >> a;
			for(int i=1;i<=a;i++)
			{
				for(int j=1; j<=a-i;j++)
				{
					cout <<" ";
				}
				for(int k=1; k<=i; k++)
				{
					cout << "* ";
				}
				cout << endl;
			}break;
	}
	
	return 0;
}
