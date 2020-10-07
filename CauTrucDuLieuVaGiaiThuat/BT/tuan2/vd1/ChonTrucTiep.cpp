#include <iostream>
#include <stdio.h>

using namespace std;

void XuatMang(int arr[], int n);
void swap(int &a, int &b);
void SapXepChonTrucTiep(int arr[], int n);

int main(int argc, char const *argv[])
{
    int arr1[] = {10, 3, 7, 4, 2, 8, 5, 12};
    int arr2[] = {14, 33, 27, 10, 35, 19, 42, 44};
    cout << "Sap xep va xuat mang arr1:\n";
    SapXepChonTrucTiep(arr1, 8);
    cout << "Sap xep va xuat mang arr2:\n";
    SapXepChonTrucTiep(arr2, 8);
    return 0;
}

void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SapXepChonTrucTiep(int arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            if(arr[j] < arr[min])
                min = j;
        if(min != i)
        {
            swap(arr[min], arr[i]);
            XuatMang(arr, n);
        }
    }
    
}