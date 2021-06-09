#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>
#include <time.h>
using namespace std;

void checkFile(fstream &file);
void readFile(float A[], int &n, fstream &inputFile);
void writeToFile(float A[], int n, fstream &fileout);
void outputArray(float A[], int n);

int main()
{
	fstream inputFile;
	const char *inputPath = "input/interger.DAT";
	float array[10], arrayB[10];
	int n = 10;
	cout << "Phat sinh ngau nhien";
	int max = 1000, min;
	for (int i = 0; i < n; i++)
	{
		min = i;
		if (i <= 4)
		{
			srand(time(NULL));
			array[i] = min + rand() % (max - min + 1);
		}
		else
		{
			srand(time(NULL));
			array[i] = min + (rand() * 1.0 / RAND_MAX) * (max - min);
		}
	}

	inputFile.open(inputPath, ios_base::out);
	cout << "\nKiem tra file: ";
	checkFile(inputFile);
	cout << "\nGhi file";
	writeToFile(array, n, inputFile);
	inputFile.close();

	cout << "\nDoc file";
	inputFile.open(inputPath, ios_base::in);
	readFile(arrayB, n, inputFile);

	cout << "\nXuat du lieu";
	outputArray(arrayB, n);
	inputFile.close();
	return 0;
}

void checkFile(fstream &file)
{
	if (file.fail() == true)
	{
		cout << "File khong ton tai!";
		exit(0);
	}
}

void readFile(float A[], int &n, fstream &inputFile)
{
	n = 0;
	while (inputFile.eof() == false)
	{
		inputFile >> A[n];
		n++;
	}
}

void writeToFile(float A[], int n, fstream &fileout)
{
	for (int i = 0; i < n; i++)
		fileout << A[i] << endl;
}

void outputArray(float A[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "\nA[" << i << "] = " << A[i];
}