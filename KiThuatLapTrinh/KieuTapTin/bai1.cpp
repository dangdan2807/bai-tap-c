#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>
using namespace std;

void readFile(float A[], int &n, ifstream &fileInput);
void exportArray(float A[], int n);
float sum(float A[], int n);

int main()
{
	ifstream fileInput;
	const char *pathInput = "KieuTapTin/input/bai1.txt";
	fileInput.open(pathInput, ios_base::in);
	float array[50];
	int n;
	readFile(array, n, fileInput);
	exportArray(array, n);
	cout << "\nTong binh phuong cua cac so la: " << sum(array, n);
	fileInput.close();
	return 0;
}

void readFile(float A[], int &n, ifstream &fileInput)
{
	if (fileInput.fail() == true)
	{
		cout << "File khong ton tai!";
		exit(0);
	}
	n = 0;
	while (fileInput.eof() == false)
	{
		fileInput >> A[n];
		n++;
	}
}

void exportArray(float A[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "\nA[" << i << "] = " << A[i];
}

float sum(float A[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += pow(A[i], 2);
	return sum;
}