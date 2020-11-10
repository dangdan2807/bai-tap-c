#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int soNguyenTo(int n)
{
    if (n == 2 || n == 3 || n == 5)
        return 1;
    if (n % 2 == 0 || n % 5 == 0 || n % 3 == 0 || n < 2)
        return 0;
    if (n < 49)
        return 1;
    if (n % 7 == 0 || n % 11 == 0 || n % 13 == 0 || n % 17 == 0 ||
        n % 19 == 0 || n % 23 == 0 || n % 29 == 0 || n % 31 == 0 ||
        n % 37 == 0 || n % 41 == 0 || n % 43 == 0 || n % 47 == 0)
        return 0;
    if (n < 2809)
        return 1;
    long maxRange = int(sqrt(n)) + 1;
    for (int i = 53; i < maxRange; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int soDem(int n)
{
    long sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 10 == 0)
        return 1;
    return 0;
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    long temp = 0;
    long dem = 0;
    for (int i = n; i <= 10000; i++)
    {
        if (soNguyenTo(i) == 1)
        {
            if(soDem(i) == 1)
                dem++;
            temp++;
        }
        if (temp >= m)
            break;
    }
    cout << dem << endl;
    return 0;
}
