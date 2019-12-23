#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

bool kt_so_nguyen_to(int);

int main()
{
	ifstream filein;
	// //sdcard//code//bai-tap-c//co-ban//doc-ghi-file//
	filein.open("bai2-input.txt");
	if(filein.fail() == true)
	{
		cout <<"File khong ton tai!";
		return 0;
	}
	int n; // số lượng phần tử của mảng
	filein >> n;
	int arr[n];
	for(int i  = 0; i< n; i++)
	{
		filein >>arr[i];
	}
	// cách khác
	/*int i=0;
	while(!filein.eof())
	{
		filein >>arr[i];
		i++;
	}*/
	//ghi dữ liệu
	ofstream fileout;
	fileout.open("bai2-output.txt");
	for(int i  = 0; i< n; i++)
	{
		if(kt_so_nguyen_to(arr[i]) == true)
			fileout <<arr[i] <<" ";
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
			return true;
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
