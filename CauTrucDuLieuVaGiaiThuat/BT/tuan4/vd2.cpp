#include <iostream>

using namespace std;

typedef struct Node
{
    float heSo;
    int soMu;
    Node *link;
} node;

typedef struct List
{
    Node *first, *last;
} list;

void init(List &l);
Node *GetNode(float heSo, int soMu);
void AddLast(List &l, Node *temp);
void InsertLast(List &l, float heSo, int soMu);
void NhapDaThuc(List &l);
void xuatDanhSach(List l);
void CongDaThuc(List l1, List l2, list &l3);
// vd2
void Swap1(float &a, float &b);
void Swap2(int &a, int &b);
void InterchangeSort(List &l);

int main(int argc, char const *argv[])
{
    List l1, l2, l3;
    init(l1);
    init(l2);
    init(l3);
    NhapDaThuc(l1);
    cout << "\nDanh sach dien da thuc d1;";
    xuatDanhSach(l1);
    NhapDaThuc(l2);
    cout << "\nDanh sach bieu dien da thuc d2: ";
    xuatDanhSach(l2);
    CongDaThuc(l1, l2, l3);
    cout << "\nDanh sach bieu dien da thuc tong: ";
    xuatDanhSach(l3);

    cout << "\nSap xep danh sach da thuc tong:\n";
    InterchangeSort(l3);
    cout<< "\nDanh sach bieu thuc sau khi da sap xep";
    xuatDanhSach(l3);
    return 0;
}

void init(List &l)
{
    l.first = l.last = NULL;
}

Node *GetNode(float heSo, int soMu)
{
    Node *p;
    p = new Node;
    if (p == NULL)
        return NULL;
    p->heSo = heSo;
    p->soMu = soMu;
    p->link = NULL;
    return p;
}

void AddLast(List &l, Node *temp)
{
    if (l.first == NULL)
        l.first = l.last = temp;
    else
    {
        l.last->link = temp;
        l.last = temp;
    }
}

void InsertLast(List &l, float heSo, int soMu)
{
    Node *temp = GetNode(heSo, soMu);
    if (temp == NULL)
        return;
    AddLast(l, temp);
}

void NhapDaThuc(List &l)
{
    float heSo;
    int soMu;
    cout << "\nBat dau nhap da thuc(Nhap so 0 de ket thuc da thuc)\n";
    do
    {
        cout << "\nNhap he so: ";
        cin >> heSo;
        if (heSo == 0)
            break;
        cout << "Nhap so mu: ";
        cin >> soMu;
        InsertLast(l, heSo, soMu);
    } while (heSo != 0);
    cout << "\nDa thuc da nhap xong: \n";
}

void xuatDanhSach(List l)
{
    Node *p;
    p = l.first;
    cout << endl;
    while (p != NULL)
    {
        // cout << p->heSo << " " << p->soMu << " ";
        printf("%.0f, %d\t", p->heSo, p->soMu);
        p = p->link;
    }
}

void CongDaThuc(List l1, List l2, list &l3)
{
    init(l3);
    Node *p = l1.first, *q = l2.first;
    float tongHeSo;
    while (p && q)
    {
        if (p->soMu == q->soMu)
        {
            tongHeSo = p->heSo + q->heSo;
            if (tongHeSo != 0)
                InsertLast(l3, tongHeSo, p->soMu);
            p = p->link;
            q = q->link;
        }
        else
        {
            if (p->soMu > q->soMu)
            {
                InsertLast(l3, p->heSo, p->soMu);
                p = p->link;
            }
            else
            {
                if (p->soMu < q->soMu)
                {
                    InsertLast(l3, q->heSo, q->soMu);
                    q = q->link;
                }
            }
        }
    }
    while (q)
    {
        InsertLast(l3, q->heSo, q->soMu);
        q = q->link;
    }

    while (p)
    {
        InsertLast(l3, p->heSo, p->soMu);
        p = p->link;
    }
}

// vd2

void Swap1(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

void Swap2(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void InterchangeSort(List &l)
{
    for (Node* i = l.first; i != l.last; i = i->link)
    {
        for (Node* j = i->link; j != NULL; j = j->link)
        {
            if(i->soMu > j->soMu)
            {
                Swap1(i->heSo, j->heSo); // hoán vị 2 số thực
                Swap2(i->soMu, j->soMu); // hoán vị 2 số nguyên
            }
        }
        
    }
    
}