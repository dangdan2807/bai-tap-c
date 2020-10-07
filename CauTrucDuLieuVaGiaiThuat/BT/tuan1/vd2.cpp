#include <iostream>

using namespace std;

void NhapMang(int a[], int n);

int LinearSrerch(int a[], int n, int x);
int LinearSrerch_CaiTien(int a[], int n, int x);

int main()
{
	int a[100], n, x;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	NhapMang(a, n);
	cout << "Nhap khoa can tim: ";
	cin >> x;
	int kq = LinearSrerch(a, n, x);
	if(kq == -1)
		cout << "khong tim thay";
	else
		cout << "tim thay tai vi tri " << kq << endl;
		
	cout << "TIM KIEM THEO HAM CAI TIEN\n";
	cout << "Nhap khoa can tim: ";
	cin >> x;
	kq = LinearSrerch_CaiTien(a, n, x);
	if(kq == -1)
		cout << "khong tim thay";
	else
		cout << "tim thay tai vi tri " << kq << endl;
	return 0;
}

void NhapMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]= ";
        cin >> a[i];
    }
}

int LinearSrerch(int a[], int n, int x)
{
	int i = 0;
	while(i < n && a[i] != x)
		i++;
	if(i < n) return i;
	return -1;
}

int LinearSrerch_CaiTien(int a[], int n, int x)
{
	int i = 0;
	a[n] = x;
	while(a[i] != x)
		i++;
	if(i < n) return i;
	return -1;
}