// In hình tam giác sau bằng cách đệ quy

#include <iostream>

using namespace std;

void inTamGiac(int n);

int main(int argc, char const *argv[])
{
    cout << "Nhap n: ";
    int n;
    cin >> n;
    inTamGiac(n);
    return 0;
}

void inTamGiac(int n) {
    if(n > 1)
        inTamGiac(n-1);
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
}