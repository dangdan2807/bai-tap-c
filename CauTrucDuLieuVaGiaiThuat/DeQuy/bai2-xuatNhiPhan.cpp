// Viết hàm đệ quy cho phép xuất biểu diễn nhị phân của 1 số nguyên n
// ví dụ : n = 13->1101

#include <iostream>

using namespace std;

// Nhập số thập phân in ra số nhị phân
void xuatNhiPhan(int n);

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    xuatNhiPhan(n);
    return 0;
}

void xuatNhiPhan(int n)
{
    if (n / 2 > 0)
        xuatNhiPhan(n / 2);
    cout << n % 2;
}