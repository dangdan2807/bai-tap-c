#include <iostream>
#include <stdio.h>
using namespace std;
int fibonaci(int a);
int main()
{
	int n;
	cout <<"nhap n: ";
	do{
		cin >>n;
		if(n<0)
			cout <<"n>0, nhap lai: ";
	}while(n<0);
	for(int i=0; i<=n; i++)
		cout << fibonaci(i) <<"\t";
	return 0;
}
int fibonaci(int a)
{
	if(a==0)
		return 0;
	if(a==1)
		return 1;
	return fibonaci(a-1)+ fibonaci(a-2);
}