// Viết hàm đệ quy cho phép tính tổng các chữ số của một số nguyên n
// ví dụ n=1980 =>Sum=1+9+8+0=18

#include <iostream>

using namespace std;

long sum(long n);

int main(int argc, char const *argv[])
{
    long n;
    cout << "Nhap n: ";
    cin >> n;
    cout << sum(n);
    return 0;
}

long sum(long n)
{
    if(n < 10)
        return n;
    else
        return n % 10 + sum(n / 10);
}