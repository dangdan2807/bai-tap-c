# Con trỏ và tham số chương trình

1. **Vấn đề 1:** Tham biến – Tham trị;

    (Truyền địa chỉ và Truyền giá trị cho tham số hình thức khi thực hiện lời gọi hàm)  

    ### **1.1:** Cho biết kết quả hiện lên màn hình khi thực hiện chương trình sau. Giải thích?  
    ```
    // Problem: Variable-Value.cpp
    // Author : Nguyen Huu Tinh
    // Date   : September 9, 2015
    #include <stdio.h>
    #include <conio.h>

    void val (int a);
    void var(int &a);

    int main()
    {
      int x = 2, y = 2;
      printf("\n Gia tri ban dau: x = %d va y = %d", x, y);
      val(x); 
      var(y);
      printf("\n Gia tri sau khi goi ham lan 1: x = %d va y = %d", x, y);
      return 0;
    }

    void val(int a)
    {
      a = a + 1;
    }

    void var(int &a)
    {
      a = a + 1;
     }  
    ```
    
    #### Kết quả:
    ```
    Gia tri ban dau: x = 2 va y = 2
    Gia tri sau khi goi ham lan 1: x = 2 va y = 3
    ```
    #### Giải thích:
    - Hàm `val()` khi được truyền thì máy tính sẽ sao chép giá trị của biến `x` được truyền vào biến `a` của hàm  rồi sau đó tính toán và khi kết thúc hàm thì  biến `a` sẽ được giải phóng và không lưu lại vì đâu là cách truyền biến.  
    - Hàm `var()` khi được truyền(truyền trị) thì máy tính sẽ lấy trực tiếp giá trị của biến `y` để tính toán biến `a` của hàm chỉ là biến hình thức. Khi kết thúc hàm thì giá trị của biến `y` sẽ được lưu lại.
    ### **1.2:**  Giải thích cách thức hoạt động của con trỏ hàm trong chương trình sau đây:  
    ```
    #include <stdio.h>
    #include <conio.h>
    #include <iostream>
    enum bool {false, true};

    void nhap(int &x, int &y);
    void bp(int &x, int &y);
    void lp(int &x, int &y);
    void hv(int &x, int &y);
    void hienthi(int a, int b);

    int main()
    {
       void (*pf)(int &, int &);
       bool thoat = false;  
       int a = 2, b = 4;
       int chon;
       while(thoat == false)
       {
          printf("\n (0)Thoat   (1)Nhap   (2)Binh phuong   (3)Lap phuong   (4)Hoan vi \n");
          scanf("%d", &chon);
          switch (chon)
          {
             case 1: pf = nhap; break;
             case 2: pf = bp; break;
             case 3: pf = lp; break;
             case 4: pf = hv; break;
             default: thoat = true; break;
          }
          if(thoat) break;
          hienthi(a,b);
          pf(a,b);
          hienthi(a,b);
       }
       return 0;
    }
    void hienthi(int x, int y) 
    {
      printf("\n a = %d, b = %d \n", x, y); 
    }  

    void bp(int &x, int &y)
    {
      x *= x;
      y *= y;
    }  

    void lp(int &x, int &y)
    {
      x = x*x*x;
      y = y*y*y;
    }  

    void hv(int &x, int &y)
    {
      int tam =x;
      x = y;
      y = tam;
    }  

    void nhap(int &x, int &y)
    {
      printf("\n Nhap gia tri moi cua a: ");
      scanf("%d", &x);
      printf("\n Nhap gia tri moi cua b: "); 
      scanf("%d", &y);
    }  
    ```
    
    #### Giải thích:  
    - Khi nhập lựa chọn máy tính sẽ dẫn đến `case` tương ứng và thực hiện hàm được trỏ ở `case` đó trỏ đến và tự truyền các tham số như đã khai báo của hàm con trỏ phía trên. Và thực hiện các lệnh trong hàm và `break;` khỏi `switch`.  

    ### **1.3:** Viết lại chương trình trên nhưng không sử dụng con trỏ hàm.  
    ### **1.4:** Giải thích cách thức hoạt động của tham số hàm là con trỏ hàm trong chương trình sau đây:  
    ```
    #include <stdio.h>
    #include <conio.h>
    #include <iostream>
    enum bool {false, true};

    void nhap(int &x, int &y);
    void bp(int &x, int &y);
    void lp(int &x, int &y);
    void hv(int &x, int &y);
    void hienthi(void (*)(int &, int &), int &, int &);

    int main()
    {
      void (*pf)(int &, int &);
      bool thoat = false;
      int a = 2, b = 4;
      int chon;
      clrscr();
      while(thoat == false)
      {
        printf("\n (0) Thoat (1)Nhap (2)Binhphuong (3)Lapphuong (4)Hoanvi \n");
        scanf("%d", &chon);
        switch (chon)
        { 
           case 1: pf = nhap; break;
           case 2: pf = bp; break;
           case 3: pf = lp; break;
           case 4: pf = hv; break;
           default: thoat = true; break;
         }
         if(thoat)break;
         hienthi(pf,a,b);
      }
      return 0;
    }

    void hienthi(void (*pf)(int &, int &),int &x, int &y)
    {
      printf("\n a = %d, b = %d \n", x, y);
      pf(x, y);   
      printf("\n a = %d, b = %d \n", x, y);
    }

    void bp(int &x, int &y)
    { 
      x *= x;
      y *= y;
    }

    void lp(int &x, int &y)
    {
      x = x*x*x;
      y = y*y*y;
    }

    void hv(int &x, int &y)
    { 
      int tam =x;
      x = y;
      y = tam;
    }

    void nhap(int &x, int &y)
    { 
      printf("\n Nhap gia tri moi cua a: ");
      scanf("%d", &x);
      printf("\n Nhap gia tri moi cua b: ");
      scanf("%d", &y);
    }
    ```
    #### Giải thích:
    - Khi xuất hiện lời gọi hàm `hienthi(pf, a, b);` hàm sẽ được thực thi với các tham số truyền vào. Khi đền dòng lệnh `pf(x, y);` con trỏ hàm sẽ trỏ đến hàm vừa được trỏ trong câu điều kiện `switch` và đồng thời truyền vào các tham số `x, y` rồi thực thi hàm đã được gán ở trên câu điều kiện `switch`.

