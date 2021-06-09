#include <iostream>
using namespace std;

int f(int *x)
{
    *x += 1;
    return *x;
}

int main(int argc, char const *argv[])
{
    int k = 5;
    int a[] = {2, 3, 5, 7, 11, 13}, *p, i = k % 2;
    p = &a[3];

    cout << i << endl;
    cout << *(++p) << endl;
    cout << (p - a) << endl;
    cout << (a + a[i]) << endl;
    cout << (p + i) << endl << endl;

    cout << (p + 0) << " " << *(p + 0) << endl;
    cout << (p + 1) << " " << *(p + 1) << endl;
    cout << (p + 2) << " " << *(p + 2) << endl;
    cout << (p + 3) << " " << *(p + 3) << endl;
    cout << (p + 4) << " " << *(p + 4) << endl;
    cout << (p + 5) << " " << *(p + 5) << endl;

    return 0;
}
