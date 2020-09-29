// Viết hàm đệ quy cho phép kiểm tra xem một số có phải số nguyên tố không.

#include <iostream>

using namespace std;

int isPrime(int n);

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (isPrime(n))
        cout << "is Prime";
    else
    {
        cout << "is not Prime";
    }
    
    return 0;
}

int isPrime(int n)
{
    if (n == 1)
        return 1;
    int static a = n - 1;
    if (a == 1)
        return 1;
    else if (n % a == 0)
        return 0;
    else
    {
        a--;
        isPrime(n);
    }
    return true;
}