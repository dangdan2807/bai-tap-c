#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int hh, mm, ss;
	cout << "Nhap giay, phut, gio: ";
	cin >> ss >> mm >> hh;
	if(ss<59 && ss>=0)
		ss++;
	else if(ss>=59)
	{
		ss=0;
		if(mm <59 && mm>=0)
			mm++;
		else if(mm>=59)
		{
			mm=0;
			if(hh>=23)
				hh=0;
			else
				hh++;
		}
	}
	printf("Dong ho hien thi sau 1 giay la: %d:%d:%d", ss, mm, hh);
	return 0;
}
