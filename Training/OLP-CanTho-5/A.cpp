#include <iostream>
#include <string.h>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, temp = 0;
    string a, b;
    cin >> n >> a >> b;

    int len = a.length();
    for (int i = 0; i < len; i++)
        if (a[i] == b[i])
            temp++;

    int m1 = min(temp, n);
    int m2 = max(temp, n);
    cout << m1 + (len - m2);
    return 0;
}
