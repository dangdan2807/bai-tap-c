#include <iostream>

using namespace std;

void searchTuyenTinh(int arr[], int n, int x);
int searchTuyenTinh2(int arr[], int n, int x);

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
    searchTuyenTinh(arr, n, x);
    if(searchTuyenTinh2(arr, n, x) ==  -1)
    {
        cout << "khong tim x";
    }
    else
    {
        cout << "da tim thay, tai vi tri: " << searchTuyenTinh2(arr, n, x);
    }
    
    return 0;
}

void searchTuyenTinh(int arr[], int n, int x)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "da tim thay, tai vi tri" << i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "khong tim thay";
}

int searchTuyenTinh2(int arr[], int n, int x)
{
    int find = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            find = i;
            break;
        }
    }
    return find;
}