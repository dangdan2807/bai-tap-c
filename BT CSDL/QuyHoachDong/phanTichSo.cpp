#include <iostream>
using namespace std;

long phanTichSo(int n)
{
    long arr[n + 1][n + 1];
    for (int i = 0; i <= n; i++)
        arr[0][i] = 0;
    arr[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i > j)
                arr[i][j] = arr[i - 1][j];
            else
                arr[i][j] = arr[i - 1][j] + arr[i][j - i];
        }
    }
    return arr[n][n];
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << phanTichSo(n) << endl;
    return 0;
}
