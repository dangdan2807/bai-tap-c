#include <bits/stdc++.h>

using namespace std;

double tinh1(int xi, int xj, int yi, int yj)
{
    return (abs(xi - xj) + abs(yi - yj));
}

double tinh2(int xi, int xj, int yi, int yj)
{
    return sqrt((xi - xj) * (xi - xj) + (yi - yj) * (yi - yj));
}

int main(int argc, char const *argv[])
{
    int x[] = {0, 0, 0, -1, 0, 1};
    int y[] = {0, 1, 2, 1, 1, 1};
    int n = 6;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tinh1(x[i], x[j], y[i], y[j]) == tinh2(x[i], x[j], y[i], y[j]))
                count++;
        }
    }
    cout << count;

    return 0;
}
