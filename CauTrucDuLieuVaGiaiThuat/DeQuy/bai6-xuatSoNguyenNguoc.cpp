// Viết hàm đệ quy cho phép xuất ngược một số nguyên n
// ví dụ n = 1980 -> xuất 0891

#include <iostream>

using namespace std;

void inNguocSoNguyen(int n);

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    inNguocSoNguyen(n);
    return 0;
}

void inNguocSoNguyen(int n) {
    if(n < 10)
        cout << n;
    else
    {
        cout << n % 10;
        inNguocSoNguyen(n / 10);
    }
}