#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int input(int a, int b, int c);
int main()
{
	int a, b, c;
	cin >>a>>b>>c;
	cout << a << "\t" << b << "\t" <<c << endl;
	input(a, b, c);
	return 0;
}
int input (int a, int b, int c)
{
	srand(time(NULL));
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	cout << a << "\t" << b << "\t" <<c;
	return a, b, c;
}