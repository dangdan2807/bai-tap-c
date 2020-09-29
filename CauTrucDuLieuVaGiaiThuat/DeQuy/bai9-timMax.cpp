// Cho mảng a có n phần tử
// tìm giá trị lớn nhất trong mảng
// bằng đệ quy

#include <iostream>

using namespace std;

int timMax(int arr[], int n);

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap pt thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "max: " << timMax(arr, n);
    return 0;
}

int timMax(int arr[], int n) {
    static int max = arr[0];
    if(n == 0)
        return max;
    if(max < arr[n - 1])
    {
        max = arr[n - 1];
    }
    timMax(arr, n - 1);
}