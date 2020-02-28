// Problem: One.cpp
// Author : Nguyen Huu Tinh
// Date   : September 9, 2015
#include <stdio.h>
//#include <conio.h>

int one(int &x)
{
	x = x + 1;
	return(x);
}

int main()
{
	int i;
	int a[10];
	for(i = 0; i <= 9; i++)
	{
		a[i] = i;
		printf("a[%d] = %d  ", i, a[i]);
	}
	i=5;
	a[one(i)] = a[one(i)];
	for(i = 0; i <= 9; i++)
		printf("a[%d] = %d  ", i, a[i]);
	return 0;
}