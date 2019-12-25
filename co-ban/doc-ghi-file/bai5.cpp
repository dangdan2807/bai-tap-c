#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void doc_file(int a[], int &n, ifstream &filein);
void xuat_mang(int a[], int n);
int ucln(int x, int y);
int tim_ucln_mang(int a[], int n);
int bcnn(int a[], int n);
int tim_bcnn_mang(int a[], int n);

int main()
{
	ifstream filein;
	filein.open("//sdcard//code//bai-tap-c//co-ban//doc-ghi-file//bai5-in.txt", ios_base::in);
	
	int arr[100];
	int n=0;
	doc_file(arr, n, filein);
	cout <<"Day so doc duoc la: ";
	xuat_mang(arr, n);
	cout <<endl;
	
	//thao tac voi file thu 1
	ofstream fileout;
	fileout.open("//sdcard//code//bai-tap-c//co-ban//doc-ghi-file//bai5-ucln.txt", ios_base::out);
	cout <<"UCLN cua mang la: " <<tim_ucln_mang(arr, n) <<"\n";
	fileout << tim_ucln_mang(arr, n);
	fileout.close();
	
	//thao tac voi file thu 2
	fileout.open("//sdcard//code//bai-tap-c//co-ban//doc-ghi-file//bai5-bcnn.txt", ios_base::out);
	 cout <<"BCNN cua mang la: " <<tim_bcnn_mang(arr, n) <<"\n";
	fileout << tim_bcnn_mang(arr, n);
	fileout.close();
	filein.close();
	cout <<"Da ghi ket qua vao file";
	return 0;
}

void doc_file( int a[], int &n, ifstream &filein)
{
	if(filein.fail() == true)
	{
		cout <<"File doc khong ton tai!";
		exit(0);
	}
	char x;
	while(filein.eof() == false)
	{
		filein >> a[n];
		n++;
		filein >> x;
	}
}
void xuat_mang(int a[], int n)
{
	for(int i= 0; i<n; i++)
		cout <<a[i] <<" ";
}
int ucln(int x, int y)
{
	while(x != y)
	{
		if(x > y)
			x-=y;
		else if(x < y)
			y-=x;
	}
	return x;
}
int tim_ucln_mang(int a[], int n)
{
	int x = a[0];
	for(int i= 0; i<n; i++)
	{
		x = ucln(x, a[i]);
	}
	return x;
}
int bcnn(int x, int y)
{
	return (x*y)/ucln(x, y);
}
int tim_bcnn_mang(int a[], int n)
{
	int x = a[0];
	for(int i=0; i<n; i++)
		x = bcnn(x, a[i]);
	return x;
}