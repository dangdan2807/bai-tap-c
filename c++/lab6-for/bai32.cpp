#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float N, tong=0, tongchan=0, tong3=0, tongd=0;
    cout << "Nhap so N: ";
    cin >> N;
    cout << "cau a: Tong cua cac so tu 1 den N:\n";
    for(int i=1; i<=N; i++)
    {
        tong+=i;
    }
    cout << "Ket qua la: " << tong << endl << endl;
    cout << "cau b: Tong cua ca so chan <=N: \n";
    for(int i=1; i<=N; i++)
    {
        if(i%2==0)
            tongchan+=i;
    }
    cout << "Ket qua la: " << tongchan << endl<< endl;
    cout <<"cau c: Tong cac so tu nhien chia het cho 3 va <=N: \n";
    for(int i=1; i<=N; i++)
    {
        if(i%3==0)
            tong3+=i;
    }
    cout << "Ket qua la: " << tong3 << endl<< endl;
    cout <<"cau d: Tong binh phuong cac so le tu 1 den N: \n";
    for(int i=1; i<=N; i++)
    {
        if(i%2!=0)
            tongd+=sqrt(i);
    }
    cout << "Ket qua la: " << tongd << endl<< endl;
    return 0;
}
