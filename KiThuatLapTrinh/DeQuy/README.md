# Đệ quy

1. **Vấn đề 1:** Tổng và tích
Cho các biểu thức sau:  
**S = 1 +  2  +  … +  n (n≥0)**  
**P = 1 x 2 x … x n (n≥1)**  
**A = a^n (a ∈ R,  n≥0)**

    _Yêu cầu:_  

   1. Cài đặt các hàm đệ quy theo định dạng sau:  
        - `long tong(int n);` trả về  tổng S (giá trị của biểu thức S được cho ở trên)
        - `long tich(int n);` trả về tích P (giá trị của biểu thức S được cho ở trên)
        - `double luythua(float a, int n);** trả về a mũ n (giá trị của biểu thức A được cho ở trên)
    2. Cài đặt chương trình hiện thực vấn đề 1 bằng hàm `int main();` để kiểm tra tính đúng bằng thực nghiệm.
        - Nhập dữ liệu hợp lệ cho n và a
        - Hiển thị giá trị của S, P và A trên màn hình tương ứng với dữ liệu vào n và a từ bản phím.
        
    _Test:_

    ![vd1](/KiThuatLapTrinh/image/dequy-vd1.jpg)

2. **Vấn đề 2:** Cấp số cộng và Cấp số nhân

  - Tìm giá trị phần tử thứ n của 1 cấp số cộng có số hạng đầu là a, công sai là r  

    ![dequy-vd2-1](/KiThuatLapTrinh/image/dequy-vd2-1.jpg)

  - Tìm giá trị phần tử thứ n của 1 cấp số nhân có số hạng đầu là a, công bội là q

    ![dequy-vd2-2](/KiThuatLapTrinh/image/dequy-vd2-2.jpg)

    _Yêu cầu:_  

    1. Cài đặt các hàm đệ quy theo định dạng sau:
       - `double capsocong(int n, int a, int r);` trả về phần tử thứ n của cấp số cộng có số hạng đầu là a và công sai r
       - `double capsonhan(int n, int a, int q);` trả về phần tử thứ n của cấp số nhân có số hạng đầu là a và công bội là q
    2. Cài đặt chương trình hiện thực vấn đề 2 bằng hàm `int main();` để in ra danh sách n phần tử đầu tiên của cấp số cộng công sai r và cấp số nhân công bộ q, đều có cùng số hạng đầu tiên là số nguyên a.
       - Nhập dữ liệu hợp lệ cho n, a, r và q
       - Hiển thị lên màn hình dãy số biểu diễn cấp số cộng với 10 số trên 1 dòng.
       - Hiển thị lên màn hình dãy số biểu diễn cấp số nhân với 10 số trên 1 dòng.
    3. Thực hiện yêu cầu 5. Không sử dụng kỹ thuật đệ quy (khử đệ quy)

3. **Vấn đề 3:** Xuất biểu diễn nhị phân của một số nguyên dương n.

    Gợi ý: 1310  = 11012

    _Yêu cầu:_ 

    1. Định nghĩa hàm `void xuatnhiphan(int n);` để xuất dạng nhị phân của số nguyên dương n.
    2. Cài đặt hàm `int main()` nhập n hợp lệ và hiển thị dạng nhị phân của nó

4. **Vấn đề 4:** Lãi suất kép

    Ngân hàng A có lãi suất cố định là x%. Đem khoản tiền y gửi vào ngân hàng A trong khoảng thời gian n năm. Tính số tiền thu được (vốn + lãi).

    _Yêu cầu:_
 
    1. Gọi P(n) là số tiền thu được sau n năm gửi số tiền y vào A. Lập công thức đệ quy tính P(n)
    2. Cài đặt các hàm đệ quy `float lai_kep(float y, int n);` trả về  số tiền thu được sau n năm
    3. Cài đặt chương trình hiện thực **vấn đề 4** bằng hàm `int main();` để kiểm tra tính đúng bằng thực nghiệm.
       - Nhập dữ liệu hợp lệ cho n và y
       - Hiển thị giá trị của P(n) trên màn hình tương ứng với dữ liệu vào n và y từ bản phím.

5. **Vấn đề 5:** Đệ quy trên mảng  
Dãy Q gồm n số nguyên không có thứ tự. Q được lưu trữ ở bộ nhớ trong bằng mảng int Q[n].

    _Yêu cầu:_
    1. Cài đặt hàm `void input(int Q[], int &n);` để sinh ngẫu nhiên n phần tử (1≤n≤106) và lưu vào mãng Q[].
    2. Cài đặt hàm `void output(int Q[], int n);` để hiển thị các phần tử của Q[] lên màn hình.
       - Dưới đây là gợi ý xây dựng định nghĩa đệ quy để tính tổng n phần tử của dãy Q.  
       - **Sum(q,n) = q[0] + q[1] + q[2] + ... + q[n-2] +q[n-1]**  
         >**Sum(q,n-1)**  
       - **Sum(q, n)={0 nếu n=0 q(n-1) + Sum(q, n-1) nếu n>0**                          
    3. Cài đặt hàm `long sum_rec(int Q[], int n);` trả về tổng các phần tử của dãy số Q bằng kỹ thuật đệ quy được mô tả ở 2.
         - Dưới đây là gợi ý để xây dựng định nghĩa đệ quy tìm phần tử lớn nhất của mảng Q.
         - Điều kiện biên: Mảng 1 phần tử thì trị lớn nhất là q[0].
         - Giải thuật chung:  
       **Max(q,n) = q[0] , q[1] , q[2] , ... , q[n-2]  , q[n-1]**  
           > **Max(q,n-1)**  

            **Max(q, n)={ q[0] nếu n=1 q[n-1] > Max(q,  n-1) ? q[n-1] : Max(q, n-1)**  

    4. Cài đặt hàm `int max_rec(int Q[], int n);` trả về giá trị lớn nhất của dãy số Q bằng kỹ thuật đệ quy được mô tả ở 3.
       - Định nghĩa đệ quy cho tác vụ tìm phần tử có giá trị nhỏ nhất trong dãy số Q. Từ đó cài đặt hàm `int min_rec(int Q[], int n);` trả về giá trị bé nhất của dãy số Q bằng kỹ thuật đệ quy.
       - Cài đặt hàm `long sum(int Q[], int n);` trả về tổng các phần tử của dãy số Q bằng phương pháp duyệt tuần tự trên mảng Q.
    5. Cài đặt chương trình hiện thực **vấn đề 5** bằng hàm `int main();`  
       - Tạo dãy số Q gồm n số bằng cách sinh ngẫu nhiên (1 ≤ n ≤ 100)
       - Hiển thị các phần tử của dãy Q
       - Hiển thị phần tử lớn nhất và nhỏ nhất của dãy Q.
       - Tạo dãy số Q gồm n phần tử bằng cách sinh ngẫu nhiên (10^4 ≤ n ≤ 10^9). Thực hiện tính tổng của Q theo hai cách Đệ quy và Không đệ quy và so sánh thời gian thực hiện của mỗi giải thuật với cùng bộ dữ liệu Q(n). Lập báo cáo theo mẫu sau:(f)

 Hàm \ n  | n=10^4 | n=10^5 | n=10^6 | n=10^7 | n=10^9 |
 --------------- | -------- | -------- | -------- | -------- | -------- |
 sum         | ...(s) | ...(s) | ...(s) | ...(s) | ...(s)
 sum_rec  | ...(s) | ...(s) | ...(s) | ...(s) | ...(s)

#### Đoạn chương trình hướng dẫn kỹ thuật đo thời gian:
----
```
#include <iostream>  
#include <time.h>  
#include <stdlib.h>  
using namespace std;
long sum_rec(int Q[], int n) ;
long sum(int Q[], int n);
int main()
{    
    int n = 10000;//10^4, 10^5, 10^6, ...
    clock_t start= clock();    
    sum(n);
    clock_t end = clock();  //Đo thời gian không đq
    cout<<"Time = "<<(float)(end-start)/100<<"(s)"<<endl;
    clock_t start_dq= clock();    
    sum_rec(n);    
    clock_t end_dq = clock(); // Đo thời gian đệ quy
    cout<<"Time = "<<(float)(end_dq-start_dq)/100<<"(s)"<<endl;
}
```
