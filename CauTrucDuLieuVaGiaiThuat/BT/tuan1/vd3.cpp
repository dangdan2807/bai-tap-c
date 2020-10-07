#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int BinarySearch(int a[], int left, int right, int x);
void PhatSinhMangDong(int a[], int n);

int main()
{
	int a[100], n, x;
	cout << "ban can phat sinh mang co bao nhieu PT?";
	cin >> n;
	PhatSinhMangDong(a, n);
	cout << "Nhap khoa can tim: ";
	cin >> x;
	int kq = BinarySearch(a, 0, n - 1, x);
	if(kq == -1)
		cout << "khong tim thay\n";
	else
		cout << "tim thay tai vi tri " << kq;
	return 0;
}

int BinarySearch(int a[], int left, int right, int x)
{
	if(left >= right) return -1;
	int mid = (left + right) / 2;
	if(x == a[mid])
		return mid;
	if(x < a[mid])
		return BinarySearch(a, left, mid - 1, x);
	if(x > a[mid])
		return BinarySearch(a, mid + 1, right, x);
}

void PhatSinhMangDong(int a[], int n)
{
	srand(time(NULL));
	a[0] = rand() % 50;
	for(int i = 0; i < n; i++)
		a[i] = a[i - 1] + rand() % 10;
}