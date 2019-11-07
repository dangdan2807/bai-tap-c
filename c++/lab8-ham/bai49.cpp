#include <iostream>
#include <stdio.h>
using namespace std;
int get(int x, int y, int r);
int main()
{
	int x, y, result, r;
	cout <<"Nhập toạ độ của điểm A(x, y): ";
	cin >> x >> y;
	cout << x << " "<< y << endl;
	cout <<"Nhập bán kính r: ";
	do{
		cin >> r;
	}while(r<0);
	cout << r << endl;
	result = get(x, y, r);
	if(result == 0)
		cout <<"Điểm nằm trong đường tròn";
	else if(result == 1)
		cout <<"Điểm nằm trên đường tròn";
	else
		cout <<"Điểm nằm ngoài đường tròn";
	return 0;
}
int get(int x, int y, int r)
{
	double d2= x*x + y*y;
	double r2=r*r;
	// điểm nằm trong đường tròn
	if(d2<r2) return 0;
	// điểm nằm trên đường tròn
	if(d2==r2) return 1;
	// điểm nằm ngoài đường tròn
	if(d2>r2) return -1;
}