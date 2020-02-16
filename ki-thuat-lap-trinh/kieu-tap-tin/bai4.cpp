#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;
#define SIZE 'Z' - 'A' + 1

void check_file(ifstream& file);
void read_file(long count[], ifstream& infile, const char* a);
void show_count(long Count[], int n, int dem);

int main()
{
	const char* address = "output//bai4.txt";
	ifstream file_input;
	file_input.open(address, ios_base::in);
	
	long array[SIZE];
	int dem = 0;
	check_file(file_input);
	read_file(array,file_input, address);
	show_count(array, SIZE, dem);
	
	file_input.close();
	return 0;
}

void check_file(ifstream& file)
{
	if(file.fail() == true)
	{
		cout <<"Mo file that bai!";
		exit(0);
	}
}

void read_file(long count[], ifstream& infile, const char* a)
{
	char ch;
	int n = SIZE;
	for(int i = 0; i < n; i++)
		count[i] = 0;
	int size = 0;
	//cách 1
	/*
	while(infile.eof() == false)
	{
		size++;
		infile >> ch;
		/*if(ch == EOF)
			break;
		ch = toupper(ch);
		if('A' <= ch && ch <= 'Z')
			count[ch - 'A']++;
	}
	infile.close();
	infile.open(a, ios_base:: in);
	for(int i = 0; i < size-1; i++)
	{
		infile >> ch;
		if(ch == EOF)
			break;
		ch = toupper(ch);
		if('A' <= ch && ch <= 'Z')
			count[ch - 'A']++;
	}*/
	
	// cách 2
	infile.seekg(0, ios_base::end);
	size = infile.tellg();
	infile.seekg(0, ios_base::beg);
	for(int i = 0; i < size-3; i++)
	{
		infile >> ch;
		if(ch == EOF)
			break;
		ch = toupper(ch);
		if('A' <= ch && ch <= 'Z')
			count[ch - 'A']++;
	}
}

void show_count(long count[], int n, int dem)
{
	for(int i = 0; i < n; i++)
	{
		if(count[i] > 0)
		{
			cout << "So chu " << char('A' +i) << " la " << count[i] << endl;
			dem += count[i];
		}
	}
	 cout << "File co " << dem << " chu.\n";
}