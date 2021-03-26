#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void input(int Q[], int &n);
void output(int Q[], int n);
long sum_rec(int Q[], int n);
int max_rec(int Q[], int n);
int min_rec(int Q[], int n);
long sum(int Q[], int n);

int main()
{
	int n;
	int arr[100];
	input(arr, n);
	output(arr, n);
	long sum_dq = sum_rec(arr, n);
	cout << "\n\nTong cua mang (de quy): " << sum_dq << endl;
	long sum_kdq = sum(arr, n);
	cout << "Tong cua mang (khong de quy): " << sum_kdq << endl;
	cout << "Gia tri lon nhat cua mang: " << max_rec(arr, n) << endl;
	cout << "Gia tri nho nhat cua mang: " << min_rec(arr, n) << endl;
	return 0;
}

void input(int Q[], int &n)
{
	cout << "\tKHOI TAO MANG TU DONG.";
	srand(time(NULL));
	n = 1 + rand() % 99;
	cout << "\nSo luong phan tu cua mang(random) la: " << n;
	int a = pow(10, 6);
	int b = pow(10, 4);
	for (int i = 0; i < n; i++)
	{
		Q[i] = b + rand() % (a - b);
	}
	cout << "\nKhoi tao mang hoan tat";
}

void output(int Q[], int n)
{
	cout << "\n\tXUAT MANG:\n";
	for (int i = 0; i < n; i++)
	{
		cout << Q[i] << "\t";
		if (i + 1 % 5 == 0)
			cout << "\n";
	}
}

long sum_rec(int Q[], int n)
{
	long sum = 0;
	if (n < 1)
		return sum;
	return (sum += (Q[n - 1] + sum_rec(Q, n - 1)));
}

int max_rec(int A[], int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return A[0];
	else
	{
		if (A[n - 1] > max_rec(A, n - 1))
			return A[n - 1];
		else
			return max_rec(A, n - 1);
	}
}

int min_rec(int A[], int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return A[0];
	else
	{
		if (A[n - 1] < min_rec(A, n - 1))
			return A[n - 1];
		else
			return min_rec(A, n - 1);
	}
}

long sum(int Q[], int n)
{
	long sum = 0;
	for (int i = 0; i < n; i++)
		sum += Q[i];
	return sum;
}
