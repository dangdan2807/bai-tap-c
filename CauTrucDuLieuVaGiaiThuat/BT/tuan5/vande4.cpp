#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

typedef struct Node
{
    int data;
    Node *link;
} node, NODE;

typedef struct List
{
    Node *first, *last;
} LIST;

void init(List &l);
Node *getNode(int x);
void addLast(List &l, Node *temp);
void InsertLast(List &l, int x);
void NhapDS(List &l);
void XuatDS(List l);

int RemoveFirst(List &l);
int RemoveAfter(List &l, Node *q);
Node *timXoa(List &l, int x);
int RemoveX(List &l, int x);

int main(int argc, char const *argv[])
{
    int temp;
    List l;
    init(l);
    NhapDS(l);
    XuatDS(l);
    cout << "\nXoa phan tu co gia tri la 10";
    temp = RemoveX(l, 10);
    if (temp == 1)
        cout << "\nXoa thanh cong";
    else
        cout << "\nXoa khong thanh cong";
    XuatDS(l);

    cout << "\nXoa phan tu co gia tri la 6";
    temp = RemoveX(l, 6);
    if (temp == 1)
        cout << "\nXoa thanh cong\n";
    else
        cout << "\nXoa khong thanh cong\n";
    XuatDS(l);

    cout << "\nXoa phan tu co gia tri la 15";
    temp = RemoveX(l, 15);
    if (temp == 1)
        cout << "\nXoa thanh cong\n";
    else
        cout << "\nXoa khong thanh cong\n";
    XuatDS(l);

    cout << "\nXoa phan tu co gia tri la 10";
    temp = RemoveX(l, 10);
    if (temp == 1)
        cout << "\nXoa thanh cong\n";
    else
        cout << "\nXoa khong thanh cong\n";
    XuatDS(l);
    return 0;
}

void init(List &l)
{
    l.first = l.last = NULL;
}

Node *getNode(int x)
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

void InsertLast(List &l, int x)
{
    Node *temp = getNode(x);
    if (temp == NULL)
    {
        return;
    }
    addLast(l, temp);
}

void NhapDS(List &l)
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    int x;
    // int x2[] = {6, 3, 5, 10, 25, 7, 1, 2, 9, 15};
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> x;
        InsertLast(l, x);
    }
    cout << "\nKet thuc nhap danh sach";
}

void XuatDS(List l)
{
    cout << "\nXUAT DANH SACH: \n";
    for (Node *i = l.first; i != NULL; i = i->link)
    {
        cout << i->data << " ";
    }
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

Node *timXoa(List &l, int x)
{
    for (Node *i = l.first; i != NULL; i = i->link)
    {
        if(i->link == NULL)
            break;
        if ((i != NULL) && (x == i->link->data))
            return i;
    }
    return NULL;
}

int RemoveX(List &l, int x)
{
    int re;
    if ((l.first->data) == x)
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
