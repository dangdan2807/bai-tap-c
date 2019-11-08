#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	char ID[] = "test";
	char PASSWORD[] = "123";
	char id[100], password[100];
	do
	{
		printf("Nhap ID: ");
		gets(id);
		printf("Nhap password: ");
		gets(password);
		if( id != ID || password != PASSWORD)
			printf("ID hoac password sai, nhap lai.\n");
	}while( id != ID || password != PASSWORD);
	printf("Dang nhap hop le, chuyen den hop thu");
	return 0;
}
