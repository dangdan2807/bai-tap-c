#include <iostream>
#include <stdio.h>

using namespace std;

void XuatMang(int arr[], int n);
void SapXepChenTrucTiep(int arr[], int n);

int main(int argc, char const *argv[])
{
    int arr1[] = {10, 3, 7, 4, 2, 8, 5, 12};
    int arr2[] = {14, 33, 27, 10, 35, 19, 42, 44};
    cout << "Sap xep va xuat mang arr1:\n";
    SapXepChenTrucTiep(arr1, 8);
    cout << "Sap xep va xuat mang arr2:\n";
    SapXepChenTrucTiep(arr2, 8);
    return 0;
}

void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void SapXepChenTrucTiep(int arr[], int n)
{
    bool flag = false;
    int pos, x;
    for (int i = 0; i < n - 1; i++)
    {
        pos = i;
        x = arr[i + 1];
        while (pos >= 0 && arr[pos] > x)
        {
            arr[pos + 1] = arr[pos];
            pos--;
            flag = true;
        }
        arr[pos + 1] = x;
        if(flag)
        {
            XuatMang(arr, n);
            flag = false;
        }
    }
}