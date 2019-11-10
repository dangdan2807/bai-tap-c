#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a=10, b=5;
	int *ptr1, *ptr2;
	ptr1= &a;
	ptr2= &b;
	cout <<"truoc khi trao doi\n";
	cout <<"a= " << a;
	cout <<"\nb= " << b;
	*ptr1 += *ptr2;
	*ptr2= *ptr1- *ptr2;
	*ptr1 -= *ptr2;
	cout <<"\nsau khi trao doi bang con tro:\n";
	cout <<"a= " << a;
	cout <<"\nb= " << b;
	return 0;
}
