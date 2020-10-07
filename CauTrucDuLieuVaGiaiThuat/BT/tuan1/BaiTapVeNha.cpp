#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void PhatSinhMangDong(int a[], int n);
int BinarySearch(int a[], int left, int right, int x);

int main()
{
  	int arr[100];
  	int n = 10;
    cout << "Nhap so pt cua mang: ";
    cin >> n;
  	int x;
    cout << "nhap pt x can tim: ";
    cin >> x;
  	PhatSinhMangDong(arr, n);
    int kq = BinarySearch(arr, 0, n, x);
    if(kq == -1)
      cout << "khong tim thay";
    else
      cout << "Tim thay x tai vi tri " << kq;
	return 0;
}

void PhatSinhMangDong(int a[], int n)
{
	srand(time(NULL));
	a[0] = rand() % 50;
	for(int i = 0; i < n; i++)
		a[i] = a[i - 1] + rand() % 10;
}


int BinarySearch(int arr[], int left, int right, int x) 
{ 
    while (left <= right) { 
        int mid = left + (right - left) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] < x) 
            left = mid + 1; 
        else
            right = mid - 1; 
    } 
    return -1; 
} 
