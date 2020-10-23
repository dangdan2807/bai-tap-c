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
// vấn đề 2
int InsertLast_KhongTrung(List &l, SinhVien x);
int Search(List l, char x[]);

void NhapSinhVien(SinhVien &x);
void NhapDSSV(List &l);
void XuatSinhVien(SinhVien s);
void XuatDSSV(List l);
// vấn đề 3
int RemoveFirst(List &l);
int RemoveAfter(List &l, Node *q);
Node *timXoa(List &l, char x[]);
int RemoveX(List &l, char x[]);

int main(int argc, char const *argv[])
{
    List l;
    init(l);
    NhapDSSV(l);
    XuatDSSV(l);
    cout << "\nNhap Ma SV can xoa: ";
    char x[8];
    fflush(stdin);
    gets(x);
    if (RemoveX(l, x) == 1)
        cout << "\nXoa thanh cong";
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
    //Case test nhanh
    // SinhVien sv1 = {"SV1", "SV1", 1, 20, 11, 2000, "test", "test", "test"};
    // SinhVien sv2 = {"SV2", "SV2", 1, 20, 11, 2000, "test", "test", "test"};
    // SinhVien sv3 = {"SV3", "SV3", 1, 20, 11, 2000, "test", "test", "test"};
    // SinhVien sv4 = {"SV4", "SV4", 1, 20, 11, 2000, "test", "test", "test"};
    // SinhVien sv5 = {"SV5", "SV5", 1, 20, 11, 2000, "test", "test", "test"};
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap sinh vien thu " << i + 1 << ": ";
        NhapSinhVien(x);
        if (l.first == NULL)
            InsertLast(l, x);
            // InsertLast_KhongTrung(l, sv1);
        else
        {
            InsertLast_KhongTrung(l, x);
            // InsertLast_KhongTrung(l, sv2);
            // InsertLast_KhongTrung(l, sv3);
            // InsertLast_KhongTrung(l, sv4);
            // InsertLast_KhongTrung(l, sv5);
        }
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

// các hàm của vấn đề 2
int Search(List l, char x[])
{
    for (Node *i = l.first; i != NULL; i = i->link)
    {
        if (strcmp(i->data.maSV, x) == 0)
            return 1;
    }
    return 0;
}

int InsertLast_KhongTrung(List &l, SinhVien x)
{
    if (Search(l, x.maSV) == 1)
    {
        cout << "\nMa sinh vien da ton tai!!!";
        return 0;
    }
    else
    {
        InsertLast(l, x);
        return 1;
    }
}

// Vấn đề 3
int RemoveFirst(List &l)
{
    if (l.first == NULL)
        return 0;
    Node *p = l.first;
    l.first = l.first->link;
    if (l.first == NULL)
        l.last = NULL;
    delete p;
    return 1;
}

int RemoveAfter(List &l, Node *q)
{
    if (q != NULL && q->link != NULL)
    {
        Node *p = q->link;
        q->link = p->link;
        if (p == l.first)
            l.last = q;
        delete p;
        return 1;
    }
    return 0;
}

Node *timXoa(List &l, char x[])
{
    Node *p = l.first;
    while (p != l.last && strcmp(p->link->data.maSV, x) != 0)
        p = p->link;
    if (p != l.last)
        return p;
    else
        return NULL;
}

int RemoveX(List &l, char x[])
{
    int re;
    if (strcmp(l.first->data.maSV, x) == 0)
    {
        RemoveFirst(l);
        re = 1;
    }
    else
    {
        Node *q = timXoa(l, x);
        if (q == NULL)
        {
            cout << "\nKhong tim thay phan tu can xoa";
            re = 0;
        }
        else
        {
            RemoveAfter(l, q);
            re = 1;
        }
    }
    return re;
}
