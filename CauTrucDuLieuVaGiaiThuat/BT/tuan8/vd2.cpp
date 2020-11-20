#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <stdlib.h>
using namespace std;

typedef struct item
{
    char masv[20];
    char name[20];
    double diem;
} Item;

typedef struct Node
{
    Node *pLeft, *pRight;
    item key;
} node;
typedef Node *Tree;

int compare(item x, item y);
Node *getNode(item x);
int insertNode(Tree *t, Node *p);
void nhapSV(item &x);
void chenNode(Tree &t);
void nhapDS(Tree &t);
void xuatSV(item x);
void xuatDS(Tree c);

bool laNodeLa(Tree t);
int countSoNodeLa(Tree t);
int chieuCaoCay(Tree t);
Node *timKiem(Tree t, char masv[20]);
int xoaNode(Tree &t, char masv[20]);

void menu();

// ===================================
int main(int argc, char const *argv[])
{
    Tree t = NULL;
    Node *p;
    char temp[20];
    int luaChon, check;
    do
    {
        menu();
        cin >> luaChon;

        switch (luaChon)
        {
        case 0:
            cout << "\nKet thuc chuong trinh";
            break;
        case 1:
            nhapDS(t);
            cout << "\nNhap phim bat ky de tiep tuc .....";
            fflush(stdin);
            getchar();
            break;
        case 2:
            printf("%-15s %-20s %-15s\n", "Ma SV", "Name", "diem");
            xuatDS(t);
            cout << "\nNhap phim bat ky de tiep tuc .....";
            fflush(stdin);
            getchar();
            break;
        case 3:
            // cout << "\nSo nut la: " << countSoNodeLa(t);
            cout << "\nSo nut la: " << countSoNodeLa(t);
            cout << "\nNhap phim bat ky de tiep tuc .....";
            fflush(stdin);
            getchar();
            break;
        case 4:
            cout << "\nChieu cao cua cay: " << chieuCaoCay(t);
            cout << "\nNhap phim bat ky de tiep tuc .....";
            fflush(stdin);
            getchar();
            break;
        case 5:
            cout << "\nChen sinh vien vao danh sach: ";
            chenNode(t);
            cout << "\nNhap phim bat ky de tiep tuc .....";
            fflush(stdin);
            getchar();
            break;
        case 6:
            cout << "\nTim sinh vien";
            cout << "\nNhap masv can tim: ";
            fflush(stdin);
            cin.getline(temp, 20);
            p = timKiem(t, temp);
            xuatSV(p->key);
            cout << "\nNhap phim bat ky de tiep tuc .....";
            fflush(stdin);
            getchar();
            break;
        case 7:
            cout << "\nXoa sinh vien";
            do
            {
                cout << "\nNhap -1 de thoat khoi tinh nang";
                cout << "\nNhap masv can xoa: ";
                fflush(stdin);
                cin.getline(temp, 20);
                if (strcmp(temp, "") == 0)
                    cout << "\nmasv khong duoc bo trong";
            } while (strcmp(temp, "") == 0);

            if (strcmp(temp, "-1") == 0)
                break;

            check = xoaNode(t, temp);
            if (check == 1)
                cout << "\nxoa thanh cong";
            else
                cout << "\nkhong tim thay sinh vien";
            cout << "\nNhap phim bat ky de tiep tuc .....";
            fflush(stdin);
            getchar();
            break;
        default:
            cout << "\nLua chon khong hop le";
            cout << "\nNhap phim bat ky de tiep tuc .....";
            fflush(stdin);
            getchar();
            break;
        }
    } while (luaChon != 0);

    return 0;
}

// ===================================
int compare(item x, item y)
{ // so sanh 2 item theo key
    return strcmp(x.masv, y.masv);
}

Node *getNode(item x)
{
    Node *p = new Node;
    if (p == NULL)
        return NULL;
    p->pLeft = NULL;
    p->pRight = NULL;
    p->key = x;
    return p;
}

int insertNode(Tree &t, item x)
{
    if (t == NULL)
    {
        t = new Node;
        t->key = x;
        t->pLeft = NULL;
        t->pRight = NULL;
        return 1;
    }
    else if (t != NULL)
    {
        if (compare(t->key, x) == 0)
            return -1;
        else if (compare(t->key, x) < 0)
            return insertNode(t->pLeft, x);
        else
            return insertNode(t->pRight, x);
    }
    return -1;
}

