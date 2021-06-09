#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;
#define CHAR_SIZE 'Z' - 'A' + 1
#define NUMBER_SIZE 10

void checkFile(ifstream &file);
void readFile(long count[], long count2[], ifstream &infile);
void showCount(long Count[], long count2[], int n);

int main()
{
	const char *address = "input/bai5.txt";
	ifstream file_input;
	file_input.open(address, ios_base::in);

	long array[CHAR_SIZE], array2[NUMBER_SIZE];
	checkFile(file_input);
	readFile(array, array2, file_input);
	showCount(array, array2, CHAR_SIZE);
	file_input.close();
	return 0;
}

void checkFile(ifstream &file)
{
	if (file.fail() == true)
	{
		cout << "Mo file that bai!";
		exit(0);
	}
}

void readFile(long count[], long count2[], ifstream &infile)
{
	char ch;
	for (int i = 0; i < CHAR_SIZE; i++)
	{
		count[i] = 0;
		if (i <= NUMBER_SIZE)
			count2[i] = 0;
	}
	while (infile.eof() == false)
	{
		infile >> ch;
		if (infile.eof() == true)
			break;
		if ('0' <= ch && ch <= '9')
		{
			ch -= 48;
			count2[ch - 0]++;
		}
		ch = toupper(ch);
		if ('A' <= ch && ch <= 'Z')
			count[ch - 'A']++;
	}
}

void showCount(long count[], long count2[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (count[i] > 0)
		{
			cout << "So chu " << char('A' + i) << " la " << count[i] << endl;
			dem += count[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (count2[i] > 0)
		{
			if (0 <= count2[i] && count2[i] <= 9)
			{
				cout << "So " << i << " co " << count2[i] << " so" << endl;
				dem += count2[i];
			}
		}
	}
	cout << "File co " << dem << " chu.\n";
}