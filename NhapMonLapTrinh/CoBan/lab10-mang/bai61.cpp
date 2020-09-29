#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#define MAX 1000
using namespace std;
int main()
{
    int mang[MAX];
    srand(time(NULL));
    cout <<"Chuong trinh khoi tao mang 1000 phan tu\n";
    for(int i=0; i<MAX; i++)
    {
        mang[i]=rand()%100;
    }
    cout <<"Xuat mang: \n";
    int sum=0, i;
    for(i=0; i<MAX; i++)
    {
        sum=sum+mang[i];
        cout << "Gia tri mang["<< i<< "]= " << mang[i] << "\n";
        if(i!=0 && i%10==0)
            getchar();
    }
    sum=sum/i;
    cout <<"Trung binh cua mang la: " << sum << endl;
    return 0;
}
