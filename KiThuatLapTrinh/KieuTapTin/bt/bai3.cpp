#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;

void checkFile(fstream &file, string filename);
void proper(string str[], int n);
void readToFile(string str[], int &n, fstream &inputFile);
void writeToFile(string str[], int n, fstream &outputFile);

int main(int argc, char const *argv[])
{
    const char *inputPath = "bt/input/lower.txt";
    const char *outputPath = "bt/input/upper.txt";
    fstream inputFile, outputFile;
    string str[100];
    int n;
    inputFile.open(inputPath, ios ::in);
    outputFile.open(outputPath, ios ::out);
    checkFile(inputFile, "lower.txt");
    checkFile(inputFile, "upper.txt");

    cout << "\nDoc file";
    readToFile(str, n, inputFile);
    proper(str, n);

    cout << "\nGhi file";
    writeToFile(str, n, outputFile);
    inputFile.close();
    outputFile.close();
    return 0;
}

void checkFile(fstream &file, string filename)
{
    if (file.fail() == true)
    {
        cout << "File khong ton tai!!" << filename << "\nKet thuc chuong trinh.";
        exit(0);
    }
}

void proper(string str[], int n)
{
    for (int i = 0; i < n; i++)
        transform(str[i].begin(), str[i].end(), str[i].begin(), ::toupper);
}

void readToFile(string str[], int &n, fstream &inputFile)
{
    n = 0;
    inputFile.seekg(0);
    while (!inputFile.eof())
    {
        getline(inputFile, str[n]);
        n++;
    }
}

void writeToFile(string str[], int n, fstream &outputFile)
{
    for (int i = 0; i < n; i++)
        outputFile << str[i] << endl;
}