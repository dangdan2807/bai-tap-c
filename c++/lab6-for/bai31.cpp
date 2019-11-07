#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout <<"Nhap 2 so a va b: ";
    cin >> a >> b;
    for(int i=1; i <=a; i++)
    {
       if( a%i == 0 && b%i == 0 )
            c = i;
    }
    cout << c;
    return 0;
}
