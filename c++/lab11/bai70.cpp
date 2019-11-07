#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>

#define COT_MAX 100
#define HANG_MAX 100

using namespace std;
void nhapmang(int a[HANG_MAX][COT_MAX], int hang, int cot);
void xuatmang(int a[HANG_MAX][COT_MAX],  int hang, int cot);
void dem(int a[HANG_MAX][COT_MAX], int hang, int cot, int x);
void sapxep(int a[HANG_MAX][COT_MAX], int hang, int cot);

int main()
{
    int hang, cot;
    do
    {
        cout << "Nhap so hang va cot: ";
        cin >> hang >> cot;
    }while(hang<0 || hang>HANG_MAX || cot<0 || cot>COT_MAX);
    int mang[HANG_MAX][COT_MAX];
    nhapmang(mang, hang, cot);
    xuatmang(mang, hang, cot);
    int max=mang[0][0], min=mang[0][0];
    for(int i=0; i<hang; i++)
        for(int j=0; j<cot; j++)
        {
            if(max<mang[i][j])
                max=mang[i][j];
            if(min>mang[i][j])
                min=mang[i][j];
        }
    cout <<"\nGia tri lon nhat cua mang: " << max;
    cout <<"\nGia tri nho nhat cua mang: " << min;
     int x;
    cout <<"\nNhap gia tri can tim cac vi tri: ";
    cin >> x;
    cout <<"Nhung vi tri co gia tri trung voi gia tri "<< x <<" la: \n";
    dem(mang, hang, cot, x);
    xuatmang(mang, hang, cot);
    return 0;
}
void nhapmang(int a[HANG_MAX][COT_MAX],  int hang, int cot)
{
    srand(time(0));
    for(int i=0; i<hang; i++)
        for(int j=0; j<cot; j++)
            a[i][j]=rand()%100+1;
}
void xuatmang(int a[HANG_MAX][COT_MAX],  int hang, int cot)
{
    for(int i=0; i<hang; i++)
    {
        for(int j=0; j<cot; j++)
        {
            cout << a[i][j] <<"\t";
        }
        cout <<"\n";
    }
}
void dem(int a[HANG_MAX][COT_MAX],  int hang, int cot, int x)
{
    int dem=0;
    for(int i=0; i<hang; i++)
    {
        for(int j=0; j<cot; j++)
        {
            if(a[i][j]==x)
            {
                dem++;
                cout <<"Mang[" << i << "][" << j <<"]\t";
            }
        }
    }
    cout <<"\nCo " << dem <<" phan tu bang gia tri " << x << ".\n";
}
void sapxep(int a[HANG_MAX][COT_MAX], int hang, int cot)
{

}
