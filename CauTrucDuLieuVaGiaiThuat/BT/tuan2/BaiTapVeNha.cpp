#include <iostream>
#include <string>
#include <string.h>

using namespace std;

typedef struct SINHVIEN
{
    int msSV;
    string name;
    string gioiTinh;
    string address;
    float diemTB;
} SV, SinhVien;

void swap(SV &a, SV &b);
void NhapThongTinSV(SV &x);
void NhapMangSV(SV arr[], int n);
void XuatThongTinSV(SV x);
void XuatMangSV(SV arr[], int n);
int TimSVTheoMssv(SV arr[], int n, int x);
void SapXepDsSVTangTheoDiemTB(SV arr[], int n);
void SapXepDsSVTangTheoTen(SV arr[], int n);

int main(int argc, char const *argv[])
{
    SV ds[50];
    int n = 4;
    int luaChon, masv, temp;
    SV A = {1, "B", "Nam", "HCM", 8.4f};
    SV B = {3, "A", "Nam", "HCM", 4.4f};
    SV C = {2, "C", "NU", "HCM", 7.4f};
    SV D = {4, "D", "NU", "HCM", 5.4f};
    ds[0] = A;
    ds[1] = B;
    ds[2] = C;
    ds[3] = D;
    do
    {
        cout << "========== Menu ==========" << endl;
        cout << "1. Nhap Danh Sach Sinh Vien\n";
        cout << "2. Xuat Danh Sach Sinh Vien\n";
        cout << "3. Tim Sinh Vien Bang MSSV\n";
        cout << "4. Sap Xep Sinh Vien Theo Diem TB\n";
        cout << "5. Sap Xep Sinh Vien Theo Ten\n";
        cout << "Nhap lua chon: ";
        cin >> luaChon;
        switch (luaChon)
        {
        case 0:
            cout << "Thoat chuong trinh";
            break;
        case 1:
            cout << "Nhap so thanh vien cua lop: ";
            cin >> n;
            NhapMangSV(ds, n);
            break;
        case 2:
            cout << "Xuat Thong Tin Danh Sach SV\n";
            XuatMangSV(ds, n);
            break;
        case 3:
            cout << "Nhap MSSV can tim: ";
            cin >> masv;
            temp = TimSVTheoMssv(ds, n, masv);
            if(temp == -1)
                cout << "khong tim thay";
            XuatThongTinSV(ds[temp]);
            break;
        case 4:
            SapXepDsSVTangTheoDiemTB(ds, n);
            cout << "Sap Xep Xong";
            break;
        case 5:
            SapXepDsSVTangTheoTen(ds, n);
            cout << "Sap Xep Xong";
            break;
        // default:
        //     cout << "Lua chon khong hop le";
        //     break;
        }
    } while (luaChon != 0);
    return 0;
}

void swap(SV &a, SV &b)
{
    SV temp = a;
    a = b;
    b = temp;
}

void NhapThongTinSV(SV &x)
{
    do
    {
        fflush(stdin);
        cout << "Nhap ma so SV: ";
        cin >> x.msSV;
        if (x.msSV <= 0)
            cout << "msSV > 0, nhap lai";
    } while (x.msSV < 0);
    cout << "Nhap ho va ten: ";
    fflush(stdin);
    getline(cin, x.name);
    cout << "Nhap gioi tinh: ";
    fflush(stdin);
    getline(cin, x.gioiTinh);
    cout << "Nhap dia chi: ";
    fflush(stdin);
    getline(cin, x.address);
    do
    {
        cout << "Nhap diem TB: ";
        cin >> x.diemTB;
        if (x.diemTB < 0 || x.diemTB > 10)
            cout << "Diem khong hop le!!!";
    } while (x.diemTB < 0 || x.diemTB > 10);
    cout << endl;
}

void NhapMangSV(SV arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap Thong Tin SV thu " << i + 1 << endl;
        NhapThongTinSV(arr[i]);
    }
}

void XuatThongTinSV(SV x)
{
    cout << x.msSV << "\t"
         << x.name << "\t\t"
         << x.gioiTinh << "\t\t"
         << x.address << "\t\t"
         << x.diemTB << "\n";
}

void XuatMangSV(SV arr[], int n)
{
    cout << "MSSV\tHo va Ten\tGioi Tinh\tDia Chi\t\tDiem TB\n";
    for (int i = 0; i < n; i++)
        XuatThongTinSV(arr[i]);
}

int TimSVTheoMssv(SV arr[], int n, int x)
{
    int find = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].msSV == x)
        {
            find = i;
            break;
        }
    }
    return find;
}

void SapXepDsSVTangTheoDiemTB(SV arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j].diemTB < arr[min].diemTB)
                min = j;
        if (min != i)
            swap(arr[min], arr[i]);
    }
}

void SapXepDsSVTangTheoTen(SV arr[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j].name.compare(arr[min].name) < 0)
                min = j;
        if (min != i)
            swap(arr[min], arr[i]);
    }
}