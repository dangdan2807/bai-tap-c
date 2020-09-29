#include <iostream>
using namespace std;

// ========== KHAI BAO NODE ==========
typedef struct node
{
    int data;
    struct node* pNext;
}NODE;

typedef struct list
{
    NODE* pHead;
    NODE* pTail;
}LIST;

// ========== KHAI BAO CAC HAM ==========
void createList(LIST& List)
{
    List.pHead = List.pTail = NULL;
}

NODE* createNODE(int x)
{
    NODE* tempNode = new NODE;
    if (tempNode == NULL)
    {
        cout << "\nKhong du bo nho";
        return NULL;
    }
    tempNode->data = x;
    tempNode->pNext = NULL;
    return tempNode;
}

void addHead(LIST& List, NODE* tempNode)
{
    if (List.pHead == NULL)
        List.pHead = List.pTail = tempNode;
    else
    {
        tempNode->pNext = List.pHead;
        List.pHead = tempNode;
    }
}

void addTail(LIST& List, NODE* tempNode)
{
    if (List.pHead == NULL)
        List.pHead = List.pTail = tempNode;
    else
    {
        List.pTail->pNext = tempNode;
        List.pTail = tempNode;
    }
}

void outputList(LIST List)
{
    int coutNumber = 1;
    cout << "\nXuat Danh Sach Cac So Nguyen:";
    for (NODE* i = List.pHead; i != NULL; i = i->pNext)
    {
        cout << "\nGia tri phan tu thu " << coutNumber++ << ": " << i->data;
    }
}

int findMax(LIST List) 
{
    int max = List.pHead->data;
    for (NODE *i = List.pHead; i != NULL; i = i->pNext)
    {
        if (max < i->data) max = i->data;
    }
    return max;
}

int main(int argc, char const* argv[])
{
    LIST ds;
    createList(ds);
    int SoLuongSoTuNhien;

    cout << "Nhap so luong so tu nhien: ";
    cin >> SoLuongSoTuNhien;
    for (int i = 0; i < SoLuongSoTuNhien; i++)
    {
        int tempX;
        cout << "Nhap gia tri cua so tu nhien thu " << i + 1 << "   : ";
        cin >> tempX;
        NODE* tempP = createNODE(tempX);
        addTail(ds, tempP);
    }
    outputList(ds);
    cout << "\nGia tri lon nhat la: " << findMax(ds);
    return 0;
}
