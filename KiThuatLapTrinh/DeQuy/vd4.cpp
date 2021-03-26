#include <iostream>
#include <string>
using namespace std;

void input(float &a);
void inputNam(float &a);
float lai_kep(float y, int n);

int main()
{
	float von, nam;
	cout << "Nhap von: ";
	input(von);
	cout << "Nhap so nam: ";
	inputNam(nam);
	float tien = lai_kep(von, nam);
	cout << "Ket qua: " << tien;
	return 0;
}

void input(float &a)
{
	do
	{
		cin >> a;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		if (a <= 0)
			cout << "Gia tri nhap khong duoc <= 0, nhap lai: ";
	} while (a <= 0);
}

void inputNam(float &a)
{
	do
	{
		cin >> a;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
		}
		if (a <= 0)
			cout << "Gia tri nhap khong duoc <= 0, nhap lai: ";
		else if (a > 100)
			cout << "Khong duoc lon hon 100 nam, nhap lai: ";
	} while (a <= 0 || a > 100);
}

float lai_kep(float y, int n)
{
	float laiSuat = 0.07;
	if (n == 1)
		return y * (1 + laiSuat);
	else
	{
		y *= (1 + laiSuat);
		return lai_kep(y, --n);
	}
}

