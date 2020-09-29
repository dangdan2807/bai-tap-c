# Thao tác con trỏ

1. **Vấn đề 1:** Biến con trỏ và khai báo  

    Chạy đoạn chương trình sau trên máy tính và quan sát kết quả. Giải thích quá trình máy tính cung cấp ô nhớ cho các đối tượng biến nguyên và biến con trỏ nguyên.
    ```
    #include <stdio.h>
    int main()
    { 
      int x=10;
      int *xtro;
      xtro=&x;
      printf("\n1. Địa chỉ của biến x là:%p",&x); 
      printf("\n2. Địa chỉ của biến xtro là:%p",&xtro);
      printf("\n3. Nội dung của biến x là: %d",x); 
      printf("\n4. Nội dung của biến xtro là: %p",xtro); 
      printf("\nG5. iá trị mà xtro trỏ đến:%d",*xtro); 
      *xtro = 50 ;  
      printf("\n6. Giá trị x la %d",x);
      return 0;
    }
    ```

    #### Giải thích
  > - Hệ thống máy tính sẽ khỏi tạo 1 biến kiển số nguyên tên x và đồng thời cấp phát 1 vùng nhớ kiểu int (liên kết địa chỉ vùng nhớ bất kì trên thanh RAM với biến) và gán cho nó bằng 10.  
  > - Đối với biến là con trỏ cũng như thế nhưng nó sẽ lưu địa chỉ của 1 biến được gán cho nó.

2. **Vấn đề 2:** Đối tượng tham chiếu (*) và Phép toán trên con trỏ.  

    Cả hai toán tử tăng `(++)` và giảm `(--)` đều có quyền ưu tiên lớn hơn toán tử tham chiếu `(*)`, vì vậy câu lệnh: `*p++;` tương đương với `*(p++);` Cần hiểu:  
    - `(*p)++   /* đầu tiên lấy giá trị của biến mà con trỏ p trỏ tới, sau đó giá trị của biến mà p trỏ tới tăng lên một đơn vị */`  
    - `(*p)--    /* đầu tiên lấy giá trị của biến mà con trỏ p trỏ tới, sau đó giá trị của biến mà p trỏ tới giảm xuống một đơn vị  */`  
     - `*(++p)    /* đầu tiên con trỏ p trỏ đến địa chỉ kế tiếp, sau đó lấy giá trị chứa trong địa chỉ này */`  
    - `*(p--)    /* đầu tiên lấy giá trị p trỏ tới, sau đó con trỏ p trỏ đến địa chỉ  trước nó */`  

    Anh/Chị hãy thêm lệnh in giá trị của x sau mỗi lần thay đổi (gán) ở đoạn chương trình dưới đây,  ghi lại kết  quả khi thực hiện chương trình, Giải thích quá trình máy tính cung cấp ô nhớ và sự thay đổi giá trị của các biến mỗi khi có tác động các phép tính lên các đối tượng đó. 
      ```
      #include <stdio.h>
      int  main() 
      {
        int a[10],*pa,x;
        a[0]=11; a[1]=22; a[2]=33; a[3]=44; 
        pa=&a[0]; 
        x=*pa;
        pa++; 
        x=*pa; 
        x=*pa+1; 
        x=*(pa+1); 
        x=*++pa; 
        x=++*pa; 
        x=*pa++; 
        return 0;
      } 
      ```
    #### Giải thích
     - Khi bắt đầu máy tính sẽ khỏi tạo biến `x` và mảng a và cấp cho nó 1 vùng nhớ. Biến x thì được cấp 1 vùng nhớ kiểu int. Mảng `a[]` thì được cấp 1 chuỗi gồm nhiều ô nhớ liên tiếp nhau và địa chỉ chính là địa chỉ của phần tử thử 0.
     - còn đối với biến con trỏ `*pa` thì sẽ tạo ra 1 con trỏ `NULL` rồi sau đó gán nó băng địa chỉ của của phần tử thứ 0 của mảng `a[]`
     ```
     x=*pa;          // x = 11, x được gán bằng giá trị tại vùng nhớ mà con trỏ pa trỏ tới là a[0]
     pa++;           // x = 22, con trỏ đến phần tử tiếp theo của mảng a[] là a[1]
     x=*pa;          // x = 22, x được bằng giá trị mà con trỏ trỏ đến là a[1]
     x=*pa+1;        // x = 23, x được bằng giá trị mà con trỏ trỏ đến và tăng lên 1. (a[1] + 1)
     x=*(pa+1);      // x = 33, tăng biến con trỏ pa - trỏ đến phần tử a[2] rồi gán cho x
     x=*++pa;        // x = 33, tăng biến pa để trỏ đến phần tử a[3] của mảng a[] rồi gàn cho x
     x=++*pa;        // x = 34, tăng giá trị tại vùng nhớ mà biến con trỏ pa đang trỏ đến lên 1 đơn vị rồi gán cho biến x
     x=*pa++;        // x = 34, gán giá trị mà biến con trỏ pa trỏ đến cho x rồi tăng nó lên 1 đơn vị.
     ```

