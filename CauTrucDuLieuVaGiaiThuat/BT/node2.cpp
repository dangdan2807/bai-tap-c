#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
using namespace std;

typedef struct Ngay
{
    int ngay, thang, nam;
} ngay;

typedef struct SinhVien
{
    int maSV;
    string hoTen;
    int gioiTinh;
    Ngay ngaySinh;
    float diemTB;
    string diaChi;
} SV, sv;

typedef struct Node
{
    SinhVien data;
    Node *link;
} node, NODE;

typedef struct List
{
    Node *first, *last;
} list;

void check_file(ofstream &file);
void init(List &l);
Node *getNode(SinhVien x);
void addFirst(List &l, Node *temp);
void addLast(List &l, Node *temp);
void InsertFirst(List &l, SinhVien x);               
void InsertAfter(List &l, Node *q, SinhVien x); 
void InsertLast(List &l, SinhVien x);
int InsertLast_KhongTrung(List &l, SinhVien x);
int Search(List l, int x);

void NhapSinhVien(SinhVien &x);
void NhapDSSV(List &l);        
void XuatSinhVien(SinhVien s); 
void XuatDSSV(List l);

void VietVaoFile(SinhVien x, ofstream &outFile);
void VietDSSVVaoFile(List l);

int RemoveFirst(List &l);
int RemoveAfter(List &l, Node *q);
Node *timXoa(List &l, string x);
int RemoveX(List &l, string x);
void interChangeSortList(List &l);

Node *timThem(List l, SinhVien x);
Node *timTheoTen(List l, string x);
void ThemCoThuTu(List &l, SinhVien x);
int ThemCoThuTu_KhongTrungMa(List &l, SinhVien x);

int main(int argc, char const *argv[])
{
    List l;
    init(l);
    NhapDSSV(l);
    XuatDSSV(l);
    VietDSSVVaoFile(l);

    cout << "\nnhap ten sinh vien can tim: ";
    string temp;
    fflush(stdin);
    getline(cin, temp);
    Node* p = timTheoTen(l, temp);
    XuatSinhVien(p->data);

    cout << "\nsap xep danh sach tang dan theo diem";
    interChangeSortList(l);
    XuatDSSV(l);

    cout << "\nnhap ten sinh vien can xoa: ";
    fflush(stdin);
    getline(cin, temp);
    int kq = RemoveX(l, temp);
    XuatDSSV(l);
    return 0;
}

void check_file(ofstream &file);

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

