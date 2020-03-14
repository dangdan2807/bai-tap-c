#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

typedef struct ps
{
	int tuso;
	int mauso;
}PS;
void input(PS &phanso);
void output(PS phanso);
int ucln(int a, int b);
void toigian(PS &phanso);


int main()
{
	PS p;
	printf("\tNhap phan so:");
	input(p);
	printf("\nPhan so vua nhap: ");
	output(p);
	toigian(p);
	printf("\nPhan so sau khi toi gian: ");
	output(p);
    return 0;      
}


void input(PS &phanso)
{
	cout <<"\nNhap tu so: ";
	cin >>phanso.tuso;
	cout <<"Nhap mau so: ";
	cin >>phanso.mauso;
}

void output(PS phanso)
{
	if(phanso.mauso == 1)
		cout <<phanso.tuso;
	else if(phanso.mauso < 0)
	{
		phanso.mauso *= -1;
		phanso.tuso *= -1;
		output(phanso);
	}
	else
		cout <<phanso.tuso <<"\\" <<phanso.mauso;
}

int ucln(int a, int b)
{
    int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void toigian(PS &phanso)
{
	float uc = ucln(phanso.tuso, phanso.mauso);
	phanso.tuso /= uc;
	phanso.mauso /= uc;
}