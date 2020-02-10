# Cấu trúc và Ứng dụng
1. **Vấn đề 1:**  
    1. **Bài toán 1:** Quản lý học viên

        Để quản lý điểm thi cho một lớp học Tin học Văn phòng, người ta cần quản lý  các thông tin sau về mỗi học viên:  
        ```
        HoLot          Chuỗi ký tự (30)     /* Họ lót */    
        Ten            Chuỗi ký tự (30)     /* Tên */
        Ngaysinh       Chuỗi ký tự (8)      /* Ngày sinh */
        Noisinh        Chuỗi ký tự (40)     /* Nơi sinh */
        D_WIN          0..10                /* Điểm Windows, điểm tròn */
        D_WORD         0..10                /* Điểm Word, điểm tròn */
        D_EXCEL        0..10                /* Điểm Excel, điểm tròn */
        TONGDIEM       0..30                /* Tổng điểm */
        X_LOAI         Chuỗi ký tự (20)     /* Xếp loại */
        ```

        _Yêu cầu:_ Hãy viết chương trình thực hiện các công việc sau:
        1. Nhập thông tin của học viên khi đến ghi danh. (Chỉ nhập HoLot, Ten và Ngaysinh).
        2. Nhập điểm các môn sau khi thi xong: Có thể nhập điểm cho bất kỳ môn nào tại mỗi thời điểm.
        3. In danh sách học viên ra màn hình, theo dạng sau:  
        ![cautruc-ud-vd1-bai1-1](/ki-thuat-lap-trinh/image/cautruc-ud-vd2-bai1-1.jpg)
        4. Xử lý dữ liệu theo yêu cầu sau:  
         ` Tính TONGDIEM = D_WIN + D_WORD + D_EXCEL`
         * Căn cứ vào TONGDIEM để xếp loại như sau:  
             - Giỏi nếu     TONGDIEM ≥ 24  
             - Khá nếu         18 ≤ TONGDIEM < 24  
             - T.Bình nếu    15 <= TONGDIEM < 18  
             - Kém    nếu         TONGDIEM < 15    
        5. In kết quả thi của các học viên ra màn hình theo dạng sau:  
        ![cautruc-ud-vd1-bai1-2](/ki-thuat-lap-trinh/image/cautruc-ud-vd2-bai1-2.jpg)

    2. **Bài toán 2:** Tính diện tích cánh đồng.  
 
        Trên mặt phẳng tọa độ Oxy, mỗi hình chữ nhật được xác định bởi tọa độ  2 điểm (x, y) gốc trên trái và gốc dưới phải. Cánh đồng ngô gồm 2, 3, ... , n hình chữ nhật có thể chồng lên nhau. Tính diện tích của cánh đồng ngô.  

       _Yêu cầu:_  
        1. Định nghĩa cấu trúc pixel để lưu dữ liệu của một điểm trong mặt phẳng. Định nghĩa cấu trúc Hinhchunhat gồm 2 thành phần TrenTrai và DuoiPhai có kiểu pixel.
        2. Tính diện tích cánh đồng gồm 2 hình chữ nhật, 3 hình chữ nhật
        3. Cho n hình chữ nhật (dữ liệu từ file văn bản gồm n+ 1 dòng, dòng đầu là 1 số nguyên cho biết số lượng hình chữ nhật, n dòng tiếp theo mỗi dòng là dữ liệu của 1 hình chữ nhật gồm 4 số viết cách nhau bởi ký tự trắng theo thứ tự ![cautruc-ud-vd1-bai2](/storage/emulated/0/code/bai-tap-c/ki-thuat-lap-trinh/image/cautruc-ud-vd1-bai2.jpg) Hãy tính diện tích cánh đồng được tạo ra bởi n hình chữ nhật đã cho.

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
      ![cautruc-ud-vd2-1](/ki-thuat-lap-trinh/image/cautruc-ud-vd2-1.jpg)
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
    ![cautruc-ud-vd2-2](/ki-thuat-lap-trinh/image/cautruc-ud-vd2-2.jpg)  
    _Cột ghi chú có nội dung “Hoc lai” nếu DTB < 4 hoặc để trống trong trường hợp ngược lại._
