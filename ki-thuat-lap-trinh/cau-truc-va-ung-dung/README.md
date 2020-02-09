# Cấu trúc và Ứng dụng
1. **Vấn đề 1:**
2. **Vấn đề 2:** Quản lý điểm sinh viên 

    Điểm học phần Kỹ thuật lập trình của sinh viên được quản lý bằng một mảng cấu trúc (mỗi 		phần tử lưu thông tin và điểm thi của một sinh viên).  

    _Yêu cầu:_  
    1. Định nghĩa kiểu cấu trúc **SINHVIEN** quản lý điểm sinh viên gồm: Họ tên, Mã sinh viên, điểm thường kỳ (TK), điểm giữa kỳ (GK), điểm cuối kỳ (CK), điểm thực hành (TH) và điểm trung bình (DTB).
    2. Đọc dữ liệu từ bàn phím (hoặc từ file) vào Mảng cấu trúc của lớp sinh viên (n sinh viên)
    ```
            SINHVIEN A[MAX]; 
            // #define MAX 100  

    ```

    3. Tính điểm trung bình (DTB) của mỗi sinh viên theo công thức:  
DTB= ((((2*TK+3*GK+5*CK)/10)*2)+TH)/3
    4. Hiển thị lên danh sách sinh viên phải học lại (có DTB <4.0) theo khuôn dạng:  

  
    5. Tìm sinh viên có Mã sinh viên X được nhập từ bàn phím. Hiển thị lên màn hình thông tin kết quả học tập của sinh viên đó, hoặc thông báo “Khong tìm thay” nếu không tồn tại sinh viên có mã X.  
      Ho ten: ...............................  
      Ma sinh vien: .........................  
      Diem thuong ky: .......................  
      Diem giua ky: .........................  
      Diem cuoi ky: .........................  
      Diem thuc hanh: .......................  
      Diem trung binh: ......................  

    6. Sắp xếp lại dữ liệu để được danh sách theo thứ tự giảm dần của DTB
    7. Hiển thị lên màn hình DANH SÁCH ĐIỂM THI KTLT theo khuôn dạng sau:
