/* HƯỚNG DẪN CÁC BƯỚC:
Bước 1: Khai báo lớp songuyento với các thành viên dữ liệu và các hàm thành viên
Bước 2: Giả sử một constructor của lớp songuyento là songuyento() với tham số là số nguyên
Bước 3: Gọi hàm calculate() và thực hiện các bước tiếp theo
Bước 4: Với i=2 tới a/2, bạn thực hiện:
Bước 5: Kiểm tra nếu a%i==0, sau đó thiết lập b=0 và break
Bước 6: Nếu không, thiết lập b=1
Bước 7: Tăng giá trị của i thêm 1
Bước 8: Kiểm tra giá trị của k là 1 hay là 0
Bước 9: Nếu là 1 thì hiển thị rằng đó là số nguyên tố
Bước 10: Nếu là 0, thì hiển thị rằng giá trị đó không phải là nguyên tố
*/
#include <iostream>
#include <stdio.h>
using namespace std;

class SoNguyenTo
{
	int a, b;
public:
	// Đây là constructor
	SoNguyenTo(int x)
	{
		a=x;
	}
	
	void calculate()
	{
		b=1;
		for(int i=2; i<=a/2;i++){
			if(a%i==0){
				b=0;
				break;
			}
			else
				b=1;
		}
	}
	
	void show()
	{
		if(b==1)
			cout <<"\nLa so nguyen to.";
		else
			cout <<"\nKhong phai la so nguyen to";
	}
};

int main()
{
	int n;
	cout <<"Nhap 1 so nguyen: ";
	cin >>n;
	songuyento a(n);
	a.calculate();
	a.show();
	return 0;
}