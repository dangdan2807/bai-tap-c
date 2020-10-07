# BT (Bài tập)

## Tuần 2

1. **Vấn đề 1:** Các giải thuật sắp xếp
Sắp xếp là quá trình xử lý một danh sách các phần tử (hoặc các mẫu tin) để đặt chúng theo một thứ tự thỏa mãn một tiêu chuẩn nào đó dựa trên nội dung
thông tin lưu giữ tại mỗi phần tử.
Một số phương pháp sắp xếp thông dụng như: Chọn trực tiếp (`Selection sort`), chèn trực tiếp (`Insertion sort`), đổi chỗ trực tiếp (`Interchange sort`), nổi bọt (`Bubble sort`), `shell sort`, `heap sort`, `quick sort, merge sort`, `radix sort`.
Trong đó, các thuật toán như `Interchange sort`, `Bubble sort`, `Insertion sort`, `Selection sort` là những thuật toán đơn giản dễ cài đặt nhưng chi phí cao. Các thuật toán `Shell sort`, `Heap sort`, `Quick sort`, `Merge sort` phức tạp hơn nhưng hiệu suất cao hơn. Cả hai nhóm thuật toán trên đều có một điểm chung là đều được xây dựng dựa trên cơ sở việc so sánh giá trị của các phần tử trong mảng (hay so sánh các khóa tìm kiếm). Riêng phương pháp `Radix sort` đại diện cho một lớp các thuật toán sắp xếp khác hẳn các thuật toán trước. Lớp thuật toán này không dựa trên giá trị của các phần tử để sắp xếp.

   1. Trong bài thực hành này, sinh viên cài đặt các thuật toán sắp xếp sau
đây:
   - Chọn trực tiếp
   - Chèn trực tiếp
   - Đổi chỗ trực tiếp (`làm ở nhà`)
   - Nổi bọt (`làm ở nhà`)
   - Quicksort
  
   2. Chạy thử các thuật toán trên với các mảng sau:
    Mảng 1: `10 3 7 4 2 8 5 12`
    Mảng 2: `14 33 27 10 35 19 42 44`
   3. Ở mỗi thuật toán sắp xếp, hãy xuất mảng để theo dõi mỗi khi có sự thay
đổi trong mảng. Gợi ý: gọi hàm xuất mảng ngay sau khi gọi hàm hoán
vị.

2. **Vấn đề 2:** So sánh thời gian thực tế của các thuật toán sắp xếp.
    *Bước 1:* Phát sinh 5 mảng số nguyên, mỗi mảng có 50.000 phần tử. Lưu 5 mảng vừa tạo vào 5 tập tin `mang1.int`, `mang2.int`, `mang3.int`, `mang4.int` và `mang5.int`.
    *Bước 2:* Chạy thử từng thuật toán sắp xếp cho 5 mảng trên và điền vào các bảng thống kê sau: 

    **Phương pháp chọn trực tiếp**
    | **Mảng** | **Thời gian chạy (mili giây)** | **Số lần so sánh (lệnh if)** | **Số lần hoán vị** |
    | :------- | ------------------------------ | ---------------------------- | -----------------: |
    | 1        |                                |                              |                    |
    | 2        |                                |                              |                    |
    | 3        |                                |                              |                    |
    | 4        |                                |                              |                    |
    | 5        |                                |                              |                    |

    **Phương pháp chèn trực tiếp**
    | **Mảng** | **Thời gian chạy (mili giây)** | **Số lần so sánh (lệnh if)** | **Số lần hoán vị** |
    | :------- | ------------------------------ | ---------------------------- | -----------------: |
    | 1        |                                |                              |                    |
    | 2        |                                |                              |                    |
    | 3        |                                |                              |                    |
    | 4        |                                |                              |                    |
    | 5        |                                |                              |                    |

    **Phương pháp đổi chỗ trực tiếp**
    | **Mảng** | **Thời gian chạy (mili giây)** | **Số lần so sánh (lệnh if)** | **Số lần hoán vị** |
    | :------- | ------------------------------ | ---------------------------- | -----------------: |
    | 1        |                                |                              |                    |
    | 2        |                                |                              |                    |
    | 3        |                                |                              |                    |
    | 4        |                                |                              |                    |
    | 5        |                                |                              |                    |

    **Phương pháp nổi bọt**
    | **Mảng**                | **Thời gian chạy (mili giây)** | **Số lần so sánh (lệnh if)** | **Số lần hoán vị** |
    | :---------------------- | ------------------------------ | ---------------------------- | -----------------: |  
    | 1                       |                                |                              |                    |
    | 2                       |                                |                              |                    |
    | 3                       |                                |                              |                    |
    | 4                       |                                |                              |                    |
    | 5                       |                                |                              |                    |

    **Phương pháp  sắp xếp nhanh (quick sort)**
    | **Mảng** | **Thời gian chạy (mili giây)** | **Số lần so sánh (lệnh if)** | **Số lần hoán vị** |
    | :------- | ------------------------------ | ---------------------------- | -----------------: |
    | 1        |                                |                              |                    |
    | 2        |                                |                              |                    |
    | 3        |                                |                              |                    |
    | 4        |                                |                              |                    |
    | 5        |                                |                              |                    |

#### BÀI TẬP VỀ NHÀ:
Thực hiện tất cả các yêu cầu như trên cho hai phương pháp:
- Sắp xếp đổi chỗ trực tiếp
- Sắp xếp nổi bọt

#### BÀI TẬP LÀM THÊM:
Cho mảng một chiều quản lý thông tin của các sinh viên trong một lớp học
(tối đa 50 sinh viên). Mỗi sinh viên gồm các thông tin: `MSSV`, `họ và tên`,
`giới tính`, `địa chỉ` và `điểm trung bình`. Viết chương trình thực hiện các yêu
cầu sau:
1. Nhập các sinh viên vào danh sách.
2. In danh sách sinh viên.
3. Xuất thông tin của sinh viên có mã số x.
4. Sắp xếp danh sách sinh viên theo thứ tự `tăng dần` của `điểm trung bình`.
5. Sắp xếp danh sách sinh viên theo thứ tự `tăng dần` của `họ và tên`.