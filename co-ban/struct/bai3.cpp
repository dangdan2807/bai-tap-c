#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 50

struct sinhvien {
    char name[50];
    int mssv;
    int diem[3];
};

int main() {
    int n, ds_diem[SIZE], n_max;
    // n_max chính là vị trí điểm cao nhất
    struct sinhvien sv[SIZE];

    cout <<"Nhap so luong sinh vien: ";
    do{
        cin >>n;
        if(n<0)
            cout <<"n>0, nhap lai: ";
    }while(n<0);
    /* Nhập tên và MSSV*/
    for (int i = 0; i < n; i++) {
        cout <<"\nNhap ten sinh vien: ";
        cin.ignore();
        gets(sv[i].name);
        cout <<"Nhap MSSV: ";
        cin >>sv[i].mssv;
    }

   /* đọc môn học thứ i của sin viên thứ i*/
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= 2; j++) {
            cout <<"\nNhap diem thi "<< sv[i].name<<" cho mon hoc " <<j+1 <<": ";
            cin>> sv[i].diem[j];
        }
    }

    /*tính tổng điểm của mỗi sinh viên*/
    int total;
    for (int i = 0; i < n; i++) {
        total = 0;
        for (int j = 0; j < 3; j++) {
            total = total + sv[i].diem[j];
        }
        cout <<"\nTong diem cua sinh vien " <<sv[i].name <<" la " <<total <<": ";
        ds_diem[i] = total;
    }

    /* liệt kê các mã sinh viên có điểm cao nhất trong mỗi môn học */
    int max = 0;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < n; i++) {
            if (max < sv[i].diem[j]) {
                max = sv[i].diem[j];
                n_max = i;
            }
        }
        cout <<"\nSinh vien " <<sv[n_max].name <<" dat diem cao nhat = " <<max <<" voi mon hoc: "<<j+1;
    }
    max = 0;
    for (int i = 0; i < n; i++) {
        if (max < ds_diem[i]) {
            max = ds_diem[i];
            n_max = i;
        }
    }

    cout <<"\nSinh vien " <<sv[n_max].name <<" co tong diem cao nhat.";
    return(0);
}
