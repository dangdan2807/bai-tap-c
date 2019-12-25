#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

bool kt_so_nguyen_to(int n);

int main()
{
	ifstream filein;
	filein.open("bai3-in.txt", ios_base::in);
	if(filein.fail() == true)
	{
		cout <<"File khong ton tai!";
		return 0;
	}
	int n = 0; // bien dem so luong phan tu cua mang
	int arr[100];
	while(filein.eof() == false)
	{
		filein >> arr[n];
		n++;
	}
	//ghi dữ liệu
	ofstream fileout;
	fileout.open("bai3-out.txt", ios_base::out);
	for(int i=0; i<n; i++)
	{
		if(kt_so_nguyen_to(arr[i]) == true)
			fileout << arr[i] <<" ";
	}
	cout <<"Ghi vao file thanh cong.";
	filein.close();
	fileout.close();
	return 0;
}

bool kt_so_nguyen_to(int n)
{
	if(n<2)
		return false;
	else
	{
		if(n == 2)
		{
			return true;
		}
		else
		{
			if(n % 2 == 0)
				return false;
			else
			{
				for(int i = 2; i<n; i++)
				{
					if(n % i == 0)
						return false;
				}
			}
		}
	}
	return true;
}
