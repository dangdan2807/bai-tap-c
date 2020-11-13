#include <bits/stdc++.h>
using namespace std;

long long countOdd(long long l, long long r)
{
    if(l % 2 == 0)
        l--;
    else
        l -= 2;
    return (r - l) / 2;
}

int main(int argc, const char** argv) {
    long long l, r;
    cin >> l >> r;
    cout << countOdd(l, r);
    return 0;
}