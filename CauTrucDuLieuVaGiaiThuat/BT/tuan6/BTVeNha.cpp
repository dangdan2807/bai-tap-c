#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;

typedef struct Node
{
    float data;
    Node *pNext;
} node;

typedef struct stack
{
    Node *top;
} Stack;

void init(stack &s);
int empty(stack &s);
void push(stack &s, float x);
float pop(stack &s);
void DocTu(char s[], char tu[], int &vt);
int LaToanTu(char s[]);
float tinhToan(float toanHang1, float toanHang2, char toanTu);
float tinhBieuThuc(stack &s, char bieuThuc[]);

int main(int argc, char const *argv[])
{
    stack s;
    init(s);
    char bieuThuc[100] = "";
    cout << "Nhap bieu thuc dang hau to: ";
    fflush(stdin);
    fgets(bieuThuc, 100, stdin);
    bieuThuc[strlen(bieuThuc) - 1] = '\0';
    float kq;
    kq = tinhBieuThuc(s, bieuThuc);
    cout << "\nGia tri cua bieu thuc la: " << kq;
    return 0;
}

void init(stack &s)
{
    s.top = NULL;
}

int empty(stack &s)
{
    return s.top == NULL ? 1 : 0;
}

void push(stack &s, float x)
{
    Node *p = new Node;

    if (p != NULL)
    {
        p->data = x;
        p->pNext = s.top;
        s.top = p;
    }
}

float pop(stack &s)
{
    float x;
    if (!empty(s))
    {
        Node *p = s.top;
        s.top = p->pNext;
        x = p->data;
        delete p;
        return x;
    }
}

void DocTu(char s[], char tu[], int &vt)
{
    for (int i = 0; i < strlen(tu); i++)
        tu[i] = ' ';
    for (int i = 0; s[vt] != ' '; vt++, i++)
    {
        tu[i] = s[vt];
    }
}

int LaToanTu(char s[])
{
    char c = s[0];
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return 1;
    return 0;
}

float tinhToan(float toanHang1, float toanHang2, char toanTu)
{
    float kq;
    switch (toanTu)
    {
    case '+':
        kq = toanHang1 + toanHang2;
        break;
    case '-':
        kq = toanHang1 - toanHang2;
        break;
    case '*':
        kq = toanHang1 * toanHang2;
        break;
    case '/':
        kq = toanHang1 / toanHang2;
        break;
    case '^':
        kq = pow(toanHang1, toanHang2);
        break;
    }
    return kq;
}

float tinhBieuThuc(stack &s, char bieuThuc[])
{
    float kq;
    char t[10];
    int i = 0;
    do
    {
        DocTu(bieuThuc, t, i);
        if (LaToanTu(t))
        {
            char toanTu = t[0];
            float toanHang1 = pop(s);
            float toanHang2 = pop(s);
            kq = tinhToan(toanHang1, toanHang2, toanTu);
            push(s, kq);
        }
        else
        {
            float toanHang = atof(t);
            push(s, toanHang);
        }
        i++;
    } while (bieuThuc[i] != '#');
    return pop(s);
}
