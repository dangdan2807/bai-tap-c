#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
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

int main(int argc, char const *argv[])
{

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