#include <iostream>
using namespace std;
int main()
{
    int a, b, c=0;
    printf("Nhap 2 so a va b: ");
    scanf("%d%d", &a, &b);
    for(int i=1; i <=a; i++)
    {
       if( a%i == 0 && b%i == 0 )
            c = i;
    }
    printf("%d", c);
    return 0;
}
