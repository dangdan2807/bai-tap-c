#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, A, B;
	cout << "Nhap a va b: ";
	cin >> a >> A >>B;
	if(a>=A && a<=B)
		cout <<"a thuoc doan A va B ";
	else
		cout <<"a khong thuoc doan A va B ";
	return 0;
}