2. **Vấn đề 2:** Hiện tượng che biến
(Các tham biến sử dụng cho ô nhớ - nhiều biến con trỏ cùng trỏ vào một ô nhớ).  

    Cho biết kết quả hiện lên màn hình khi thực hiện chương trình sau. Giải thích?  
    ```
    // Problem: Haizzz.cpp
    // Author : Nguyen Huu Tinh
    // Date   : September 9, 2015

    #include <stdio.h>
    #include <conio.h>
    void hayza(int &x, int &y)
    {
      int t;
      t = x;
      y = y + 1;
      if(t != x) printf("\n Ha^y za ....!");
    }

    int main()
    {
      int i;    
      int a[2];
      i = 0; a[0] = 0; a[1] = 1;
      hayza(i, i);    hayza(a[i], a[i]);
      printf("\ni = %d  a[0] = %d  a[1] = %d", i, a[0], a[1]);
      return 0;
    }
    ```  
    
    #### Kết quả:
    ```
    Ha^y za ....!  
    Ha^y za ....!  
    i = 1  a[0] = 0  a[1] = 2
    ```
    
    #### Giải thích:
    - Ở lời gọi hàm đấu tiên `hayza(i, i);`: giá trị của `x` không đổi còn biến `y` tăng lên 1 đơn vị. Vì tham số truyền vào đều là biến `i` nên biến `i` tăng lên 1, mà ở đầu hàm t = i = 0 nên cuối hàm i(= 1) ≠ t(= 0) nên hiển thị ra màn hình `Ha^y za ....!`  
    - Ở lời gọi hàm thứ 2 `hayza(a[i], a[i]);` ta có i = 1 nên t = a[1] = 1. Theo hàm `y = y + 1` nên `y + 1` = a[1] + 1 = 2.  
 Khi đến câu điều kiện `if` vì t(= 1) ≠ y(= 2) nên hiển thị ra màn hình `Ha^y za ....!`  
    - Vì hàm `hayza()` sử dụng truyền trị nên giá trị của i và a[i] cũng được lưu lại khi thoát ra khỏi hàm nên hiển thị ra màn hình `i = 1  a[0] = 0  a[1] = 2`  
    
3. **Vấn đề 3:** Thứ tự gọi hàm
(Khi thực hiện phép gán, các hàm được gọi theo thứ tự từ phải sang trái?)  

    Cho biết kết quả hiện lên màn hình khi thực hiện chương trình sau. Giải thích?  
    ```
    // Problem: One.cpp
    // Author : Nguyen Huu Tinh
    // Date   : September 9, 2015
    #include <stdio.h>
    #include <conio.h>

    int one(int &x)
    {
      x = x + 1;
      return(x);
    }

    int main()
    {
      int i;
      int a[10];
      for(i = 0; i <= 9; i++)
      {
        a[i] = i;
        printf("a[%d] = %d  ", i, a[i]);
      }
      i=5;
      a[one(i)] = a[one(i)];
      for(i = 0; i <= 9; i++)
        printf("a[%d] = %d  ", i, a[i]);
      return 0;
    }
    ```
