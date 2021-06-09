#include <iostream>
using namespace std;

void nhapMang(int *&arr, int &lastIndex);
void xuatMang(int *arr, int lastIndex);
int search(int *arr, int lastIndex, int k);
void Hieu(int *arrA, int m, int *arrB, int n, int *&arrC, int &k);
void Giao(int *arrA, int m, int *arrB, int n, int *&arrC, int &k);
void Hop(int *arrA, int m, int *arrB, int n, int *&arrC, int &k);
void Hop2(int *arrA, int m, int *arrB, int n, int *&arrC, int &k);
int max(int *arr, int lastIndex);
int positionMax(int *arr, int lastIndex);
void menu();

int main(int argc, char const *argv[])
{
    int *arrayA, *arrayB, *arrayC, m, n, k, chon;
    do
    {
        menu();
        cout << "\nChon chuc nang: ";
        cin >> chon;
        switch (chon)
        {
        case 1:
            nhapMang(arrayA, m);
            xuatMang(arrayA, m);
            break;
        case 2:
            cout << "\nNhap mang A: ";
            nhapMang(arrayA, m);
            cout << "\nNhap mang B: ";
            nhapMang(arrayB, n);
            Hieu(arrayA, m, arrayB, n, arrayC, k);
            cout << "\nHieu: ";
            xuatMang(arrayC, k);
            break;
        case 3:
            cout << "\nMax = " << max(arrayA, m);
            break;
        case 4:
            cout << "\nPosition Max = " << positionMax(arrayA, m);
            break;
        case 5:
            cout << "\nNhap mang A: ";
            nhapMang(arrayA, m);
            cout << "\nNhap mang B: ";
            nhapMang(arrayB, n);
            Giao(arrayA, m, arrayB, n, arrayC, k);
            cout << "\nGiao: ";
            xuatMang(arrayC, k);
            break;
        case 6:
            cout << "\nNhap mang A: ";
            nhapMang(arrayA, m);
            cout << "\nNhap mang B: ";
            nhapMang(arrayB, n);
            Hop(arrayA, m, arrayB, n, arrayC, k);
            cout << "\nHop1: ";
            xuatMang(arrayC, k);
            Hop2(arrayA, m, arrayB, n, arrayC, k);
            cout << "\nHop2: ";
            xuatMang(arrayC, k);
            break;
        }
    } while (chon != 0);

    return 0;
}

void nhapMang(int *&arr, int &lastIndex)
{
    cout << "\nNhap so luong phan tu: ";
    cin >> lastIndex;
    arr = new int[lastIndex];
    for (int i = 0; i < lastIndex; i++)
    {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void xuatMang(int *arr, int lastIndex)
{
    for (int i = 0; i < lastIndex; i++)
        cout << arr[i] << " ";
}

void Hieu(int *arrA, int m, int *arrB, int n, int *&arrC, int &k)
{
    k = 0;
    int leng = m < n ? m : n;
    arrC = new int[leng];
    for (int i = 0; i < m; i++)
    {
        if (search(arrB, n, *(arrA + i)) == -1)
        {
            *(arrC + k) = *(arrA + i);
            k++;
        }
    }
}

void Giao(int *arrA, int m, int *arrB, int n, int *&arrC, int &k)
{
    k = 0;
    int leng = m < n ? m : n;
    arrC = new int[k];
    for (int i = 0; i < m; i++)
    {
        if (search(arrB, n, *(arrA + i)) != -1)
        {
            *(arrC + k) = *(arrA + i);
            k++;
        }
    }
}

void Hop(int *arrA, int m, int *arrB, int n, int *&arrC, int &k)
{
    k = n;
    int leng = m + n;
    arrC = new int[k];
    arrC = arrB;
    for (int i = 0; i < m; i++)
    {
        if (search(arrB, n, *(arrA + i)) == -1)
        {
            *(arrC + k) = *(arrA + i);
            k++;
        }
    }
}

void Hop2(int *arrA, int m, int *arrB, int n, int *&arrC, int &k)
{
    k = m;
    int leng = m + n;
    arrC = new int[k];
    arrC = arrA;
    for (int i = 0; i < n; i++)
    {
        if (search(arrA, n, *(arrB + i)) == -1)
        {
            *(arrC + k) = *(arrB + i);
            k++;
        }
    }
}

int search(int *arr, int lastIndex, int k)
{
    int index = 0;
    while (index < lastIndex && *(arr + index) != k)
        index++;
    if (index < lastIndex)
        return index;
    return -1;
}

int max(int *arr, int lastIndex)
{
    int iMax = 0, i;
    for (int i = 1; i < lastIndex; i++)
    {
        if (*(arr + i) > *(arr + iMax))
            iMax = i;
    }
    return *(arr + iMax);
}

int positionMax(int *arr, int lastIndex)
{
    int iMax = 0, index;
    for (int index = 1; index < lastIndex; index++)
    {
        if (*(arr + index) > *(arr + iMax))
            iMax = index;
    }
    return iMax;
}

void menu()
{
    cout << "\nCHUONG TRINH QUAN LY MANG DONG";
    cout << "\n1. Nhap xuat mang";
    cout << "\n2. Hieu 2 mang";
    cout << "\n3. tim Max";
    cout << "\n4. vi tri max";
    cout << "\n5. Giao 2 mang";
    cout << "\n6. Hop 2 mang";
    cout << "\n0. Thoat";
}