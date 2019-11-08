#include <iostream>
#include <stdio.h>
using namespace std;
int checkdate(int d, int m, int y);
int main()
{
	int d, m, y;
	printf("Nhập ngày, thang, nam: ");
	scanf("%d%d%d", &d, &m, &y);
	if(checkdate(d, m, y))
		printf("Hợp lệ");
	else
		printf("Không hợp lệ");
	return 0;
}
int checkdate(int d, int m, int y)
{
	int maxd=31;
	if(m<1 || m>12 || d<1 || d>12)
		return 0;
	if(m==4 || m==6 || m==9 || m==11)
	{
		maxd=30;
	}
	else if(m==2)
	{
		if(y%400==0 || (y%4==0 && y%100 !=0))
			maxd=29;
		else maxd=28;
	}
	return d<=maxd; 
}
