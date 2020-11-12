#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
    Node *pNext;
} node;

typedef struct queue
{
    Node *front, *rear;
} queue;

void init(queue &q);
int empty(queue q);
void enQueue(queue &q, int x);
int deQueue(queue &q);
int Front(queue q);

int main(int argc, char const *argv[])
{
    int x, k;
    queue q;
    init(q);
    int n;
    cout << "Nhap so luong phan tu can them vao queue: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap x = ";
        cin >> x;
        enQueue(q, x);
    }
    cout << "\nLay danh sach cac phan tu ra khoi queue:\n";
    while (!empty(q))
    {
        k = deQueue(q);
        cout << k << " ";
    }

    return 0;
}

void init(queue &q)
{
    q.front = NULL;
}

int empty(queue q)
{
    return q.front == NULL ? 1 : 0;
}

void enQueue(queue &q, int x)
{
    Node *p = new Node;
    p->data = x;
    p->pNext = NULL;
    if (empty(q))
    {
        q.front = p;
        q.rear = p;
    }
    else
    {
        q.rear->pNext = p;
        q.rear = p;
    }
}

int deQueue(queue &q)
{
    if (empty(q))
    {
        cout << "queue rong \n";
        return 1;
    }
    Node *p = q.front;
    q.front = q.front->pNext;
    if (empty(q))
        q.rear = NULL;
    int x = p->data;
    p->pNext = NULL;
    delete p;
    return x;
}

int Front(queue q)
{
    if (empty(q))
        return 1;
    return q.front->data;
}