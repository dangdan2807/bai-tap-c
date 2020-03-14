#include <iostream>
#include <stdio.h>
using namespace std;

int demkt(char a[], int &dem);

int main()
{
	char a[100] ="qwertyuiop";
	int dem =0;
	cout <<"kq: \0 " <<demkt(a, dem);
	return 0;
}

int demkt(char a[], int &dem)
{
	if(a[dem] == '\0')
		return dem;
	dem++;
	demkt(a, dem );
}