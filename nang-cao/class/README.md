# Phần lớp (Class):

### 1. Tính kế thừa:

- **Bài 1:** Viết chương trình C++ để hiển thị thông tin về sinh viên: id, điểm thi hai môn, điểm thể chất, tổng điểm, và điểm trung bình.
  - Khai báo lớp sinhvien
  - Khai báo và định nghĩa hàm get() để lấy thông tin sinh viên.
  - Khai báo lớp gdthechat
  - Khai báo và định nghĩa hàm nhapdiemgdtc() để đọc điểm thể chất.
  - Tạo lớp thongtinsv được kế thừa từ hai lớp là sinhvien và gdthechat
  - Khai báo và định nghĩa hàm display() để tìm tổng điểm và điểm trung bình
  - Khai báo đối tượng obj của lớp kế thừa, gọi hàm nhapdiemkiemtra(), nhapdiemgdtc() và display().

- **Bài 2:** Viết chương trình C++ để hiển thị chi tiết bảng lương của nhân viên. Chương trình của bạn sẽ nhắc người dùng nhập id, tên, chức danh, lương cơ bản, phụ cấp thu hút, phụ cấp chức vụ, phụ cấp trách nhiệm, sau đó tính tổng lương và hiển thị kết quả.
   - Đầu tiên, khai báo một lớp cơ sở nhanvien, định nghĩa nhapthongtin hàm để lấy chi tiết về nhân viên.
   - Khai báo lớp kế thừa luong, sau đó khai báo hàm nhapluong để lấy chi tiết về lương nhân viên.
   - Kế tiếp, bạn định nghĩa hàm calculate() để tìm tổng lương và định nghĩa hàm display().
   - Tạo đối tượng của lớp kế thừa, đọc số nhân viên.
   - Sau đó gọi 2 hàm đã định nghĩa ở trên nhapthongtin, nhapluong và calculate() cho mỗi nhân viên và cuối cùng gọi hàm display().

### 2. Constructor:

   - **Bài 1:** Sử dụng constructor để tìm số nguyên tố.
   - **Bài 2:** Tính giai thừa bởi sử dụng copy constructor.

### Bài Tập Tổng Hợp:
   - **Bài 1:** Thư viện X tiến hành cho đăng kí làm thẻ độc giả. Thông tin độc giả gồm: 
     - Họ tên 
     - Ngày lập thẻ
     - Số tháng có hiệu lực của thẻ
   -  Có 2 loại độc giả: trẻ em và người lớn
      - Độc giả trẻ em cần lưu thêm thông tin họ tên người đại diện. Tiền làm thẻ tính theo công thức: số tháng có hiệu lực * 5.000 VND
      - Độc giả người lớn cần lưu thêm thông tin số CMND. Tiền làm thể tính theo công thức: số tháng có hiệu lực * 10.000 VND 
   - **Yêu cầu** Hãy cài đặt các lớp đại diện cho các loại thẻ độc giả trên để: 
     - Quản lí thông tin thẻ 
     - Tính tiền làm thẻ của một thẻ độc giả 
   - Hãy cài đặt lớp ThuVien để quản lí danh sách các thẻ độc giả trong thư viện,với các chức năng sau:
     - Nhập , xuất danh sách các thẻ độc giả 
     - Tính tổng tiền làm thẻ
  - **Bài 2:**   
  a. Thiết lập lớp PhanSo để biểu diễn khái niệm phân số với hai thành phần dữ liệu 
tử số, mẫu số và các hàm thành phần cộng, trừ, nhân, chia hai phân số, các 
hàm thành phần xuất, nhập, định giá trị cho phân số. Viết chương trình cho 
phép nhập vào hai phân số, in ra kết quả các phép toán cộng, trừ, nhân, chia hai 
phân số kể trên. 
    b. Xây dựng lớp biểu diễn khái niệm số phức với hai thành phần dữ liệu thực, ảo
và các hàm thành phần xuất, nhập, định giá trị cho số phức, cộng, trừ, nhân, 
chia hai số phức. Viết chương trình cho phép nhập vào hai số phức, in ra kết quả
các phép toán cộng, trừ, nhân, chia hai số phức kể trên.
