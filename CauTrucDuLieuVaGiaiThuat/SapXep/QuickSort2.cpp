#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

typedef struct sinhvien
{
    char maSV[10];
    char hoTen[20];
    float diemTB;
} SinhVien;

void nhapSV(SinhVien &x);
void nhapDS(SinhVien ds[], int &n);
void xuatSV(SinhVien x);
void xuatDS(SinhVien ds[], int n);
int phanDoan(SinhVien ds[], int l, int h);
void quickSort(SinhVien ds[], int l, int h);

int main(int argc, char const *argv[])
{
    SinhVien ds[100];
    int n = 1;
    nhapDS(ds, n);
    xuatDS(ds, n);
    quickSort(ds, 0, n - 1);
    xuatDS(ds, n);
    return 0;
}

void nhapSV(SinhVien &x)
{
    cout << "\nNhap maSV: ";
    fflush(stdin);
    cin.getline(x.maSV, 10);
    cout << "Nhap ho ten sinh vien: ";
    fflush(stdin);
    cin.getline(x.hoTen, 20);
    cout << "Nhap diem TB: ";
    cin >> x.diemTB;
}

void nhapDS(SinhVien ds[], int &n)
{
    int check = 0;
    cout << "1. Nhap tu dong";
    cout << "\n2. Nhap thu cong";
    cout << "\nNhap: ";
    cin >> check;
    if (check == 1)
    {
        SinhVien s0 = {"SV02", "E", 9};
        SinhVien s1 = {"SV03", "B", 7};
        SinhVien s2 = {"SV05", "D", 10};
        SinhVien s3 = {"SV01", "A", 9};
        SinhVien s4 = {"SV04", "C", 3};
        ds[0] = s0;
        ds[1] = s1;
        ds[2] = s2;
        ds[3] = s3;
        ds[4] = s4;
        n = 5;
        return;
    }
    cout << "Nhap so luong sinh vien can them: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ": ";
        nhapSV(ds[i]);
    }
}

void xuatSV(SinhVien x)
{
    printf("%-10s %-20s %-10.2f\n", x.maSV, x.hoTen, x.diemTB);
}

void xuatDS(SinhVien ds[], int n)
{
    cout << "Xuat DS thong tin sinh vien:\n";
    for (int i = 0; i < n; i++)
    {
        xuatSV(ds[i]);
    }
}

int phanDoan(SinhVien ds[], int l, int h)
{
    char pivot[10];
    strcpy(pivot, ds[h].maSV);
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (strcmp(ds[j].maSV, pivot) < 0)
        {
            i++;
            swap(ds[i], ds[j]);
        }
    }
    swap(ds[i + 1], ds[h]);
    return i + 1;
}

void quickSort(SinhVien ds[], int l, int h)
{
    if (l < h)
    {
        int pi = phanDoan(ds, l, h);
        quickSort(ds, l, pi - 1);
        quickSort(ds, pi + 1, h);
    }
}