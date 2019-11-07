#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	short a, b, c, d;
	a=30000;
	b=30000;
	c=a+b;
	d=c/2;
	printf("\na= %d", a);
	printf("\nb= %d", b);
	printf("\nc= %d", c);
	printf("\nd= %d", d);
	printf("\nsua loi \n") ;
	printf("\nGia tri a= %d", a);
	printf("\nGia tri b= %d", b);
	printf("\nTong cua a va b la c= %d", c);
	printf("\nTrung binh cong cua a va b la d= %d", d);
	// giai thich: vi khi in nhu tren se lam nguoi doc ko hieu dc t dang lam gi vaf gia tri a, b, c ,d dung lam gi vi vay con them text de nguoi doc co the hieu dc
	return 0;
}
