#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

string address = "vd2\\";
string fileName[5]{"mang1.int", "mang2.int", "mang3.int", "mang4.int", "mang5.int"};

int GhiMangVaoFile(int n);
int DocFileTextVaoMang(int a[], int &n, string file);
void xuatMang(int arr[], int n);
void swap(int &a, int &b);
void chonTrucTiep(int arr[], int n, int &soSanh, int &hoanVi);
void chenTrucTiep(int arr[], int n, int &soSanh, int &hoanVi);
void DoiChoTrucTiep(int arr[], int n, int &soSanh, int &hoanVi);
void NoiBot(int arr[], int n, int &soSanh, int &hoanVi);
void SapXepNhanh(int arr[], int left, int right, int &soSanh, int &hoanVi);
void DemThoiGian(int name, int arr[], int n, int x);
void Dem(int n, int arr1[], int arr2[], int arr3[], int arr[4], int arr5[], int luachon);

int main(int argc, char const *argv[])
{
    int n = 50000;
    int arr1[50000], arr2[50000], arr3[50000], arr4[50000], arr5[50000];
    GhiMangVaoFile(n);
    DocFileTextVaoMang(arr1, n, "mang1.int");
    DocFileTextVaoMang(arr2, n, "mang2.int");
    DocFileTextVaoMang(arr3, n, "mang3.int");
    DocFileTextVaoMang(arr4, n, "mang4.int");
    DocFileTextVaoMang(arr5, n, "mang5.int");

    Dem(n, arr1, arr2, arr3, arr4, arr5, 1);
    Dem(n, arr1, arr2, arr3, arr4, arr5, 2);
    Dem(n, arr1, arr2, arr3, arr4, arr5, 3);
    Dem(n, arr1, arr2, arr3, arr4, arr5, 4);
    Dem(n, arr1, arr2, arr3, arr4, arr5, 5);
    return 0;
}

int GhiMangVaoFile(int n)
{
    srand(time(NULL));
    ofstream f;
    for (int i = 0; i < 5; i++)
    {
        f.open(address + fileName[i]);
        if (f.fail())
        {
            cout << "error";
            return 0;
        }
        int dem = 0;
        while (dem < n)
        {
            f << 1 + rand() % 50000 << " ";
            dem++;
        }
        f.close();
    }
    return 1;
}

int DocFileTextVaoMang(int a[], int &n, string file)
{
    fstream f;
    f.open(address + file, ios_base::in);
    if (f.fail())
    {
        return 0;
    }
    int i = 0;
    while (!f.eof())
    {
        f >> a[i];
        i++;
    }
    n = i;
    f.close();
    return 1;
}

void xuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << endl;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void chonTrucTiep(int arr[], int n, int &soSanh, int &hoanVi)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
            {
                min = j;
                soSanh++;
            }
        if (min != i)
        {
            swap(arr[min], arr[i]);
            soSanh++;
            hoanVi++;
        }
    }
}

void chenTrucTiep(int arr[], int n, int &soSanh, int &hoanVi)
{
    int pos, x;
    for (int i = 0; i < n - 1; i++)
    {
        pos = i;
        x = arr[i + 1];
        while (pos > 0 && arr[pos] > x)
        {
            arr[pos + 1] = arr[pos];
            pos--;
            soSanh++;
            hoanVi++;
        }
        arr[pos + 1] = x;
    }
}

void DoiChoTrucTiep(int arr[], int n, int &soSanh, int &hoanVi)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
                soSanh++;
                hoanVi++;
            }
}

void NoiBot(int arr[], int n, int &soSanh, int &hoanVi)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; j > i; j--)
            if (arr[j] > arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                soSanh++;
                hoanVi++;
            }
}

void SapXepNhanh(int arr[], int left, int right, int &soSanh, int &hoanVi)
{
    int i, j, mid;
    if (left >= right)
        return;
    soSanh++;
    i = left;
    j = right;
    mid = arr[(left + right) / 2];
    do
    {
        while (arr[i] < mid)
            i++;
        while (arr[j] > mid)
            j--;
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
            soSanh++;
            hoanVi++;
        }
    } while (i < j);
    if (left < j)
    {
        SapXepNhanh(arr, left, j, soSanh, hoanVi);
        soSanh++;
    }
    if (i < right)
    {
        SapXepNhanh(arr, i, right, soSanh, hoanVi);
        soSanh++;
    }
}

void DemThoiGian(int name, int arr[], int n, int x)
{
    clock_t start, end;
    start = clock();
    int soLanSoSanh = 0;
    int soLanSwap = 0;
    switch (x)
    {
    case 1:
        chonTrucTiep(arr, n, soLanSoSanh, soLanSwap);
        break;
    case 2:
        chenTrucTiep(arr, n, soLanSoSanh, soLanSwap);
        break;
    case 3:
        DoiChoTrucTiep(arr, n, soLanSoSanh, soLanSwap);
        break;
    case 4:
        NoiBot(arr, n, soLanSoSanh, soLanSwap);
        break;
    case 5:
        SapXepNhanh(arr, 0, n - 1, soLanSoSanh, soLanSwap);
        break;
    }
    end = clock();
    double t = (double)(end - start);
    printf("%d\t%.2lf\t\t%d\t\t%d\n", name, t, soLanSoSanh, soLanSwap);
}

void Dem(int n, int arr1[], int arr2[], int arr3[], int arr4[], int arr5[], int luachon)
{
    switch (luachon)
    {
    case 1:
        cout << "Sap Xep Chon Truc Tiep\n";
        break;
    case 2:
        cout << "Sap Xep Chen Truc Tiep\n";
        break;
    case 3:
        cout << "Sap Xep Doi Cho Truc Tiep\n";
        break;
    case 4:
        cout << "Sap Xep Noi Bot\n";
        break;
    case 5:
        cout << "Sap Xep nhanh (Quick Sort)\n";
    }
    cout << "Mang\t"
         << "Thoi Gian Chay\t"
         << "So Lan So Sanh\t"
         << "So Lan Hoan Vi\n";
    DemThoiGian(1, arr1, n, luachon);
    DemThoiGian(2, arr2, n, luachon);
    DemThoiGian(3, arr3, n, luachon);
    DemThoiGian(4, arr4, n, luachon);
    DemThoiGian(5, arr5, n, luachon);
}