#include <bits/stdc++.h>
using namespace std;

int lastDigit(int a, int b)
{
    if (a % 10 == 0 || b % 10 == 0){
        return 0;
    }
    int res = 1;
    for (int i = 0; i < b; i++) res = (res * a) % 10; 
    return res;
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;
    int res = lastDigit(a, b);
    cout << res << endl;
    return 0;
}
