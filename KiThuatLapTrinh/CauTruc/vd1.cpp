#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

typedef struct PhanSo
{
    int tuSo;
    int mauSo;
} PS;

void nhapMotPS(PS &phanSo);
void xuatMotPS(PS phanSo);
int ucln(int a, int b);
void toiGian(PS &phanSo);

int main()
{
    PS p;
    nhapMotPS(p);
    printf("\nPhan so vua nhap: ");
    xuatMotPS(p);
    toiGian(p);
    printf("\nPhan so sau khi toi gian: ");
    xuatMotPS(p);
    return 0;
}

void nhapMotPS(PS &phanSo)
{
    cout << "Nhap tu so: ";
    cin >> phanSo.tuSo;
    cout << "Nhap mau so: ";
    cin >> phanSo.mauSo;
}

void xuatMotPS(PS phanSo)
{
    if (phanSo.mauSo == 1)
        cout << phanSo.tuSo;
    else if (phanSo.mauSo < 0)
    {
        phanSo.mauSo *= -1;
        phanSo.tuSo *= -1;
        xuatMotPS(phanSo);
    }
    else
        cout << phanSo.tuSo << "\\" << phanSo.mauSo;
}

int ucln(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

void toiGian(PS &phanSo)
{
    float uc = ucln(phanSo.tuSo, phanSo.mauSo);
    phanSo.tuSo /= uc;
    phanSo.mauSo /= uc;
}
