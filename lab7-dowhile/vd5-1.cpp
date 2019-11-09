#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	float lai=0.9/100, giaM=12, tienY=5.1;
	int dem=0;
	while(tienY<=giaM)
	{
			tienY=tienY+tienY*lai;
			dem+=1;
	}
	cout <<"So thang ma Nam gui tiet kiem de co tien mua dien thoai la: " << dem;
	return 0;
}
