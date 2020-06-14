#include <iostream>
using namespace std;

int checkSum(int n);
void checkNumber(int x);

int main()
{
	int inputNumber;
	cout << "Nhap so: ";
	cin >> inputNumber;
	checkNumber(++inputNumber);
	return 0;
}

int checkSum(int n) {
	int index = 0, check;
	float sum = 0;
	while (n > 0)
	{
		if (index < 3)
			sum += n % 10;
		index++;
		n /= 10;
		if (index == 3)
			check = n % 10;
	}
	sum /= 3;
	if (sum == check)
	{	
		return 1;
	}
	return 0;
}

void checkNumber(int x)
{
	while (true)
	{
		if (checkSum(x) == 1)
		{
			cout << x;
			return;
		}
		x++;
	}
}