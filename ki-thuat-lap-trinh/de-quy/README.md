# Kĩ thuật lập trình

### Đệ quy  
- **Vấn đề 1:**  Tổng và tích  
  Cho các biểu thức sau:  
  **S = 1 +  2  +  … +  n (n≥0)**  
  **P = 1 x 2 x … x n (n≥1)**  
  **A = an (a ∈ R,  n≥0)**

  _Yêu cầu:_  
 1. Diễn đạt S, P và A bằng định nghĩa đệ quy
 2. Cài đặt các hàm đệ quy theo định dạng sau:  
  - long tong(int n); trả về  tổng S (giá trị của biểu thức S được cho ở trên)
  - long tich(int n); trả về tích P (giá trị của biểu thức S được cho ở trên)
  - double luythua(float a, int n); trả về a mũ n (giá trị của biểu thức A được cho ở trên)
 3. Cài đặt chương trình hiện thực vấn đề 1 bằng hàm int main(); để kiểm tra tính đúng bằng thực nghiệm.
  - Nhập dữ liệu hợp lệ cho n và a
  - Hiển thị giá trị của S, P và A trên màn hình tương ứng với dữ liệu vào n và a từ bản phím.    

  _Test_  
![dequy-vd1](/ki-thuat-lap-trinh/image/dequy-vd1.jpg)

- **Vấn đề 2:**  Cấp số cộng và Cấp số nhân

Tìm giá trị phần tử thứ n của 1 cấp số cộng có số hạng đầu là a, công sai là r
  Un= {a r+ Un-1 nếu n=1 nếu n≥2  
          
Tìm giá trị phần tử thứ n của 1 cấp số nhân có số hạng đầu là a, công bội là q
   Un= {a q* Un-1 nếu n=1 nếu n≥2  

  _Yêu cầu:_   
1. Cài đặt các hàm đệ quy theo định dạng sau:
  - double capsocong(int n, int a, int r); trả về phần tử thứ n của cấp số cộng có số hạng đầu là a và công sai r
  - double capsonhan(int n, int a, int q); trả về phần tử thứ n của cấp số nhân có số hạng đầu là a và công bội là q
2. Cài đặt chương trình hiện thực vấn đề 2 bằng hàm int main(); để in ra danh sách n phần tử đầu tiên của cấp số cộng công sai r và cấp số nhân công bộ q, đều có cùng số hạng đầu tiên là số nguyên a.
  - Nhập dữ liệu hợp lệ cho n, a, r và q
  - Hiển thị lên màn hình dãy số biểu diễn cấp số cộng với 10 số trên 1 dòng.
  - Hiển thị lên màn hình dãy số biểu diễn cấp số nhân với 10 số trên 1 dòng.
3. Thực hiện yêu cầu 5. Không sử dụng kỹ thuật đệ quy (khử đệ quy)

- **Vấn đề 3:**  
