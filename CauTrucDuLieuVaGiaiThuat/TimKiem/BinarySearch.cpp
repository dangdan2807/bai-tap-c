#include <iostream>

using namespace std;

void binarySearch(int arr[], int n, int x);
int binarySearch2(int arr[], int n, int x, int left, int right);

int main(int argc, char const *argv[])
{
    int n, x;
    int arr[100];
    cout << "nhap n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap pt thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "nhap x can tim: ";
    cin >> x;
    binarySearch(arr, n, x);

    if(binarySearch2(arr, n, x, 0, n -1 == -1))
        cout << "khong tim thay";
    else
        cout << "da tim thay, tai vi tri: " << binarySearch2(arr, n, x, 0, n -1);
    return 0;
}

void binarySearch(int arr[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    int mid;
    int flag = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            cout << "tim thay, tai vi tri: " << mid;
            flag = 1;
            break;
        }
        else if (arr[mid] > x)
            right = mid - 1;
        else if (arr[mid] < x)
            left = mid + 1;
    }
    if (flag == 0)
        cout << "khong tim thay";
}

int binarySearch2(int arr[], int n, int x, int left, int right)
{
    if (left <= right)
    {
        int mid = (left + right) / 2;
        if (x = arr[mid])
            return mid;
        else if (left < arr[mid])
            return binarySearch2(arr, n, x, left, right - 1);
        else
            return binarySearch2(arr, n, x, left - 1, right);
    }
    return -1;
}