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
   - Đầu tiên, khai báo một lớp cơ sở nhanvien, định nghĩa hàm để lấy chi tiết về nhân viên.
   - Khai báo lớp kế thừa luong, sau đó khai báo hàm để lấy chi tiết về lương nhân viên.
   - Kế tiếp, bạn định nghĩa hàm calculate() để tìm tổng lương và định nghĩa hàm display().
   - Tạo đối tượng của lớp kế thừa, đọc số nhân viên.
   - Sau đó gọi 2 hàm đã định nghĩa ở trênvà calculate() cho mỗi nhân viên và cuối cùng gọi hàm display().
