/* 
Viết hàm đệ quy cho phép nhập số giây và chuyển thành giờ, phút, giây. 
Ví dụ: nhập 3665 -> 1 giờ 1 phút 5 giây
*/

#include <iostream>
#include <string>

using namespace std;

void doiGio(long n, int &giay, int &phut, int &gio);

int main(int argc, char const *argv[])
{
    long n;
    cout << "nhap so giay: ";
    cin >> n;
    int gio = 0;
    int phut = 0;
    int giay = 0;
    doiGio(n, giay, phut, gio);
    string ketqua = to_string(n) + " giay = ";
    if(gio > 0)
        ketqua += to_string(gio) + " gio ";
    if(phut > 0)
        ketqua += to_string(phut) + " phut ";
    if(giay > 0)
        ketqua += to_string(giay) + " giay ";
    cout << ketqua << endl;
    return 0;
}

void doiGio(long n, int &giay, int &phut, int &gio)
{
    if (n < 60)
        giay = n;
    else if (n / 3600 > 0)
    {
        gio = n / 3600;
        return doiGio(n % 3600, giay, phut, gio);
    }
    else
    {
        phut = n / 60;
        return doiGio(n % 60, giay, phut, gio);
    }
}
