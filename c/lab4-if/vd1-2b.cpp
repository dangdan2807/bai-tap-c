#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char ch;
	printf("Nhap ki tu ch: ");
	scanf("%c", &ch);
	if(ch>='a' && ch<='z')
		printf("ch la ki tu thuong");
	else if(ch >='A' && ch<='Z')
		printf("ch la ki tu hoa");
	else if(ch>='0' && ch<='9')
		printf("ch la chu so");
	else 
		printf("ki tu khong xac dinh");
	return 0;
}
