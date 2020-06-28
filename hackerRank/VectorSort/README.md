# Vector Sort

Bạn đã được nhận **N** số nguyên. Sắp xếp các số nguyên **N** và in thứ tự sắp xếp.

- Declaration (Khai báo):  
```
vector<int> v; //(tạo một vectơ rỗng kiểu số nguyên)  
```
- Size (kích thước):  
```
int size = v.size();
```
- Pushing an integer into a vector (thêm số nguyên vào vector):  

```
v.push_back(x); //(x có kiểu integer. Kích thước của mảng tăng lên 1 sau khi thêm vào.)
```
- Popping the last element from the vector (Xóa phần tủ cuối cùng của vector):
```
v.pop_back(); //(sau khi xóa vector giảm 1 phần tử)
```
- Sorting a vector (Sắp xếp vector):
```
sort(v.begin(),v.end()); //(Sắp xếp tất cả các phần tử của vector)
```
Để biết thêm về vectors, [Click Here](http://www.cplusplus.com/reference/vector/vector/)

### Input Format (đầu vào)

Dòng đầu tiên chứa N số lượng số N, Dòng tiếp theo chứa các số nguyên cách nhau bởi 1 dấu cách.
### Constraints (điều kiện)
```
1 <= N <= 10^5
1 <= V(i) <= 10^9, với V(i) ứng với vị trí i trên vector
```

### Output Format (đầu ra)

In các số nguyên theo thứ tự sắp xếp trong một dòng, các số cách nhau bằng dấu cách.

### Sample Input (ví dụ)
```
5
1 6 10 8 4
```
### Sample Output
```
1 4 6 8 10
```
`các bạn vào linh nguồn để làm (có sẵn ide trên đó) + case luôn nha - mình lười up :)`
### - Nguồn bài gốc (HackerRank - tiếng Anh) - [Click here](https://www.hackerrank.com/challenges/vector-sort)