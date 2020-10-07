# BT (Bài tập)

## Tuần 1

1. **Vấn đề 1:** Ôn tập các thao tác trên mảng một chiều  
    Cho mảng a có n phần tử số nguyên. Viết các hàm thực hiện các công việc: nhập/ xuất mảng, phát sinh mảng, đọc/ ghi mảng vào file.
    ```
    void NhapMang(int a[], int n)
    {
        for(int i=0; i<n; i++)
        {
            printf("a[%d]=", i);
            scanf("%d", &a[i]);
        }
    }
    void PhatSinhMang(int a[], int n)
    {
        srand(time(NULL));
        for(int i=0; i<n; i++)
        {
            a[i] = rand();
        }
    }
    void XuatMang( a[], int n)
    {
        printf("\n");
        for(int i=0; i<n; i++)
        {
            scanf("%10d", a[i]);
        }
    }

    //Ghi mảng a có n phần tử vào file text
    int GhiMangVaoFileText(char * filename, int a[], int n)
    {
        FILE* f = fopen(filename, "w");
        if(!f) //Không mở file để ghi được
            return 0;
        for(int i = 0; i<n; i++)
            printf(f , "%d\t", a[i]); 
        //Ghi từng phần tử a[i] vào file, cách nhau một tab
        fclose(f);
            return 1; //Ghi file thành công trả về 1
    }

    //Đọc file text vào mảng a
    int DocFileTextVaoMang(char * filename, itn a[], int &n)
    {
       FILE* f = fopen(filename, "r");
        if(!f) //Không mở file được
            return 0;
        int i = 0;
        while(! (f)) //Trong khi chưa hết file
        {
            fscanf(f, "%d", &a[i]); //Đọc từng PT vào mảng
            i++; //đếm số phần tử
        }
        n = i;
    }
    ```

2. **Vấn đề 2:** Thuật toán tìm kiếm tuyến tính (tìm tuần tự).
    Là một phương pháp tìm kiếm một phần tử cho trước trong một danh sách bằng cách duyệt lần lượt từng phần tử của danh sách đó cho đến lúc tìm thấy giá trị mong muốn hay đã duyệt qua toàn bộ danh sách.

    ```
    int LinearSearch(int a[], int n, int x)
    {
        int i = 0;
        while(i < n && a[i] != x)
            i++;
        if(i < n) return i; //a[i] là phần tử có khoá x
        return -1; // tìm hết mảng nhưng không có x
    }

    void main()
    {
        int a[100], n, x;
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
        NhapMang(a, n);
        printf("Nhap khoa can tim: ");
        scanf("%d", &x);
        int kq = LinearSearch(a, n, x);
        if(kq == -1)
            printf("Khong tim thay");
        else
            printf("Tim thay tai vi tri %d", kq);
    }
    ```
    Cải tiến cài đặt thuật toán tìm kiếm tuyến tính sử dụng phần tử “**lính canh**” để giảm bớt một phép so sánh ở vòng lặp while.
    ```
    int LinearSearch_CaiTien(int a[], int n, int x)
    {
        int i = 0;
        a[n] = x; // thêm lính canh vào cuối mảng
        // while(i < n && a[i] != x) trước khi cải tiến
        while(a[i] != x)
        i++;
        if(i < n) return i; //a[i] là phần tử có khoá x
        return -1; // tìm hết mảng nhưng không có x
    }
    ```
    **Nhận xét:** Tìm kiếm tuyến tính là một giải thuật rất đơn giản khi hiện thực. Giải thuật này tỏ ra khá hiệu quả khi cần tìm kiếm trên một danh sách đủ nhỏ hoặc một danh sách chưa sắp thứ tự đơn giản. Trong trường hợp cần tìm kiếm nhiều lần, dữ liệu thường được xử lý một lần trước khi tìm kiếm: có thể được sắp xếp theo thứ tự, hoặc được xây dựng theo một cấu trúc dữ liệu đặc trưng cho giải thuật hiệu quả hơn.

3. **Vấn đề 3:** Thuật toán tìm kiếm nhị phân.

    Thuật toán tìm kiếm nhị phân dùng để tìm kiếm phần tử trong một danh sách đã được sắp xếp, ví dụ như trong một danh bạ điện thoại sắp xếp theo tên, có thể tìm kiếm số điện thoại của một người theo tên người đó.

    ```
    // Hàm tìm kiếm nhị phân (Đệ quy)
    int BinarySearch( int a[], int left, int right, int x)
    {
        if(left > right) return -1;
        int mid = (left + right) / 2;
        if(x == a[mid])
            return mid;
        if(x < a[mid])
            return BinarySearch(a, left, mid-1, x);
        if(x > a[mid])
            return BinarySearch(a, mid+1, right, x);
    }

    // Phát sinh mảng tăng
    void PhatSinhMangTang(int a[], int n)
    {
        srand(time(NULL));
        a[0] = rand() % 50;
        for(int i = 1; i < n; i++)
        {
            a[i] = a[i - 1] + rand() % 10;
        }
    }

    // Chương trình chính
    void main(){
        int a[100], n, x;
        printf("Ban can phat sinh mang co bao nhieu PT?");
        scanf("%d", &n);}
        PhatSinhMangTang(a, n);
        printf("Nhap khoa can tim");
        scanf("%d", &x);}
        int kq = BinarySearch(a, 0, n-1, x);
        if(kq == -1)
            printf("Khong tim thay");
        else
            printf("Tim thay tai vi tri %d", kq);
    }
    ```

4. **Vấn đề 4:** So sánh thời gian chạy thực tế của hai thuật toán tìm tuyến tính và tìm nhị phân. Thử nghiệm với số phần tử mảng khoảng 100.000
    ```
    #include <time.h>
    clock_t start, end;

    start = clock();
    // tìm kiếm tuyến tính
    end = clock();
    double t = end - start;
    printf("Thoi gian tim kiem tuyen tinh la: %f", t);
    
    start = clock();
    // tìm kiếm nhị phân
    end = clock();
    double t = end - start;
    printf("Thoi gian tim kiem nhi phan la: %f", t);
    ```
#### BÀI TẬP VỀ NHÀ: 
Hãy viết lại hàm BinarySearch không dùng đệ quy.

#### BÀI TẬP LÀM THÊM:
Ap dụng các thuật toán tìm kiếm để xây dựng chương trình tra từ điển Anh Việt.
**Ghi chú:** Định nghĩa cấu trúc WORD trong từ điển bao gồm từ gốc tiếng Anh và nghĩa của từ (tiếng Việt không dấu).

```
struct WORD
{
    char Name[256];
    char Meaning[512];
}
```