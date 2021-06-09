#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>
using namespace std;

void checkFile(ifstream &file);
void readFile(float A[], int &n, ifstream &inputFile);
void outputArray(float A[], int n);
float sum(float A[], int n);

int main()
{
	ifstream inputFile;
	const char *inputPath = "input/bai1.txt";
	inputFile.open(inputPath, ios_base::in);
	float array[50];
	int n;
	checkFile(inputFile);
	readFile(array, n, inputFile);
	outputArray(array, n);
	cout << "\nTong binh phuong cua cac so la: " << sum(array, n);
	inputFile.close();
	return 0;
}

void checkFile(ifstream &file)
{
	if (file.fail() == true)
	{
		cout << "File khong ton tai!";
		exit(0);
	}
}

void readFile(float A[], int &n, ifstream &inputFile)
{
	if (inputFile.fail() == true)
	{
		cout << "File khong ton tai!";
		exit(0);
	}
	n = 0;
	while (inputFile.eof() == false)
	{
		inputFile >> A[n];
		n++;
	}
}

void outputArray(float A[], int n)
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