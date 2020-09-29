//  Viết hàm đệ quy cho phép in chuỗi đảo ngược

#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;

void inChuoiNguoc(char *x);

int main(int argc, char const *argv[])
{
    cout << "Nhap chuoi: ";
    char chuoi[100];
    cin.getline(chuoi, 100);
    inChuoiNguoc(chuoi);
    return 0;
}

void inChuoiNguoc(char *x)
{
    static int leng = strlen(x);
    if (leng > 0)
    {
        cout << x[leng - 1];
        leng--;
        inChuoiNguoc(x);
    }
}