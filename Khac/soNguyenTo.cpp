#include <iostream>
#include <time.h>
// #include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int soNguyenTo(ll n)
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

ll ModMul(ll a, ll b, ll n)
{
    ll ans = 0;
    while (b)
    {
        // kiểm tra chẵn lẻ
        // toán tử bit: sét bit cuối cùng của b nên 1-> lẻ, 0 -> chẳn
        // or b & 2 == 1
        if (b & 1)
            ans = (ans + a) % n;
        a = (a + a) % n;
        // dịch bit sang phải
        // or b /= 2
        b >>= 1;
    }
    return ans;
}

ll ModExp(ll a, ll b, ll n)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = ModMul(ans, a, n);
        a = ModMul(a, a, n);
        b >>= 1;
    }
    return ans;
}

bool miller_rabin(ll n)
{
    ll i, j, a, x, y, t, u, s = 10;
    if (n == 2)
        return true;
    if (n < 2 || !(n & 1))
        return false;

    for (t = 0, u = n - 1; !(u & 1); t++, u >>= 1)
        ;

    for (i = 0; i < s; i++)
    {
        a = rand() % (n - 1) + 1;
        x = ModExp(a, u, n);
        for (j = 0; j < t; j++)
        {
            y = ModMul(x, x, n);
            if (y == 1 && x != 1 && x != n - 1)
                return false;
            x = y;
        }
        if (x != 1)
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    ll m;
    long long n = 96832323092641963234243123;
    cout << soNguyenTo(n) << endl;
    float a;
    clock_t time_req;
    time_req = clock();

    soNguyenTo(n);

    time_req = clock() - time_req;
    cout << (float)time_req / CLOCKS_PER_SEC << " seconds" << endl;

    // miller_rabin
    time_req = clock();
    
    miller_rabin(n);

    time_req = clock() - time_req;
    cout <<(float)time_req / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}
