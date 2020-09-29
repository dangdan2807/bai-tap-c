#include <stdio.h>
//#include <conio.h>

void val (int a);
void var(int &a);

int main()
{
	int x = 2, y = 2;
	printf("\n Gia tri ban dau: x = %d va y = %d", x, y);
	val(x); 
	var(y);
	printf("\n Gia tri sau khi goi ham lan 1: x = %d va y = %d", x, y);
	return 0;
}

void val(int a)
{
	a = a + 1;
}

void var(int &a)
{
	a = a + 1;
}  