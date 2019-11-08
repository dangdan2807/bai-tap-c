#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, chuc, dv;
	cout <<"Nhap 1 so nguyen nam tu 10 -> 99: ";
	cin >>a;
	chuc=a/10;
	dv=a%10;
	switch(chuc)
	{
		case 1: cout <<"Muoi "; break;
		case 2: cout <<"Hai Muoi "; break;
		case 3: cout <<"Ba muoi "; break;
		case 4: cout <<"Bon muoi "; break;
		case 5: cout <<"Nam Muoi "; break;
		case 6: cout <<"Sau muoi "; break;
		case 7: cout <<"Bay Muoi "; break;
		case 8: cout <<"Tam muoi "; break;
		case 9: cout <<"Chin Muoi "; break;
		case 0: break;
	}
	switch(dv)
	{
		case 1: cout <<"mot "; break;
		case 2: cout <<"Hai  "; break;
		case 3: cout <<"Ba  "; break;
		case 4: cout <<"Bon  "; break;
		case 5: cout <<"Nam  "; break;
		case 6: cout <<"Sau  "; break;
		case 7: cout <<"Bay  "; break;
		case 8: cout <<"Tam  "; break;
		case 9: cout <<"Chin  "; break;
		case 0: break;
	}
	return 0;
}
