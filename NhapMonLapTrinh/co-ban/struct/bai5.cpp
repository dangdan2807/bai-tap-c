#include <iostream>
#include <stdio.h>
using namespace std;

struct sinhvien
{
	char name[40];
	int mssv;
	int diemthi;
};

int main()
{
	int size;
	sinhvien sv;
	size =sizeof(sv);
	cout <<"Kich thuoc cua struct sinhvien la: " <<size <<endl;
	return 0;
}
