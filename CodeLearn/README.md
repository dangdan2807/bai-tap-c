# Bài tập CodeLearn.io

1. **Bài 1: distance To Z**  
Cho một mảng chứa các số nguyên dương `a`, trong đó mỗi phần tử `a[i]` biểu diễn khoảng cách từ vị trí một chữ cái tới vị trí của chữ cái z trong bảng chữ cái tiếng Anh.
    Ví dụ, khoảng cách từ chữ cái `z` tới chữ cái `z` là 0, khoảng cách từ chữ cái `y` tới chữ cái `z` là 1, khoảng cách từ chữ cái `x` tới chữ cái `z` là `2`,...

    Lưu ý nếu `a[i] = -1` thì nó sẽ biểu thị cho dấu cách.

    Nhiệm vụ của bạn là tìm chuỗi biểu diễn cho các phần tử trong mảng `a`.  

    **Ví dụ:**

   - Với `a = [18, 21, 14, 14, 11]`, thì kết quả sẽ là `distanceToZ(arr) = "hello"`.    
Ta có `a[0] = 18` vậy chữ cái ở đây là chữ `h`.    
Ta có `a[1] = 21` vậy chữ cái ở đây là chữ `e`.    
Ta có `a[2] = 14` vậy chữ cái ở đây là chữ `l`.    
Ta có `a[3] = 14` vậy chữ cái ở đây là chữ `l`.    
Ta có `a[4] = 11` vậy chữ cái ở đây là chữ `o`.    
Với `a = [18, 21, 14, 14, 11, -1, 3, 11, 8, 14, 22]`, thì kết quả sẽ là `distanceToZ(arr) = "hello world"`.  
Ta có `a[0] = 18` vậy chữ cái ở đây là chữ `h`.  
Ta có `a[1] = 21` vậy chữ cái ở đây là chữ `e`.  
Ta có `a[2] = 14` vậy chữ cái ở đây là chữ `l`.  
Ta có `a[3] = 14` vậy chữ cái ở đây là chữ `l`.  
Ta có `a[4] = 11` vậy chữ cái ở đây là chữ `o`.  
Ta có `a[5] = -1` vậy ở đây ta có dấu cách.  
Ta có `a[6] = 3` vậy chữ cái ở đây là chữ `w`.  
Ta có `a[7] = 11` vậy chữ cái ở đây là chữ `o`.  
Ta có `a[8] = 8` vậy chữ cái ở đây là chữ `r`.  
Ta có `a[9] = 14` vậy chữ cái ở đây là chữ `l`.  
Ta có `a[10] = 22` vậy chữ cái ở đây là chữ `d`. 
    #### **CASE** 
    |                                                                                                                                                           input                                                                                                                                                            |                                        output                                         |
    | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: | :-----------------------------------------------------------------------------------: |
    |                                                                                                                                                     18, 21, 14, 14, 11                                                                                                                                                     |                                         hello                                         |
    |                                                                                                                                          18, 21, 14, 14, 11, -1, 3, 11, 8, 14, 22                                                                                                                                          |                                      hello world                                      |
    |                                                                                                                                             23, 11, 22, 21, 14, 21, 25, 8, 12                                                                                                                                              |                                       codelearn                                       |
    |                                                                                                                               20, 7, 11, 20, 6, -1, 17, 12, -1, 6, 18, 21, -1, 12, 21, 3, 7                                                                                                                                |                                   fsoft in the news                                   |
    | 3, 18, 21, 12, -1, 1, 11, 5, -1, 3, 25, 12, 6, -1, 6, 11, -1, 6, 25, 15, 21, -1, 23,11, 12, 6, 8, 11, 14, -1, 11, 20, -1, 1, 11, 5, 8, -1, 14, 17, 20, 21, -1, 25, 12, 22, -1, 13, 25, 15, 21, -1, 6, 18, 21, -1, 13, 11, 7, 6, -1, 11, 20, -1, 21, 4, 21, 8, 1, 6, 18, 17, 12, 19, -1, 25, 8, 11, 5, 12, 22, -1, 1, 11, 5 | when you want to take control of your life and make the most of everything around you |

    [**Làm bài trên codelearn tại đây**](https://codelearn.io/training/detail/306752)