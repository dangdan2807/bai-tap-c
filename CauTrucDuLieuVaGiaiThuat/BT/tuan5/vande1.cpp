#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

typedef struct Ngay
{
    int ngay, thang, nam;
} date, NGAY, Date, DATE;

typedef struct SinhVien
{
    char maSV[8];
    char hoTen[50];
    int gioiTinh;
    Ngay ngaySinh;
    char diaChi[100];
    char lop[12];
    char khoa[7];
} SV, sv;

typedef struct Node
{
    SinhVien data;
    Node *link;
} node, NODE;

typedef struct List
{
    Node *first, *last;
} DS, ds;

void init(List &l);
Node *getNode(SinhVien x);
void addLast(List &l, Node *temp);
void InsertLast(List &l, SinhVien x);
void NhapSinhVien(SinhVien &x);
void NhapDSSV(List &l);
void XuatSinhVien(SinhVien s);
void XuatDSSV(List l);

int main(int argc, char const *argv[])
{
    List l;
    init(l);
    NhapDSSV(l);
    XuatDSSV(l);
    return 0;
}

void init(List &l)
{
    l.first = l.last = NULL;
}

Node *getNode(SinhVien x)
{
    Node *p = new Node;
    if (p == NULL)
    {
        return NULL;
    }
    p->data = x;
    p->link = NULL;
    return p;
}

void addLast(List &l, Node *temp)
{
    if (l.first == NULL)
    {
        l.first = l.last = temp;
    }
    else
    {
        l.last->link = temp;
        l.last = temp;
    }
}

void InsertLast(List &l, SinhVien x)
{
    Node *temp = getNode(x);
    if (temp == NULL)
    {
        return;
    }
    addLast(l, temp);
}

void NhapSinhVien(SinhVien &x)
{
    cout << "\nNhap ma sinh vien: ";
    fflush(stdin);
    gets(x.maSV);
    cout << "Nhap ho va ten: ";
    fflush(stdin);
    gets(x.hoTen);
    cout << "Gioi tinh (1 - Nam/0 - Nu): ";
    cin >> x.gioiTinh;
    cout << "Nhap ngay, thang, nam sinh(so nguyen): ";
    cin >> x.ngaySinh.ngay >> x.ngaySinh.thang >> x.ngaySinh.nam;
    cout << "Nhap dia chi: ";
    fflush(stdin);
    gets(x.diaChi);
    cout << "Nhap lop: ";
    fflush(stdin);
    gets(x.lop);
    cout << "Nhap khoa: ";
    fflush(stdin);
    gets(x.khoa);
}

void NhapDSSV(List &l)
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien x;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap sinh vien thu " << i + 1 << ": ";
        NhapSinhVien(x);
        InsertLast(l, x);
    }
    cout << "\nKet thuc nhap danh sach sinh vien";
}

void XuatSinhVien(SinhVien s)
{
    string gt = "";
    if (s.gioiTinh == 1)
        gt += "Nam";
    else
        gt += "Nu";
#if __STDC_WANT_LIB_EXT1__ == 1
    printf_s("\n%-10s %-20s %d/%d/%d \t %-12s %-40s %-8s %-8s", s.maSV, s.hoTen, s.ngaySinh.ngay, s.ngaySinh.thang, s.ngaySinh.nam, gt.c_str(), s.diaChi, s.khoa, s.lop);
#else
    printf("\n%-10s %-20s %d/%d/%d \t %-12s %-40s %-8s %-8s", s.maSV, s.hoTen, s.ngaySinh.ngay, s.ngaySinh.thang, s.ngaySinh.nam, gt.c_str(), s.diaChi, s.khoa, s.lop);
#endif
}

void XuatDSSV(List l)
{
    cout << "\nXUAT DANH SACH SINH VIEN: \n";
    printf("\n%-10s %-20s %-13s \t %-12s %-40s %-8s %-8s", "Ma SV", "Ho Ten", "Ngay Sinh", "Gioi Tinh", "Dia Chi", "Khoa", "Lop");
    for (Node *i = l.first; i != NULL; i = i->link)
    {
        XuatSinhVien(i->data);
    }
}