void nhapSV(item &x)
{
    fflush(stdin);
    cout << "\nNhap ma sv: ";
    cin >> x.masv;

    fflush(stdin);
    cout << "Nhap ho va ten: ";
    cin.getline(x.name, 20);

    cout << "Nhap diem: ";
    cin >> x.diem;
}

void chenNode(Tree &t)
{
    item x;
    int kt = 0;
    do
    {
        nhapSV(x);
        kt = insertNode(t, x);
        if (kt == -1)
            cout << "\nMa SV da ton tai !!!";
        else
            cout << "\nthem SV thanh cong";

    } while (kt != 1);
}

void nhapDS(Tree &t)
{
    cout << "\n1. nhap tu dong: ";
    cout << "\n2. nhap thu cong: ";
    cout << "\nNhap lua chon: ";
    int c;
    cin >> c;
    if (c == 1)
    {
        // test case
        item sv1 = {"1", "Nguyen Van A", 10};
        item sv2 = {"2", "Nguyen Van B", 9};
        item sv3 = {"3", "Nguyen Van C", 7};
        item sv4 = {"4", "Nguyen Minh E", 5};
        item sv5 = {"5", "Pham Dang F", 3};
        item sv6 = {"2", "Pham Dang F", 3};
        item sv7 = {"7", "Pham Dang F", 3};
        insertNode(t, sv4);
        insertNode(t, sv7);
        insertNode(t, sv2);
        insertNode(t, sv1);
        insertNode(t, sv3);
        insertNode(t, sv2);
        insertNode(t, sv5);
    }
    else
    {
        int chon = 0;
        cout << "\nNhap so luong SV can them: ";
        cin >> chon;
        for (int i = 0; i < chon; i++)
            chenNode(t);
    }
}

void xuatSV(item x)
{
    printf("%-15s %-20s %-15.2f\n", x.masv, x.name, x.diem);
}

void xuatDS(Tree c)
{
    if (c != NULL)
    {
        if (c->pLeft != NULL)
            xuatDS(c->pLeft);
        xuatSV(c->key);
        if (c->pRight != NULL)
            xuatDS(c->pRight);
    }
}

bool laNodeLa(Tree t)
{
    return (t->pLeft == NULL && t->pRight == NULL);
}

int countSoNodeLa(Tree t)
{
    if (t == NULL)
        return 0;
    if (laNodeLa(t))
        return 1;
    return countSoNodeLa(t->pLeft) + countSoNodeLa(t->pRight);
}

int chieuCaoCay(Tree t)
{
    if (t == NULL)
        return -1;
    return 1 + max(chieuCaoCay(t->pLeft), chieuCaoCay(t->pRight));
}

void menu()
{
    cout << "\n================ Menu =================";
    cout << "\n1. Nhap danh sach sinh vien";
    cout << "\n2. Xuat danh sach sinh vien";
    cout << "\n3. Dem so node la cua cay";
    cout << "\n4. Tinh chieu cao cua cay";
    cout << "\n5. Them mot sinh vien";
    cout << "\n6. Tim mot sinh vien";
    cout << "\n7. Xoa mot sinh vien";
    cout << "\nNhap lua chon: ";
}

Node *timKiem(Tree t, char masv[20])
{
    if (t != NULL)
    {
        if (strcmp(t->key.masv, masv) == 0)
            return t;
        else if (strcmp(t->key.masv, masv) < 0)
            return timKiem(t->pLeft, masv);
        else
            return timKiem(t->pRight, masv);
    }
    return NULL;
}

int xoaNode(Tree &t, char masv[20])
{
    if (t == NULL)
        return 0;
    else if (strcmp(t->key.masv, masv) > 0)
        return xoaNode(t->pRight, masv);
    else if (strcmp(t->key.masv, masv) < 0)
        return xoaNode(t->pLeft, masv);
    else
    {
        Node *p = t;
        if (t->pLeft == NULL)
            t = t->pRight;
        else if (t->pRight == NULL)
            t = t->pLeft;
        else
        {
            Node *s = t, *q = t->pLeft;
            while(q->pRight != NULL)
            {
                s = q;
                q = q->pRight;
            }
            p->key = q->key;
            s->pRight = q->pLeft;
            delete q;
        }
    }
    return 1;
}
