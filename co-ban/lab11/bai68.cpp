#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
void nhapmang(int a[][4]);
void xuatmang(int a[][4]);
using namespace std;
int main()
{
    srand(time(NULL));
    int mang[5][4];
    nhapmang(mang);
    xuatmang(mang);
    return 0;
}
void nhapmang(int a[][4])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            a[i][j] = rand()%100;
        }
    }
}
void xuatmang(int a[][4])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout <<"\n";
    }
}
