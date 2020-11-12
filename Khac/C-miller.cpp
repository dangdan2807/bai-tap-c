#include <bits/stdc++.h>
#include <stdio.h>
#include <time.h>
#include <cstdio>
using namespace std;

typedef unsigned long long ll;

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

    for (t = 0, u = n - 1; !(u & 1); t++, u >>= 1);

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

char number[17], tran[17];

int main()
{

    fgets(number, 17, stdin);
    int i, j = 0, length = strlen(number);

    for (i = length - 1; i >= 0; i--)
    {
        if (number[i] == '0')
        {
            tran[j] = '0';
            j++;
        }
        if (number[i] == '1')
        {
            tran[j] = '1';
            j++;
        }
        if (number[i] == '2')
        {
            tran[j] = '2';
            j++;
        }
        if (number[i] == '3')
        {
            printf("no");
            return 0;
        }
        if (number[i] == '4')
        {
            printf("no");
            return 0;
        }
        if (number[i] == '5')
        {
            tran[j] = '5';
            j++;
        }
        if (number[i] == '6')
        {
            tran[j] = '9';
            j++;
        }
        if (number[i] == '7')
        {
            printf("no");
            return 0;
        }
        if (number[i] == '8')
        {
            tran[j] = '8';
            j++;
        }
        if (number[i] == '9')
        {
            tran[j] = '6';
            j++;
        }
    }

    tran[j] = 0;
    // atoll() chuyển chuỗi string/char sang long long int
    ll number1 = atoll(number);
    if (!miller_rabin(number1))
    {
        printf("no");
        return 0;
    }

    ll number2 = atoll(tran);
    if (miller_rabin(number2))
        printf("yes");
    else
        printf("no");
    return 0;
}
