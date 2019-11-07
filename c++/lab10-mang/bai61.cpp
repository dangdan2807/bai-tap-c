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
    printf("Chuong trinh khoi tao mang 1000 phan tu\n");
    for(int i=0; i<MAX; i++)
    {
        mang[i]=rand()%100;
    }
    printf("Xuat mang: \n");
    for(int i=0; i<MAX; i++)
    {
        printf("Gia tri mang[%d]= %d\n", i,mang[i]);
        if(i!=0 && i%10==0)
            getchar();
    }
    return 0;
}
