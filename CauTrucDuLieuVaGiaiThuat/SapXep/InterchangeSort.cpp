// Sắp xếp bằng cách đổi chỗ trực tiếp

#include <iostream>

using namespace std;

void xuatMang(int arr[], int n);
void swap(int &a, int &b);
void InterchangeSort(int arr[], int n);

int main(int argc, char const *argv[])
{
    int n = 10;
    // cout << "Nhap n: ";
    // cin >> n;
    int arr[100]{1, 5, 8, 3, 7, 6, 2, 9, 10, 4};
    cout << "Mang truoc khi sap sep:\t";
    InterchangeSort(arr, n);
    xuatMang(arr, n);
    cout << "Mang sau khi sap sep:\t";
    xuatMang(arr, n);
    return 0;
}

void xuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void InterchangeSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
}
