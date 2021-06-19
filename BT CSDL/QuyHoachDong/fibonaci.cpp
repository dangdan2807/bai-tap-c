#include <iostream>
using namespace std;

long fibo1(int n)
{
    int f1 = 1;
    int f2 = 1;
    int f;
    for (int i = 3; i <= n; i++)
    {
        f = f1 + f2;
        f2 = f1;
        f1 = f;
    }
    return f;
}

long fibo2(int n)
{
    int f[100];
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= n; i++)
        f[i] = f[i - 1] + f[i - 2];
    return f[n];
}

long fibo3(int n)
{
    int f = 1;
    if(n <= 2)
        return 1;
    for (int i = 2; i <= n; i++)
        f += i;
    return f;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << fibo1(n) << endl;
    cout << fibo2(n) << endl;
    cout << fibo3(n) << endl;
    return 0;
}
