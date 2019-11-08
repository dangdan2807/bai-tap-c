#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float N, tong=0, tongchan=0, tong3=0, tongd=0;
    printf("Nhap so N: ");
    scanf("%f", &N);
    printf("cau a: Tong cua cac so tu 1 den N:\n");
    for(int i=1; i<=N; i++)
    {
        tong+=i;
    }
    printf("Ket qua la: %f\n", tong);
    printf("cau b: Tong cua ca so chan <=N: \n");
    for(int i=1; i<=N; i++)
    {
        if(i%2==0)
            tongchan+=i;
    }
    printf("Ket qua la: %f\n", tongchan);
    cout <<"cau c: Tong cac so tu nhien chia het cho 3 va <=N: \n";
    for(int i=1; i<=N; i++)
    {
        if(i%3==0)
            tong3+=i;
    }
    printf("Ket qua la: %f\n", tong3);
    cout <<"cau d: Tong binh phuong cac so le tu 1 den N: \n";
    for(int i=1; i<=N; i++)
    {
        if(i%2!=0)
            tongd+=sqrt(i);
    }
    printf("Ket qua la: %f\n", tongd);
    return 0;
}
