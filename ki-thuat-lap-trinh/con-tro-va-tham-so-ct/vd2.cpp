// Problem: Haizzz.cpp
// Author : Nguyen Huu Tinh
// Date   : September 9, 2015

#include <stdio.h>
//#include <conio.h>
void hayza(int &x, int &y)
{
	int t;
	t = x;
	y = y + 1;
	if(t != x) printf("\nHa^y za ....!");
}

int main()
{
	int i;
	int a[2];
	i = 0;
	a[0] = 0;
	a[1] = 1;
	hayza(i, i);
	hayza(a[i], a[i]);
	printf("\ni = %d  a[0] = %d  a[1] = %d", i, a[0], a[1]);
	return 0;
}
