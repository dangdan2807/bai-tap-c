#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n=10;
	int mang[n];
	for(int i=0; i<n; i++)
	{
        mang[i]=i;
	}
	for(int i=0; i<n; i++)
	{
        cout <<"Mang[" << i << "]= " << mang[i] << endl;
	}
	return 0;
}
