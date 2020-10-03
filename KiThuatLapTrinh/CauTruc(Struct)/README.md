# Cấu trúc (struct)

1. **Vấn đề 1:** Nhận từ bàn phím phân số ` a/b ` và hiển thị lên màn hình phân số tối giản. 

 Input | output 
--------- | -----------
2/4  | 1/2
1/7  | 1/7
-3/6  | -1/2
  

   **_Hướng dẫn:_**  
  1. Định nghĩa PS là kiểu phân số gồm 2 thành phần tử số (là một số nguyên) và mẫu số (là một số tự nhiên khác 0).
  2. Cài đặt hàm ` void input(PS &phanso); ` nhận vào một phân số phanso;
  3. Cài đặt hàm ` void output(PS phanso); ` hiển thị phân số ` phanso ` lên màn hình;
  4. Cài đặt hàm ` int ucln(int a, int b); ` trả về ước số chung lớn nhất cùa 2 số nguyên không âm a và b;
  5. Cài đặt hàm ` void toigian(PS &phanso); ` để tối giản phân số phanso;
Tham khảo chương trình bên dưới để thực hiện kiểm tra tính đúng của các hàm vừa cài đặt ở trên.

```        
        #include <stdio.h>
        typedef struct ps
        {
		    // định nghĩa phân số
        }PS;
        void input(PS &phanso);
        void output(PS phanso);
        int ucln(int a, int b);
        void toigian(PS &phanso);
        int main()
        {
             PS p;
             printf("\nNhap phan so:");    input(p);
             printf("\nPhan so vua nhap:");    output(p);
             toigian(p);
             printf("\nPhan so sau khi toi gian:");
             output(p);
             return 0;      
         }  
```
2. **Vấn đề 2**: Đa giác lồi n đỉnh có tọa độ các đỉnh được lưu trong mảng A. Tính và hiển thị lên màn hình diện tích của đa giác lồi đó.  
![cautruc-vd2-1](/KiThuatLapTrinh/image/cautruc-vd2-1.jpg)

    _Hướng dẫn:_  

    1. Định nghĩa kiểu cấu trúc mô tả một điểm (Point) có tọa độ nguyên trong hệ tọa độ đề-các Oxy. Cấu trúc **_Point_** được định nghĩa như sau:
    ```
            typedef struct point
            {
                 int x;
                 int y;
            }Point; 
    ```  

    2. Viết hàm trả về độ dài đoạn thẳng P1P2 khi biết tọa độ 2 điểm đầu mút.  
` float P1P2(Point P1, Point P2); `  
**Ghi chú:** Công thức tính độ dài đoạn thẳng AB:
  ![cautruc-vd2-2](/KiThuatLapTrinh/image/cautruc-vd2-2.jpg)

    3. Viết hàm trả về diện tích của tam giác P1P2P3 khi biết tọa độ các đỉnh của chúng hoặc trả về 0 khi P1, P2, P3 thẳng hàng.  
  ` float SP1P2P3(Point P1, Point P2, Point P3); `

    4. Tổ chức danh sách đặc (mảng) A chứa tọa độ n đỉnh của đa giác lồi. Thực hiện tính diện tích các tam giác  
    ![cautruc-vd2-4](/KiThuatLapTrinh/image/cautruc-vd2-4.jpg)  
    Khi đó diện tích đa giác lồi bằng tổng diện tích của n-2 tam giác đó.  
        1. Định nghĩa đa giác
        ```
            #define max 1000
            typedef Point PointArray[max];
        ```  

        2. Viết hàm trả về diện tích đa giác. 

            ` float S(PointArray A, int n); `

      _Báo Cáo:_  
Lập báo cáo Input và output cho 3 trường hợp n=3, 6, 10  
  ![cautruc-vd2-3](/KiThuatLapTrinh/image/cautruc-vd2-3.jpg)