3. **Vấn đề 3:** Con trỏ mảng một chiều.

    Tên mảng là một con trỏ hằng và trỏ vào phần tử đầu tiên của mảng.  
    Xét các khai báo sau:     `int a[10];    int *pa;`  
    Với các khai báo này, ta có thể gán `pa = a;` lúc này con trỏ pa và a đều trỏ đến phần tử `a[0]`.  
    ![tt-con-tro-vd3-1]()  
    Và `pa+i` sẽ trỏ tới phần tử `a[i]` như hình vẽ sau:  
    ![tt-con-tro-vd3-2]()  

    Lúc này ta có các biểu thức tương đương:
    ```
    *pa                tương đương     a[0]
    *(pa + i)          tương đương     a[i]
    pa + i             tương đương     &a[i]
    pa = pa + 4        tương đương     pa = &a[4]
    và a[i] có thể thay bằng *(a + i).
    ```

    Anh/chị hãy chạy các đoạn chương trình sau trên máy tính và giải thích kết quả (trình bày quá trình cung cấp bộ nhớ, và sự thay đổi giá trị ô nhớ sau mỗi câu lệnh).  
    #### a) Chương trình 1:  
    ```
    #include <stdio.h>
    int  main() 
    {
       int a[]={9,8,7,6,18};
       int i; 
       for(i=0;i<5;i++)
         printf("%d\n",*(a+i)); 
       return 0;
    } 
    ```
    #### b) Chương trình 2:  
    ```
    #include <stdio.h>
    int main()
    { 
      int ar[]={10,15,4,25,3,-4},*p, i;
      p=&ar[2];
      printf("Cac gia tri cua mang:\n\n");
      for(i=0;i<6;i++)
        printf("ar[%d]=%4d\n",i,ar[i]);
      printf("\nCho biet gia tri cua cac bieu thuc\n\n");
      printf("a) *(p+1)= %d\n\n",*(p+1));
      printf("b) p[-1]= %d\n\n",p[-1]);
      printf("c) (ar-p)=%d\n\n",(ar-p));
      printf("d) ar[*p++]=%d\n\n",ar[*p++]);
      printf("e) *(ar+ar[2])=%d\n\n",*(ar+ar[2]));
      return 0;
    }
    ```
    #### Giải thích:
    a)  
      - Khởi tạo 1 mảng `a[]` kiểu `int`và cấp phát 1 các ô nhớ liền nhau và địa chỉ tại ô nhớ thứ 0 và gán giá trị các phần tử của mảng lần lượt là `9, 8, 7, 6, 18`  
      `int a[] = {9, 8, 7, 6, 18};`  
      - Khởi tạo 1 biến `i` với kiểu dữ liệu `int`  
       int i;  
      - Mở đầu vòng lặp `for` gán cho `i = 0`. Khi 1 vòng lặp được thực hiện thì máy tính sẽ truy cập đến địa chỉ của mảng và cộng theo thứ `i` để lấy giá trị nằm trong địa chỉ ô nhớ đó.  
       `for(i = 0; i < 5; i++)`
       `printf("%d\n",*(a+i));`

    b)  
      - Khởi tạo 1 mảng `a[]` kiểu `int`và cấp phát 1 các ô nhớ liền nhau và địa chỉ tại ô nhớ thứ 0 và gán giá trị các phần tử của mảng lần lượt là `10, 15, 4, 25, 3, -4`.  
      - Khởi tạo 1 biến `i` với kiểu dữ liệu `int`  
      - Khởi tạo 1 biến con trỏ `*p` với kiểu dữ liệu `int`  
      `int ar[] = {10, 15, 4, 25, 3, -4}, *p, i;`  
      - Gán giá trị của con trỏ p bằng địa chỉ của phần tử thứ 2 của mảng `ar[]`  
      `p = &ar[2];`  
      - Con trỏ `p` trỏ vào ô nhớ tiếp theo của mảng `ar[]`tính từ ô nhơ được gan ban đầu và lấy giá trị tại vùng mà con trỏ `p` trỏ đến.  
      `printf("a) *(p+1) = %d\n\n", *(p+1));`  
      - Từ ô nhớ được gan ban đầu(`ar[2]`) con trỏ `p` lùi lại 1 ô nhớ9(`ar[1]`) và lấy giá trị tại ô nhớ đó.  
       `printf("b) p[-1] = %d\n\n", p[-1]);`  
       - Lấy số phần tử của `ar - p ((p-2) - p)`  
       `printf("c) (ar-p) = %d\n\n", (ar-p));`  
       - Lấy giá trị tại vùng nhớ mà con trỏ trỏ đến để làm vị trí xác định của mảng `ar[]` rồi tăng giá trị tại đó lên 1 đơn vị  
       `printf("d) ar[*p++] = %d\n\n", ar[*p++]);`  
       - Lấy số phần tử của `ar + ar[2] ((p-2) + p)`  
       `printf("e) *(ar+ar[2]) = %d\n\n", *(ar+ar[2]));`  

