#include <stdio.h>

int main()
{
    int giaithua(1), n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        giaithua*=i;
    }
    printf("Giai thua thu %d la: %d", n, giaithua);
    return 0;
}
