#include <stdio.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

typedef struct ps
{
    int tuSo;
    int mauSo;
} PS;

void input(PS &phanSo);
void output(PS phanSo);
int ucln(int a, int b);
void toiGian(PS &phanSo);

int main()
{
    PS p;
    input(p);
    printf("\nPhan so vua nhap: ");
    output(p);
    toiGian(p);
    printf("\nPhan so sau khi toi gian: ");
    output(p);
    return 0;
}

void input(PS &phanSo)
{
    cout << "Nhap tu so: ";
    cin >> phanSo.tuSo;
    cout << "Nhap mau so: ";
    cin >> phanSo.mauSo;
}

void output(PS phanSo)
{
    if (phanSo.mauSo == 1)
        cout << phanSo.tuSo;
    else if (phanSo.mauSo < 0)
    {
        phanSo.mauSo *= -1;
        phanSo.tuSo *= -1;
        output(phanSo);
    }
    else
        cout << phanSo.tuSo << "\\" << phanSo.mauSo;
}

int ucln(int a, int b)
{
    int tmp;
    while (b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void toiGian(PS &phanSo)
{
    float uc = ucln(phanSo.tuSo, phanSo.mauSo);
    phanSo.tuSo /= uc;
    phanSo.mauSo /= uc;
}
