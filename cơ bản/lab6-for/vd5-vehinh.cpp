#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Chon hinh can ve: " << endl;
	cout << "1. Hinh chu nhat \n";
	cout << "2. Hinh hcn rong \n";
	cout << "3. Hinh tam giac vuong \n";
	cout << "4. Hinh tam giac vuong nguoc \n";
	cout << "5. Hinh tam giac deu \n";
	cout << "6. Hinh tam giac vuong rong \n";
	cout << "7. Hinh tam giac vuong nguoc rong\n";
	cout << "8. Hinh vuong \n";
	cout << "9. Hinh vuong rong \n";
	cout << "Nhap so cua hinh can ve: ";
	do{
	cin >> c;
	}while(c >9);
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
			cout <<"Ve hcn rong \n";
			cout << "Nhap chieu dai va chieu rong cac canh: ";
			cin >>a >> b;
			for(int i=1; i<=b; i++)
			{
				for(int j=1;j<=a;j++)
				{
					if(i==1 || j==1 || i==b || j==a)
						cout<<"* ";
					else
						cout <<"  ";
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
		case 6: cout <<"Ve hinh tam giac vuong rong\n";
			cout <<"Nhap chieu cao tam giac: ";
			cin >> a;
			for(int i=1; i<=a; i++)
			{
				for(int j=1; j<=i ;j++)
				{
					if(i==1 || j==1 || i==a || j==a || j==i)
						cout << "* ";
					else
						cout << "  ";
				}
						cout << endl;
			}break;
		case 7:
			cout <<"Ve tam giac vuong nguoc rong \n";
			cout <<"Nhap chieu cao tam giac: ";
			cin >> a;
			for(int i=1; i<=a; i++)
			{
				for(int j=a; j>=i ;j--)
				{
					if(i==1 || j==1 || i==a || j==a || j==i)
						cout << "* ";
					else
						cout << "  ";
				}
				cout << endl;
			}break;
		case 8:
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
		case 9: cout <<"Ve hinh vuong rong\n";
			cout << "Nhap chieu canh: ";
			cin >>a;
			for(int i=1; i<=a; i++)
			{
				for(int j=1;j<=a;j++)
				{
					if(i==1 || j==1 || i==a || j==a)
						cout<<"* ";
					else
						cout <<"  ";
				}
				cout << endl;
			}break;
	}
	
	return 0;
}
