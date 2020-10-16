#include <iostream>
#include <stdio.h>

using namespace std;

// định nghĩa các node, list
typedef struct sv {
    int mssv;
    string name;
}SV;

typedef struct Node
{
    sv data;
    Node *pNext;
} node;

typedef struct List
{
    Node *first, *last;
} list;

void createList(List &l);
Node *createNode(int mssv, string name);
void addHead(List &l, Node *newNode);
void addTail(List &l, Node *newNode);
void nhapList(List &l);
void xuatList(List l);

int main(int argc, char const *argv[])
{
    List l;
    Node p;
    createList(l);
    addTail(l, createNode(15080351, "Nguyen Thu Thao"));
    addTail(l, createNode(15071861, "Cao Minh Hung"));
    addTail(l, createNode(15075991, "Ho Sy Minh Hong"));
    addTail(l, createNode(15074061, "Tran Van Phuc"));
    addTail(l, createNode(15093251, "Tran Chi Linh"));
    for (Node *i = l.first; i != NULL; i = i->pNext)
    {
        if (i->data.mssv == 15071861)
        {
            printf("%d", l.first);  // giá trị first = 0
            printf("\n%d", l.last); // giá trị last = 0
            printf("\n%d", i);
            printf("\n%d", i->data);
            printf("\n%d", i->pNext);
            printf("\n%d", i->pNext->data);
            printf("\n%d", i->pNext->pNext);
            printf("\n%d", i->pNext->pNext->data);
        }
    }
    printf("%d", l.first);  // giá trị first = 0
    printf("\n%d", l.last); // giá trị last = 0
    // nhapList(l);
    // xuatList(l);
    return 0;
}

// Định nghĩa các hàm đã khai báo
void createList(List &l)
{
    l.first = l.last = NULL;
}

Node *createNode(int mssv, string name)
{
    sv temp;
    temp.mssv = mssv;
    temp.name = name;
    Node *p = new Node;
    if (p == NULL)
    {
        cout << "\nKhong du bo nho!!!!";
        return NULL;
    }
    p->data = temp;
    p->pNext = NULL;
    return p;
}

void addHead(List &l, Node *newNode)
{
    if (l.first == NULL)
        l.first = l.last = newNode;
    else
    {
        newNode->pNext = l.first;
        l.first = newNode;
    }
}

void addTail(List &l, Node *newNode)
{
    if (l.first == NULL)
        l.first = l.last = newNode;
    else
    {
        l.last->pNext = newNode;
        l.last = newNode;
    }
}

void nhapList(List &l)
{
    int ms;
    string ten;
    for (int i = 0; i < 5; i++)
    {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << "\n";
        cout << "Nhap ma SV: ";
        cin >> ms;
        fflush(stdin);
        cout << "Nhap ho ten SV: ";
        getline(cin, ten);
        Node *p = createNode(ms, ten);
        addTail(l, p);
    }
}

void xuatList(List l)
{
    cout << "MSSV\tHo va Ten\n";
    for (Node *i = l.first; i != NULL; i = i->pNext)
        cout << i->data.mssv << "\t" << i->data.name << "\n";
}