#include <iostream>
#include <time.h>

using namespace std;

clock_t start, end;

void PhatSinhMangDong(int a[], int n);
int LinearSrerch_CaiTien(int a[], int n, int x);
int BinarySearch(int a[], int left, int right, int x);

int main()
{
	start = clock();
	end = clock();
	
	double t = end - start;
	cout << "thoi gian tim kiem tuyen tinh la: " << t;
	
	start.clock();
	
	end.clock();	
	return 0;
}

void PhatSinhMangDong(int a[], int n)
{
	srand(time(NULL));
	a[0] = rand() % 50;
	for(int i = 0; i < n; i++)
		a[i] = a[i - 1] + rand() % 10;
}

int LinearSrerch_CaiTien(int a[], int n, int x)
{
	int i = 0;
	a[n] = x;
	while(a[i] != x)
		i++;
	if(i < n) return i;
	return -1;
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