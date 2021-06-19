#include <iostream>

using namespace std;

int uscln(int a, int b);
int bcnn(int a, int b);

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    cout << "uscln cua a va b: " << uscln(a, b) << endl;
    cout << "bcnn cua a va b: " << bcnn(a, b) << endl;
    return 0;
}

int uscln(int a, int b)
{
    if (b == 0)
        return a;
    return uscln(b, a % b);
}

int bcnn(int a, int b)
{
    return a * b / uscln(a, b);
}
