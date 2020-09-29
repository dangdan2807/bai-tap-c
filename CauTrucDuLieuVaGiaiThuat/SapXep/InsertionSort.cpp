// Sap xep Bằng cách chèn trực tiếp

#include <iostream>

using namespace std;

void xuatMang(int arr[], int n);
void IntertionSort(int arr[], int n);

int main(int argc, char const *argv[])
{
    int n = 10;
    int arr[100]{1, 5, 8, 3, 7, 6, 2, 9, 10, 4};
    cout << "Mang truoc khi sap xep:\t";
    xuatMang(arr, n);
    IntertionSort(arr, n);
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

void IntertionSort(int arr[], int n)
{
    int pos, x;
    for (int i = 0; i < n - 1; i++) // doi i < n sang i < n -1
    {
        // b1
        x = arr[i + 1];
        pos = i;
        // b2
        while (pos >= 0 && arr[pos] > x)
        {
            arr[pos + 1] = arr[pos];
            pos--;
        }
        // b3
        // arr[pos] = x;
        arr[pos + 1] = x; // code sau khi fix
    }
}
