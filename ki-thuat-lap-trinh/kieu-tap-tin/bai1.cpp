#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>
using namespace std;

void read_file(float A[], int &n, ifstream &filein);
void export_array(float A[], int n);
float sum(float A[], int n);

int main()
{
	ifstream filein;
	filein.open("//sdcard//code//bai-tap-c//ki-thuat-lap-trinh//kieu-tap-tin//input//bai1.txt", ios_base::in);
	float array[50];
	int n;
	read_file(array, n, filein);
	export_array(array, n);
	cout <<"\nTong binh phuong cua cac so la: " <<sum(array, n);
	filein.close();
	return 0;
}

void read_file(float A[], int &n, ifstream &filein)
{
	if(filein.fail() == true)
	{
		cout <<"File khong ton tai!";
		exit(0);
	}
	n = 0;
	while( filein.eof() == false)
	{
		filein >> A[n];
		n++;
	}
}

void export_array(float A[], int n)
{
	for(int i = 0; i < n; i++)
		cout <<"\nA[" <<i <<"] = " << A[i];
}

float sum(float A[], int n)
{
	float sum = 0;
	for(int i = 0; i < n; i++)
		sum += pow(A[i], 2);
	return sum;
}