4. **Vấn đề 4:** Thao tác trên mảng con trỏ

    Giải thích cách thức hoạt động của mảng con trỏ hàm trong chương trình sau đây:  
    ```
    #include <stdio.h>
    #include <conio.h>
    #include <iostream.h>
    void nhap(long &x, long &y);
    void bp(long &x, long &y);
    void lp(long &x, long &y);
    void hv(long &x, long &y);
    void hienthi(long a, long b);
    int main()
    {
      const max = 5;
      void (*pfa[max])(long &, long &);
      long a=1, b=2;
      int chon;
      for(int i=0;i<max;i++)
      {
         printf("\n(1)Nhap (2)Binhphuong (3)Lapphuong (4)Hoanvi \n");
         scanf("%d",&chon);
         switch (chon)
         {
            case 1: pfa[i] = nhap;break;
            case 2: pfa[i] = bp;break;
            case 3: pfa[i] = lp;break;
            case 4: pfa[i] = hv;break;
            default:pfa[i] = 0;
          }
       }
       for(i=0;i<max;i++)
       {
          pfa[i](a,b);
          hienthi(a,b);
       }
       getch();
       return 0;
     }
    void hienthi(long x, long y)
    {
      printf("\n a = %ld, b = %ld \n",x,y);
    }
    void bp(long &x, long &y)
    {
      x *= x;
      y *= y;
    }
    void lp(long &x, long &y)
    {
      x = x*x*x;
      y = y*y*y;
    }
    void hv(long &x, long &y)
    { 
      long tam =x;
      x = y;
      y = tam;
    }
    void nhap(long &x, long &y)
    { 
      printf("\n Nhap gia tri moi cua a: ");
      scanf("%ld",&x);
      printf("\n Nhap gia tri moi cua b: ");
      scanf("%ld",&y);
    }
    ```
    #### Giải thích  
    - Ở vòng lặp `for`đầu tiên gán từng phần tử của mảng con trỏ `pfa[]` bằng các hàm do người dùng lựa chọn.  
    - Còn vòng lặp `for` thứ 2 thì sẽ gọi đến từng hàm đã được lưu trong mảng con trỏ. Khi gọi hàm sẽ truyền vào các tham số `a = 1` và `b = 2` đã tạo ở đầu chương trinh và sử dụng nó nếu người dùng không truyền vào tham số mới. Sau khi chạy hàm sẽ lưu vào vùng nhớ của các tham số truyền vào vì dùng truyền trị(&), sao đó sẽ gọi đến hàm `hienthi()` để hiển thị ra.  
