#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char ch;
	cout <<"Nhap ki tu ch: ";
	//cin >> ch;
	scanf("%c", &ch);
	if(ch>='a' && ch<='z')
		cout << "ch la ki tu thuong";
	else if(ch >='A' && ch<='Z')
		cout << "ch la ki tu hoa";
	else if(ch>='0' && ch<='9')
		cout << "ch la chu so";
	else 
		cout << "ki tu khong xac dinh";
	return 0;
}
