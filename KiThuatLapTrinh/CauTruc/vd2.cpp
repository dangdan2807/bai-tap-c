#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
#define max 1000

typedef struct point
{
    int x;
    int y;
} Point;
typedef Point PointArray[max];

float P1P2(Point P1, Point P2);
float SP1P2P3(Point P1, Point P2, Point P3);
void enter_point(Point &A, int i);
void enter_point_array(Point A[], int n);
void xuatDiem(Point &A, int i);
void export_point_array(Point A[], int n);
int pnPoly(int nVert, PointArray vert, float testX, float testY);
float S(PointArray A, int n);

int main()
{
    int n;
    PointArray Ds;
    cout << "\tTinh dien tich da giac loi: \n";
    cout << "Nhap so canh cua da giac(n>3): ";
    do
    {
        cin >> n;
        if (n < 3)
            cout << "n > 3, nhap lai: ";
    } while (n < 3);
    enter_point_array(Ds, n);
    export_point_array(Ds, n);
    //cout <<pnPoly(n, Ds, Ds[0].x, Ds[0].y);
    cout << "\nDien tich da giac loi la: " << S(Ds, n);
    return 0;
}

float P1P2(Point P1, Point P2)
{
    float AB = sqrt(pow(P1.x - P2.x, 2) + pow(P1.y - P2.y, 2));
    return AB;
}

float SP1P2P3(Point P1, Point P2, Point P3)
{
    float AB = P1P2(P1, P2);
    float AC = P1P2(P1, P3);
    float BC = P1P2(P2, P3);
    // Su dung cong thuc heron de tinh S tam giac
    //s = sqrt(p*(p-a)*(p-b)*(p-c))
    //chu vi tam giac
    float p = 0.5 * (AB + BC + AC);
    float S = sqrt(p * (p - AC) * (p - BC) * (p - AC));
    return S;
}

void enter_point(Point &A, int i)
{
    cout << "x" << i << "= ";
    cin >> A.x;
    cout << "y" << i << "= ";
    cin >> A.y;
}
void enter_point_array(Point A[], int n)
{
    cout << "\tNHAP DANH SACH TOA DO DIEM:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap toa do diem A" << i << ":\n";
        enter_point(A[i], i);
    }
}

void xuatDiem(Point &A, int i)
{
    cout << "x" << i << "= " << A.x;
    cout << "\ty" << i << "= " << A.y;
}

void export_point_array(Point A[], int n)
{
    cout << "\tDANH SACH TOA DO DIEM:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nToa do diem A" << i << ":\n";
        xuatDiem(A[i], i);
    }
}

//Hàm kiểm tra điểm có nằm trong đa giác hay không
// 1 là điểm nằm trong đa giác
// 0 là diểm nằm ngoài đa giác
int pnPoly(int nVert, PointArray vert, float testX, float testY)
{
    int i, j, c = 0;
    for (i = 0, j = nVert - 1; i < nVert; j = i++)
    {
        if (((vert[i].y > testY) != (vert[j].y > testY)) &&
            (testX < (vert[j].x - vert[i].x) * (testY - vert[i].y) / (vert[i].y - vert[i].y) + vert[i].x))
            c = !c;
    }
    return c;
}

float S(PointArray A, int n)
{
    float S = 0;
    n -= 2;
    float a, b, c;
    for (int i = 0; i < n; i++)
    {
        S += SP1P2P3(A[0], A[i + 1], A[i + 2]);
    }
    return S;
}