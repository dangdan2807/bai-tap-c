#include <iostream>
#include <stdio.h>

using namespace std;

// định nghĩa các node, list
typedef struct Node
{
    int data;
    Node *pNext;
} node;

typedef struct List
{
    Node *pHead, *pTail;
} list;

// các hàm của chương trình
void createList(List &l);
Node *createNode(int x);
void addHead(List &l, Node *newNode);
void addTail(List &l, Node *newNode);
void nhapList(List &l);
void xuatList(List l);

// Hàm main
int main(int argc, char const *argv[])
{
    List l;
    createList(l);
    nhapList(l);
    xuatList(l);
    return 0;
}

// Định nghĩa các hàm đã khai báo
void createList(List &l)
{
    l.pHead = l.pTail = NULL;
}

Node *createNode(int x)
{
    Node *p = new Node;
    if (p == NULL)
    {
        cout << "\nKhong du bo nho!!!!";
        return NULL;
    }
    p->data = x;
    p->pNext = NULL;
    return p;
}

void addHead(List &l, Node *newNode)
{
    if (l.pHead == NULL)
        l.pHead = l.pTail = newNode;
    else
    {
        newNode->pNext = l.pHead;
        l.pHead = newNode;
    }
}

void addTail(List &l, Node *newNode)
{
    if (l.pHead == NULL)
        l.pHead = l.pTail = newNode;
    else
    {
        l.pTail->pNext = newNode;
        l.pTail = newNode;
    }
}

void nhapList(List &l)
{
    int n, x;
    cout << "Nhap n so nguyen: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap so nguyen thu " << i + 1 << ": ";
        cin >> x;
        Node *p = createNode(x);
        addTail(l, p);
    }
}

void xuatList(List l)
{
    for (Node *i = l.pHead; i != NULL; i = i->pNext)
        cout << i->data << " ";
}