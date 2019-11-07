#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	const string ID("test");
	const string PASSWORD("123");
	string id, password;
	#if 1
	do
	{
		system("cls");
		cout << "Nhap ID: ";
		getline(cin, id);
		cout << "Nhap password: ";
		getline(cin, password);
	}while( id != ID || password != PASSWORD);
	cout <<"Dang nhap hop le, chuyen den hop thu";
	#endif
	return 0;
}
