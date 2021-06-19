#include <iostream>
#include <cmath>
using namespace std;

int pyramidCards(int n)
{
    return n * (3 * n + 1) / 2;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << pyramidCards(n);
    return 0;
}
