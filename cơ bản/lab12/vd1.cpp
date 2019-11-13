#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int sotien;
    cout <<"Nhap so tien: ";
    do{
        //NHập số ti
        cin >> sotien;
        if(sotien<0)
            cout <<"so tien >0, nhap lai: ";
    }while(sotien<0);
    cout << sotien << " doc thanh chu la ";
    int temp=0;
    // Đảo số tiền  để có thể  đọc
    while(sotien != 0) {
        temp = (temp * 10) + (sotien % 10);
        sotien /= 10;
    }
    while(temp != 0) {
        switch(temp % 10) {
            case 0: cout << "Khong ";break;
            case 1: cout << "Mot ";break;
            case 2: cout << "Hai ";break;
            case 3: cout << "Ba ";break;
            case 4: cout << "Bon ";break;
            case 5: cout << "Nam ";break;
            case 6: cout << "Sau ";break;
            case 7: cout << "Bay ";break;
            case 8: cout << "Tam ";break;
            case 9: cout << "Chin ";break;
        }

        temp /=10;
    }
    return 0;
}
