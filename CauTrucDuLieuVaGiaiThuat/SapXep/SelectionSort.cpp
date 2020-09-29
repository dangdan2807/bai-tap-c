// Phướng pháp sắp xếp băng cách chọn để xếp

#include <iostream>

using namespace std;

void xuatMang(int arr[], int n);
void swap(int &a, int &b);
void QuickSort(int arr[], int n);

int main(int argc, char const *argv[])
{

    int n = 10;
    int arr[100]{1, 5, 8, 3, 7, 6, 2, 9, 10, 4};
    cout << "Mang truoc khi sap xep:\t";
    xuatMang(arr, n);
    QuickSort(arr, n);
    cout << "Mang sau khi sap xep:\t";
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

void QuickSort(int arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        if (min != i)
            swap(arr[min], arr[i]);
    }
}