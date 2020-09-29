#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

bool kt_so_nguyen_to(int n);

int main()
{
	ifstream filein;
	filein.open("input//bai1-input.txt", ios_base::in);
	if(filein.fail() == true)
	{
		cout <<"File khong ton tai!";
		return 0;
	}
	int x;
	filein >> x;
	//ghi dữ liệu
	ofstream fileout;
	fileout.open("output//bai1-output.txt", ios_base::out);
	if(kt_so_nguyen_to(x) == true)
	{
		fileout <<"true";
	}
	else
	{
		fileout <<"false";
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
