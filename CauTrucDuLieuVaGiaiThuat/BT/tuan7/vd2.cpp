#include <iostream>
using namespace std;

#define MAXQUEUE 100

typedef struct MatHang
{
    int maMH;
    string tenMH;
} mathang;

typedef struct queue
{
    int front, rear;
    MatHang nodes[MAXQUEUE];
} Queue;

void init(queue *q);
int empty(queue *q);
void insert(queue *q, MatHang x);
MatHang remove(queue *q);
void traverse(queue *q);

int main(int argc, char const *argv[])
{
    queue q;
    init(&q);
    int chucNang, front1;
    string c;
    MatHang mh;

    do
    {
        cout << "============ Chuong Trinh Quan Ly Kho ===============\n";
        cout << "1. Nhap mot mat hang\n";
        cout << "2. Xuat mot mat hang\n";
        cout << "3. Xem mat hang chuan bi xuat\n";
        cout << "4. Xem mat hang moi nhap\n";
        cout << "5. Xem cac mat hang co trong kho\n";
        cout << "6. Xuat toan bo kho hang\n";
        cout << "0. Ket thuc chuong trinh\n";
        cout << "Chuc nang ban chon: ";
        cin >> chucNang;

        switch (chucNang)
        {
        case 1:
            cout << "\nMa mat hang: ";
            cin >> mh.maMH;
            cout << "Ten mat hang: ";
            fflush(stdin);
            getline(cin, mh.tenMH);
            insert(&q, mh);
            break;
        case 2:
            if (!empty(&q))
            {
                mh = remove(&q);
                cout << "\nMat hang xuat:\nMa: " << mh.maMH << ", Ten: " << mh.tenMH << endl;
            }
            else
            {
                cout << "\nKho khong con hang\n";
            }
            break;
        case 3:
            front1 = ((q.front == MAXQUEUE - 1) ? 0 : q.front + 1);
            cout << "\nMat hang chuan bi xuat:\nMa: " << q.nodes[front1].maMH << ", Ten: " << q.nodes[front1].tenMH << endl;
            break;
        case 4:
            cout << "\nMat hang moi nhap:\nMa: " << q.nodes[q.rear].maMH << ", Ten: " << q.nodes[q.rear].tenMH << endl;
            break;
        case 5:
            cout << "\nCac mat hang co trong kho:\n";
            printf("%11s%15s\n", "MA MAT HANG", "TEN MAT HANG");
            traverse(&q);
            break;
        case 6:
            cout << "\nBan co chac khong (c/k): ";
            cin >> c;
            if (c.compare("c") == 0 || c.compare("C") == 0)
                init(&q);
            break;
        }
    } while (chucNang != 0);

    return 0;
}

void init(queue *q)
{
    q->front = q->rear = MAXQUEUE - 1;
}

int empty(queue *q)
{
    return (q->front == q->rear) ? true : false;
}

void insert(queue *q, MatHang x)
{
    if (q->rear == MAXQUEUE - 1)
        q->rear = 0;
    else
        (q->rear)++;
    if (q->rear == q->front)
        cout << "\nKho hang da day\n";
    else
        q->nodes[q->rear] = x;
}

MatHang remove(queue *q)
{
    if (empty(q))
        cout << "\nKho khong con hang\n";
    else
    {
        if (q->front == MAXQUEUE - 1)
            q->front = 0;
        else
            (q->front)++;
        return q->nodes[q->front];
    }
}

void traverse(queue *q)
{
    int i;
    if (empty(q))
    {
        cout << "\nKho khong con hang\n";
        return;
    }
    if (q->front == MAXQUEUE - 1)
        i = 0;
    else
        i = q->front + 1;
    while (i != q->rear)
    {
        // cout << q->nodes[i].maMH << " " << q->nodes[i].tenMH << endl;
        printf("%-11d%-15s\n", q->nodes[i].maMH, q->nodes[i].tenMH.c_str());
        if (i == MAXQUEUE - 1)
            i = 0;
        else
            i++;
    }
    // cout << q->nodes[i].maMH << " " << q->nodes[i].tenMH << endl;
    printf("%-11d%-15s\n", q->nodes[i].maMH, q->nodes[i].tenMH.c_str());
}
