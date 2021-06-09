#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *A, *B, *C, m, n, k, chon;

    for (int i = 0; i < 2; i++)
    {
        cout << "nhap: ";
        cin >> *(A + i);
    }
    for (int i = 0; i < 2; i++)
    {
        cout << *(A + i) << " ";
    }

    return 0;
}
