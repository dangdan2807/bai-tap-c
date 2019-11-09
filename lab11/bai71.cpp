#include<iostream>
#define MAX 20
using namespace std;

void xuat_kq();
void tohop(int k);
int n;
int Bool[MAX] = { 0 };//Đánh dấu chưa có phần tử nào sử dụng hết
int a[MAX];//Lưu hoán vị vào mảng A

int main() {
    cout << "Mhap n: ";
    cin >> n;
    tohop(1);
}

void xuat_kq()
{
	for(int i=1; i<=n; i++)
		cout << a[i] << " ";
	cout << endl;
}
 
void tohop(int k) {
    for (int i = 1; i <= n; i++) {
        //Kiểm tra nếu phần tử chưa được chọn thì sẽ đánh dấu
        if (Bool[i]==0) {
            a[k] = i; // Lưu một phần tử vào hoán vị
            Bool[i] = 1;//Đánh dấu đã dùng
            if (k == n)//Kiểm tra nếu đã chứa một hoán vị thì xuất
                xuat_kq();
            else
                tohop(k + 1);
            Bool[i] = 0;
        }
    }
}
