#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;
int main()
{
	int a, n;
	srand(time(NULL));
	//a=rand()%100+1;
	//random_device rd;
	//mt19937 rng(rd());
	//uniform_int_distribution<int> rd1(1, 1000);
	//a=rd()%100+1;
	//cout << a << endl;
	//cout << rd1 << endl!
	cout << "nhap so phan tu cua mang: ";
	do{
		cin >>n;
	}while(n<=0);
	int mang[n];
	for(int i=0;i<n; i++)
	{
		a=rand()%100+1;
		mang[i]=a;
		cout << mang[i]<< " ";
	}
	return 0;
}
