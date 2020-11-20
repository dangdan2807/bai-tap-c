#include <iostream>
using namespace std;

struct Node
{
    Node *pLeft, *pRight;
    int data;
};

typedef Node *Tree;

// =============== Khao Bao Ham ===============
Node *getNode(int x);
void themNodeVaoCay(Node *p, Tree &c);
void nhap(Tree &c);
void xuat(Tree c);

// =============== Main ===============
int main(int argc, char const *argv[])
{
    Tree c = NULL;
    nhap(c);
    cout << "\nXuat cay LNR (Tang dan):\n ";
    xuat(c);
    return 0;
}

// =============== Dinh nghia ham ===============
Node *getNode(int x)
{
    Node *p = new Node;
    if (p == NULL)
        return NULL;
    p->pLeft = NULL;
    p->pRight = NULL;
    p->data = x;
    return p;
}

void themNodeVaoCay(Node *p, Tree &c)
{
    if (c == NULL)
        c = p;
    else
    {
        if (p->data < c->data)
            themNodeVaoCay(p, c->pLeft);
        else if (p->data > c->data)
            themNodeVaoCay(p, c->pRight);
        else
            return;
    }
}

void nhap(Tree &c)
{
    int chon = 0;
    cout << "\nNhap so luong phan tu can them: ";
    cin >> chon;
    for (int i = 0; i < chon; i++)
    {
        int x;
        cout << "\nNhap x: ";
        cin >> x;
        Node *p = getNode(x);
        themNodeVaoCay(p, c);
    }
}

void xuat(Tree c)
{
    if (c != NULL)
    {
        if (c->pLeft != NULL)
            xuat(c->pLeft);
        cout << c->data << " ";
        if (c->pRight != NULL)
            xuat(c->pRight);
    }
}