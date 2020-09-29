#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
	char s1[100], s2[100];
	printf("\nNhap chuoi ki tu s1: ");
	fflush(stdin);
	gets(s1);
	puts(s1);
	printf("\n");
	printf("Nhap chuoi ki tu s2: ");
	fflush(stdin);
	scanf("%s", s2);
	printf("Chuoi sau khi nhap: %s", s2);
	printf("\n");
	return 0;
}