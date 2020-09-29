//  Phương pháp dựa trên phân hoạch

#include <iostream>

using namespace std;

void xuatMang(int arr[], int n);
void swap(int &a, int &b);
void QuickSort(int arr[], int left, int right);

int main(int argc, char const *argv[])
{

    int n = 10;
    int arr[100]{1, 5, 8, 3, 7, 6, 2, 9, 10, 4};
    cout << "Mang truoc khi sap xep:\t";
    xuatMang(arr, n);
    QuickSort(arr, 0, n);
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

void QuickSort(int arr[], int left, int right)
{
    int x, i, j;
    if (left >= right) return;
    x = arr[(left + right) / 2];
    i = left;
    j = right - 1;
    do
    {
        while(arr[i] < x) i++;
        while(arr[j] > x) j--;
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } while (i < j);
    if(left < j) QuickSort(arr, left, j);
    if(right > i) QuickSort(arr, i, right);
}