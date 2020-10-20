#include <bits/stdc++.h>
using namespace std;

int power(long long int x, long long int y)
{
    int p = 100;
    long long int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int numberOfDigits(int x)
{
    int i = 0;
    while (x)
    {
        x /= 10;
        i++;
    }
    return i;
}

string lastTwoDigits(int a, int b)
{
    int temp = 100;
    string c = "";
    temp = power(a, b);
    for (int i = 0; i < 2 - numberOfDigits(temp); i++)
        c += to_string(0);
    if (temp)
        c += to_string(temp);
    return c;
}

int main(int argc, char const *argvs[])
{
    int a, b;
    cin >> a >> b;
    cout << lastTwoDigits(int a, int b);
    return 0;
}
