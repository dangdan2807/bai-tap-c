#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
using namespace std;
#define MAX 100

typedef struct ThongTin
{
    string code, name, location, birthday;
} TN;

void checkFile(fstream &file);
void outputInfoThongTin(TN x);
void xuatMang(TN A[], int n);
void readInfo(TN &x, fstream &fileIn);
void readToFile(TN A[], int &n, fstream &infile);
void writeToFile(float A[], int n, fstream &fileout);

int main()
{
    const char *address = "person.txt";
    fstream input_file, output_file;
    TN ArrayA[MAX];
    int n;
    input_file.open(address, ios::in);
    checkFile(input_file);
    cout << "\ndoc du lieu";
    readToFile(ArrayA, n, input_file);
    cout << "\nxuat du lieu";
    xuatMang(ArrayA, n);

    input_file.close();
    return 0;
}

void checkFile(fstream &file)
{
    if (file.fail() == true)
    {
        cout << "File khong ton tai!!\nKet thuc chuong trinh.";
        exit(0);
    }
}

void outputInfoThongTin(TN x)
{
    cout << x.name << "\t\t"
         << "[code: " << x.code << "]" << endl;
    cout << "  Address: [" << x.location << "]\n";
    cout << "  Birthday: [" << x.birthday << "]\n";
}

void xuatMang(TN A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        outputInfoThongTin(A[i]);
    }
}

void readInfo(TN &x, fstream &fileIn)
{
    getline(fileIn, x.code, ':');
    getline(fileIn, x.name, ',');
    getline(fileIn, x.location, ':');
    getline(fileIn, x.birthday);
}

void readToFile(TN A[], int &n, fstream &fileIn)
{
    n = 0;
    fileIn.seekg(0);
    while (!fileIn.eof())
    {
        readInfo(A[n], fileIn);
        n++;
    }
}