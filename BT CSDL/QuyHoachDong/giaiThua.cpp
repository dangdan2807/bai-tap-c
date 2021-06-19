#include <iostream>
using namespace std;

long giaiThuat1(int n)
{
    if (n <= 0)
        return 1;
    int gt[100];
    gt[1] = 1;
    for (int i = 2; i <= n; i++)
        gt[i] = gt[i - 1] * i;
    return gt[n];
}

long giaiThuat2(int n)
{
    if (n <= 0)
        return 1;
    int gt1 = 1, gt;
    for (int i = 1; i <= n; i++)
    {
        gt = gt1 * i;
        gt1 = gt;
    }
    return gt;
}

long giaiThuat3(int n)
{
    int gt = 1;
    for (int i = 1; i <= n; i++)
        gt *= i;
    return gt;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Cach 1: " << n << "! = " << giaiThuat1(n) << endl;
    cout << "Cach 2: " << n << "! = " << giaiThuat2(n) << endl;
    cout << "Cach 3: " << n << "! = " << giaiThuat3(n) << endl;
    return 0;
}
