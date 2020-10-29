#include <iostream>
#include <algorithm>

using namespace std;

typedef struct Node
{
    int data;
    Node *pNext;
} node;

typedef struct List
{
    Node *pHead, *pTail;
} list;

void init(List &l);
Node *getNode(int x);
void addLast(List &l, Node *temp);
void insertLast(List &l, int x);
void addFirst(List &l, Node *newNode);
void insertFirst(List &l, int x);
void addAfter(List &l, Node *q, Node *temp);
Node *Search(List l, int x);
int removeHead(List &l);
int removeAfter(List &l, Node *q);
void RemoveList(List &l);
int CountNodes(List l);
// Trích phần tử đầu danh sách
Node *PickHead(List &l);
void InterChangeSort(List &l);
void SelectionSort(List &l);
void BubleSort(List &l);
// Nối 2 danh sách
void SListAppend(List &l, List &l2);
void SListQSort(List &l);

int main(int argc, char const *argv[])
{

    return 0;
}

void init(List &l)
{
    l.pHead = l.pTail = NULL;
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
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = temp;
    }
    else
    {
        l.pTail->link = temp;
        l.pTail = temp;
    }
}

void insertLast(List &l, SinhVien x)
{
    Node *temp = getNode(x);
    if (temp == NULL)
    {
        return;
    }
    addLast(l, temp);
}

void addFirst(List &l, Node *newNode)
{
    if (l.pHead == NULL) //Danh sách rỗng
    {
        l.pHead = newNode;
        l.pTail = l.pHead;
    }
    else
    {
        newNode->link = l.pHead;
        l.pHead = newNode;
    }
}

void insertFirst(List &l, int x)
{
    Node *newNode = GetNode(x);
    if (newNode == NULL)
        return;
    AddFirst(l, newNode);
}

void addAfter(List &l, Node *q, Node *temp)
{
    if (q != NULL)
    {
        temp->pNext = q->pNext;
        p->pNext = temp;
        if (q == l.pTail)
            l.pTail = temp;
    }
}

Node *Search(List l, int x)
{
    for (Node *i = l.pHead; i != NULL; i = i->pNext)
    {
        if (p->pNext == i)
            return i;
    }
    return NULL;
}

int removeHead(List &l)
{
    if (l.pHead == NULL)
        return 0;
    Node *p = l.pHead;
    l.pHead = p->pNext;
    if (l.pHead == NULL)
        l.pTail = NULL; //Nếu danh sách rỗng
    delete p;
    return 1;
}

int removeAfter(List &l, Node *q)
{
    if (q != NULL && q->pNext != NULL)
    {
        Node *p = q->pNext;
        q->pNext = p->pNext;
        if (p == l.pTail)
            l.pTail = q;
        delete p;
        return 1;
    }
    else
        return 0;
}

int removeNode(List &l, int k)
{
    Node *p = l.pHead;
    Node *q = NULL;
    while (p != NULL)
    {
        if (p->data == k)
            break;
        q = p;
        p = p->pNext;
    }
    if (p == NULL)
    {
        cout <<“Không tìm thấy k”;
        return 0;
    }
    else if (q == NULL)
    {
        // thực hiện xóa phần tử đầu ds là p
        removeHead(l, p);
    }
    else
    { 
        // thực hiện xóa phần tử p sau q
        removeAfter(l, q)
    }
}

void RemoveList(List &l)
{
    // Node *p;
    // while (l.pHead != NULL)
    // {
    //     p = l.pHead;
    //     l.pHead = p->pNext;
    //     delete p;
    // }
    for (Node *i = l.pHead; l.pHead != NULL; l.pHead = i->pNext)
    {
        i = l.pHead;
        delete i;
    }
    l.pTail = NULL;
}

int CountNodes(List l)
{
    int count = 0;
    for (Node *i = l.pHead; i != NULL; i = i->pNext)
    {
        count++;
    }
    return count;
}

Node *PickHead(List &l)
{
    Node *p = NULL;
    if (l.pHead != NULL)
    {
        p = l.pHead;
        l.pHead = l.pHead->pNext;
        p->pNext = NULL;
        if (l.pHead == NULL)
            l.pTail = NULL;
    }
    return p;
}

void InterChangeSort(List &l)
{
    for (Node *i = l.pHead; i != l.pTail; i = i->pNext)
        for (Node *q = i->.pNext; q != NULL; q = q->.pNext)
            if (i->data > q->data)
                Swap(i->data, q->data);
}

void SelectionSort(List &l)
{
    for (Node *i = l.pHead; i != l.pTail; i = i->pNext)
    {
        Node *min = i;
        for (Node *q = i->pNext; q != NULL; q = q->pNext)
            if (min->data > q->data)
                min = q;
        Swap(min->data, i->data);
    }
}

void BubleSort(List &l)
{
    Node *t = l.pTail;
    for (Node *i = l.pHead; i != NULL; i = i->pNext)
    {
        Node *t1;
        for (Node *j = l.pHead; i != t; j = j->pNext)
        {
            if (j->data > j->pNext->data)
                Swap(j->data, j->pNext->data);
            t1 = j;
        }
        t = t1;
    }
}

void SListAppend(List &l, List &l2)
{
    if (l2.pHead == NULL)
        return;
    if (l.pHead == NULL)
        l = l2;
    else
    {
        l.pHead->pNext = l2.pHead;
        l.pTail = l2.pTail;
    }
    Init(l2);
}

void SListQSort(List &l)
{
    Node *X, *p;
    List l1, l2;
    if (l.pHead == l.pTail)
        return;
    Init(l1);
    Init(l2);
    X = l.pHead;
    l.pHead = x->pNext;
    while (l.pHead != NULL)
    {
        p = l.pHead;
        if (p->data <= X->data)
            AddFirst(l1, p);
        else
            AddFirst(l2, p);
    }
    SListQSort(l1);
    SListQSort(l2);
    SListAppend(l, l1);
    AddFirst(l, X);
    SListAppend(l, l2);
}