// Cho mảng a có n phần tử, tính tổng các phần tử trong mảng bằng đệ quy

#include <iostream>

using namespace std;

int tinhTong(int arr[], int n);

int main(int argc, char const *argv[])
{
    cout << "Nhap n: ";
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap pt thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << tinhTong(arr, n);
    return 0;
}

int tinhTong(int arr[], int n) {
    static int sum = 0;
    if(n == 0)
        return sum;
    else
    {
        sum += arr[n - 1];
        tinhTong(arr, n - 1);
    }
    return sum;
}