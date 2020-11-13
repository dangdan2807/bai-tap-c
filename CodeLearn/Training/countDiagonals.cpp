#include <bits/stdc++.h>
using namespace std;

long long countDiagionals(int n)
{
    return ((long long)n * (n - 3)) / 2;
}

int main(int argc, char const *argv[])
{
    long long n;
    cin >> n;
    cout << countDiagionals(n);
    return 0;
}