void addFirst(List &l, Node *temp)
{
    if (l.first == NULL) //Danh sách rỗng
    {
        l.first = temp;
        l.last = l.first;
    }
    else
    {
        temp->link = l.first;
        l.first = temp;
    }
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

void InsertFirst(List &l, SinhVien x)
{
    Node *temp = getNode(x);
    if (temp == NULL)
        return;
    addFirst(l, temp);
}

void InsertAfter(List &l, Node *q, SinhVien x)
{
    Node *temp = getNode(x);
    if(q!= NULL)
    {
        temp->link = q->link;
        q->link = temp;
        if(q == l.last)
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

int Search(List l, int x)
{
    for (Node *i = l.first; i != NULL; i = i->link)
    {
        if (i->data.maSV == x)
            return 1;
    }
    return 0;
}

void NhapSinhVien(SinhVien &x)
{
    cout << "\nNhap ma sinh vien: ";
    cin >> x.maSV;
    cout << "Nhap ho va ten: ";
    fflush(stdin);
    getline(cin, x.hoTen);
    cout << "Gioi tinh (1 - Nam/0 - Nu): ";
    cin >> x.gioiTinh;
    cout << "Nhap ngay, thang, nam sinh(so nguyen): ";
    cin >> x.ngaySinh.ngay >> x.ngaySinh.thang >> x.ngaySinh.nam;
    cout << "Nhap diem TB: ";
    cin >> x.diemTB;
    cout << "Nhap dia chi: ";
    fflush(stdin);
    getline(cin, x.diaChi);
}

void NhapDSSV(List &l)
{
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien x;
    //Case test nhanh
    SinhVien sv1 = {1, "A", 1, {20, 11, 2000}, 10, "test"};
    SinhVien sv2 = {2, "B", 1, {20, 11, 2000}, 9, "test"};
    SinhVien sv3 = {3, "C", 1, {20, 11, 2000}, 8, "test"};
    SinhVien sv4 = {4, "D", 1, {20, 11, 2000}, 5, "test"};
    SinhVien sv5 = {5, "E", 1, {20, 11, 2000}, 7, "test"};
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap sinh vien thu " << i + 1 << ": ";
        // NhapSinhVien(x);
        if (l.first == NULL)
            InsertLast_KhongTrung(l, sv1);
            // ThemCoThuTu(l, sv1);
        else
        {
            // ThemCoThuTu_KhongTrungMa(l, x);
            ThemCoThuTu_KhongTrungMa(l, sv5);
            ThemCoThuTu_KhongTrungMa(l, sv3);
            ThemCoThuTu_KhongTrungMa(l, sv4);
            ThemCoThuTu_KhongTrungMa(l, sv2);
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
    printf("\n%-10d %-20s %d/%d/%d \t %-12s %-10.2f %-40s", s.maSV, s.hoTen.c_str(), s.ngaySinh.ngay, s.ngaySinh.thang, s.ngaySinh.nam, gt.c_str(), s.diemTB, s.diaChi.c_str());
}

void XuatDSSV(List l)
{
    cout << "\nXUAT DANH SACH SINH VIEN: \n";
    printf("\n%-10s %-20s %-13s \t %-12s %-10s %-40s", "Ma SV", "Ho Ten", "Ngay Sinh", "Gioi Tinh", "Diem TB", "Dia Chi");
    for (Node *i = l.first; i != NULL; i = i->link)
    {
        XuatSinhVien(i->data);
    }
}

void VietVaoFile(SinhVien x, ofstream &outFile)
{
	outFile << x.maSV << "|";
	outFile << x.hoTen << "|";
	outFile << x.gioiTinh << "|";
	outFile << x.ngaySinh.ngay << "/" << x.ngaySinh.thang << "/" << x.ngaySinh.nam << "|";
	outFile << x.diemTB << "|";
	outFile << x.diaChi << endl;
}

void VietDSSVVaoFile(List l)
{
	ofstream outFile;
	outFile.open("data.txt", ios_base::out);
	// check_file(outFile);
	for (Node *i = l.first; i != NULL; i = i->link)
		VietVaoFile(i->data, outFile);
    outFile.close();
}

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

Node *timXoa(List &l, string x)
{
    Node *p = l.first;
    while (p != l.last && (p->link->data.hoTen.compare(x) != 0))
        p = p->link;
    if (p != l.last)
        return p;
    else
        return NULL;
}

int RemoveX(List &l, string x)
{
    int re;
    if (l.first->data.hoTen.compare(x) == 0)
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

void interChangeSortList(List &l)
{
    for (Node *i = l.first; i != NULL; i = i->link)
    {
        for (Node *j = i->link; j != NULL; j = j->link)
            if (i->data.diemTB < j->data.diemTB)
                swap(i->data, j->data);
    }
}

Node *timThem(List l, SinhVien x)
{
    Node *p = l.first;
    while (p != l.last && (p->link->data.maSV < x.maSV))
        p = p->link;
    return p;
}

Node *timTheoTen(List l, string x)
{
    for (Node *i = l.first; i != NULL; i = i->link)
    {
        if(i->data.hoTen.compare(x) == 0)
            return i;
    }
    return NULL;
}

void ThemCoThuTu(List &l, SinhVien x)
{
    if (x.maSV < l.first->data.maSV < 0)
        InsertFirst(l, x);
    else
    {
        Node *p = timThem(l, x);
        InsertAfter(l, p, x);
    }
}

int ThemCoThuTu_KhongTrungMa(List &l, SinhVien x)
{
    if(x.maSV == l.first->data.maSV)
        return 0;
    if(x.maSV < l.first->data.maSV)
    {
        InsertFirst(l, x);
        return 1;
    }
    Node *p = timThem(l, x);
    if(p->link == NULL)
    {
        InsertAfter(l, p, x);
        return 1;
    }
    if(p->link->data.maSV > x.maSV)
    {
        InsertAfter(l, p, x);
        return 1;
    }
    return 0;
}