#include <iostream>
#include <cmath>

using namespace std;
long long countPoints2(int n)
{
    if (n == 2)
        return 5;
    return 1.5 * pow(n, 2) - 0.5 * n;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << countPoints2(n);
    return 0;
}
