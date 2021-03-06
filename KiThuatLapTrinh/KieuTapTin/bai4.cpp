#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;
#define SIZE 'Z' - 'A' + 1

void checkFile(ifstream &file);
void readFile(long count[], ifstream &infile, const char *a);
void showCount(long Count[], int n, int dem);

int main()
{
	const char *address = "output/bai4.txt";
	ifstream file_input;
	file_input.open(address, ios_base::in);

	long array[SIZE];
	int dem = 0;
	checkFile(file_input);
	readFile(array, file_input, address);
	showCount(array, SIZE, dem);

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

void readFile(long count[], ifstream &infile, const char *a)
{
	char ch;
	int n = SIZE;
	for (int i = 0; i < n; i++)
		count[i] = 0;
	int size = 0;
	//cách 1
	while (infile.eof() == false)
	{
		infile >> ch;
		if (infile.eof() == true)
			break;
		ch = toupper(ch);
		if ('A' <= ch && ch <= 'Z')
			count[ch - 'A']++;
	}

	// cách 2
	/*infile.seekg(0, ios_base::end);
	size = infile.tellg();
	infile.seekg(0, ios_base::beg);
	for(int i = 1; i < size-2; i++)
	{
		infile >> ch;
		if(ch == EOF)
			break;
		ch = toupper(ch);
		if('A' <= ch && ch <= 'Z')
			count[ch - 'A']++;
	}*/
}

void showCount(long count[], int n, int dem)
{
	for (int i = 0; i < n; i++)
	{
		if (count[i] > 0)
		{
			cout << "So chu " << char('A' + i) << " la " << count[i] << endl;
			dem += count[i];
		}
	}
	cout << "File co " << dem << " chu.\n";
}