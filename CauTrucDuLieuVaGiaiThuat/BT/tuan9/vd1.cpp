#include <iostream>
#include <algorithm>    // max()
#include <cmath>        // abs()
using namespace std;

typedef struct Node
{
    int baiFactor;
    int data;
    Node *pLeft, *pRight;
} node;
typedef Node *Tree;

Node *createNode(int x);
void themNodeVaoCay(Node *p, Tree &t);
void nhap(Tree &t);
void xuat(Tree t);
int treeLevel(Tree t);
bool checkAvl(Tree t);

// ============================================
int main(int argc, char const *argv[])
{
    Tree t = NULL;
    nhap(t);
    cout << "\nXuat danh sach theo LNR: ";
    xuat(t);
    bool check = checkAvl(t);
    if (check == true)
        cout << "\n Cay can bang";
    else
        cout << "\nCay khong can bang";
    return 0;
}

// ============================================
Node *createNode(int x)
{
    Node *p = new Node;
    if (p == NULL)
        return NULL;
    p->data = x;
    p->pLeft = NULL;
    p->pRight = NULL;
    return p;
}

void themNodeVaoCay(Node *p, Tree &t)
{
    if (t == NULL)
        t = p;
    else
    {
        if (p->data < t->data)
            themNodeVaoCay(p, t->pLeft);
        else if (p->data > t->data)
            themNodeVaoCay(p, t->pRight);
        else
            return;
    }
}

void nhap(Tree &t)
{
    cout << "\nNhap so luong phan tu can them: ";
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap x: ";
        cin >> x;
        Node *p = createNode(x);
        themNodeVaoCay(p, t);
    }
}

void xuat(Tree t)
{
    if (t != NULL)
    {
        if (t->pLeft != NULL)
            xuat(t->pLeft);
        cout << t->data << " ";
        if (t->pRight != NULL)
            xuat(t->pRight);
    }
}

int treeLevel(Tree t)
{
    if(t == NULL)
        return -1;
    return 1 + max(treeLevel(t->pLeft), treeLevel(t->pRight)); 
}

bool checkAvl(Tree t)
{
    if(t == NULL)
        return true;
    if(abs(treeLevel(t->pLeft) - treeLevel(t->pRight)) > 1)
        return false;
    return (checkAvl(t->pLeft) && checkAvl(t->pRight));
}