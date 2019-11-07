#include <iostream>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
using namespace std;
 int main()
 {
    const int HANG_MAX =20, COT_MAX=20;
    int hang, cot;
    do{
        cout <<"Nhap so luong phan tu cua hang va cot (<20): ";
        cin >> hang >> cot;
    }while(hang <0 && hang >=20 || cot <0 && cot >=20);
    float mang[HANG_MAX][COT_MAX];
    srand(time(NULL));
    for(int i=0; i<hang; i++)
    {
        for(int j=0; j<cot; j++)
        {
            mang[i][j]=float(rand())/float(2);
        }
    }
     for(int i=0; i<hang; i++)
    {
        for(int j=0; j<cot; j++)
        {
            cout << mang[i][j] << "\t";
        }
        cout << endl;
    }
    float max=mang[0][0];
    for(int i=0; i<hang; i++)
    {
        for(int j=0; j<cot; j++)
        {
            if(max<mang[i][j])
                max=mang[i][j];
        }
    }
    cout <<"\nGia tri lon nhat cua mang la: " << max;
    return 0;
 }
