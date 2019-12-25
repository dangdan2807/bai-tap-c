#include <iostream>
#include <stdio.h>
#include <math.h>
#include <fstream>
using namespace std;

void doc_file(int a[], int &n, ifstream &filein);
void ghi_file(int a[], int n, ofstream &fileout);
void xuat_mang(int a[], int n);
bool kt_so_amstrong(int n);

int main()
{
	ifstream filein;
	filein.open("bai4-in.txt", ios_base::in);
	ofstream fileout;
	fileout.open("bai4-out.txt", ios_base::out);
	
	if(filein.fail() == true)
	{
		cout <<"File khong ton tai!";
		return 0;
	}
	int arr[100];
	int n=0;
	doc_file(arr, n, filein);
	cout <<"Day so doc duoc la: \n";
	xuat_mang(arr, n);
	cout <<"\nCac so amstrong la: \n";
	for(int i= 0; i<n; i++)
	{
		if(kt_so_amstrong(arr[i]) == true)
			cout <<arr[i] <<" ";
	}
	ghi_file(arr, n, fileout);
	
	filein.close();
	fileout.close();
	return 0;
}

void doc_file( int a[], int &n, ifstream &filein)
{
	while(filein.eof() == false)
	{
		filein >> a[n];
		n++;
	}
}
void ghi_file(int a[], int n, ofstream &fileout)
{
	for(int i=0; i<n; i++)
	{
		if(kt_so_amstrong(a[i]) == true)
			fileout << a[i] <<" ";
	}
}
void xuat_mang(int a[], int n)
{
	for(int i= 0; i<n; i++)
	{
		cout <<a[i] <<" ";
	}
}
bool kt_so_amstrong(int n)
{
	int i =0;
	int temp = n;
	while(n != 0)
	{
		n/=10;
		i++;
	}
	n = temp;
	int tong = 0;
	while(n !=0)
	{
		tong +=pow((n%10), i);
		n/=10;
	}
	if(temp == tong)
		return true;
	return false;
}