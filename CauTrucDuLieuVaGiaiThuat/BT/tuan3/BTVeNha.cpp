#include <stdio.h>
#include <iostream>

using namespace std;

typedef struct Node
{
    int data;
    Node *link;
} node;

typedef struct List
{
    Node *first, *last;
} List;

void init(List &l);
Node *GetNode(int x);
void AddFirst(List &l, Node *p);
void InsertFirst(List &l, int x);
void CreateListFirst(List &l);
void PrintList(List l);
void PrintListAddress(List l);
void PrintListFull(List l);
long SumEvenNumber(List l);
Node *Search(List l, int x);
// bài tập về nhà
void AddLast(List &l, Node *p);
void InsertLast(List &l, Node *p);
void CreateListLast(List &l, int n);

int main(int argc, char const *argv[])
{
    int x, n;
    List l;
    init(l);
    // CreateListFirst(l);
    cout << "nhap so luong so nguyen: ";
    cin >> n;
    CreateListLast(l, n);
    PrintList(l);
    PrintListAddress(l);
    PrintListFull(l);
    cout << "\nTong cua cac so chan: " << SumEvenNumber(l);
    cout << "\nNhap gia tri so nguyen can tim: ";
    cin >> x;
    Node *temp = Search(l, x);
    if (temp == NULL)
        cout << "khong tim thay";
    else
        cout << "| " << temp << " | " << temp->data << " |";
    return 0;
}

void init(List &l)
{
    l.first = l.last = NULL;
}

Node *GetNode(int x)
{
    Node *p = new Node;
    if (p == NULL)
        return NULL;
    p->data = x;
    p->link = NULL;
    return p;
}

void AddFirst(List &l, Node *p)
{
    if (l.first == NULL) //Danh sách rỗng
    {
        l.first = p;
        l.last = l.first;
    }
    else
    {
        p->link = l.first;
        l.first = p;
    }
}

void InsertFirst(List &l, int x)
{
    Node *newNode = GetNode(x);
    if (newNode == NULL)
        return;
    AddFirst(l, newNode);
}

void CreateListFirst(List &l)
{
    int x;
    do
    {
        cout << "\nBat dau nhap danh sach cac so nguyen, nhap -1 de ket thuc: \n";
        cin >> x;
        if (x == -1)
            return;
        InsertFirst(l, x);
    } while (x != -1);
    cout << "\nDa nhap du lieu xong: \n";
}

void PrintList(List l)
{
    cout << endl;
    Node *p;
    p = l.first;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->link;
    }
}

void PrintListAddress(List l)
{
    cout << endl;
    Node *p;
    p = l.first;
    while (p != NULL)
    {
        cout << p << " ";
        p = p->link;
    }
}

void PrintListFull(List l)
{
    cout << endl;
    Node *p;
    p = l.first;
    while (p != NULL)
    {
        cout << "| " << p << " | " << p->data << " |" << " -> ";
        p = p->link;
    }
}

long SumEvenNumber(List l)
{
    int sum = 0;
    for (Node *i = l.first; i != NULL; i = i->link)
        if (i->data % 2 == 0)
            sum += i->data;
    return sum;
}

Node *Search(List l, int x)
{
    for (Node *i = l.first; i != NULL; i = i->link)
        if (x == i->data)
            return i;
    return NULL;
}
// bài tập về nhà
void AddLast(List &l, Node *p)
{
    if (l.first == NULL)
        l.first = l.last = p;
    else
    {
        l.last->link = p;
        l.last = p;
    }
}

void InsertLast(List &l, Node *p)
{
    if (p == NULL)
        return;
    AddLast(l, p);
}

void CreateListLast(List &l, int n)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap gia tri so nguyen: ";
        cin >> x;
        Node *p = GetNode(x);
        InsertLast(l, p);
    }
    cout << "\nDa nhap du lieu xong: \n";
}