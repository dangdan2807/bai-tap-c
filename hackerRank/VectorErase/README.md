# Vector Erase (Xóa phần tử trong Vector)

Cho 1 vector N số nguyên và tham số đầu vào. Đối với tham số đầu tiên, nó biểu thị vị trí của phần từ trong vector. Đó là giá trị cần phải xóa bên trong vector. Đối với tham số thứ 2, gồm 2 số nguyên thể hiện phạm vi của các vị trí bên trong vector. Các yếu tố thuộc phạm vi đó nên được loại bỏ. Nó phải được thực hiện trên vector đã dùng ở tham số đầu tiên.

- *erase(int position):* - ` xóa 1 phần tử `
```
// Xóa tại phần tử thứ 5 của vector
v.erase(v.begin() + 4); 
```

- *erase(int start,int end):* - ` xóa 1 đoạn từ a đến b`
```
// xóa tất cả các phần tử trong đoạn từ phần tử thứ 3 đến phần tử thứ 5
v.erase(v.begin() + 2, v.begin() + 5); // không lấy giá trị cuối của đoạn
```

### Input Format (đầu vào)

  - Dòng đầu: chứa các số nguyên **N**
  - Dòng thứ 2: chứa **N** số nguyên được phân tách nhau bới dấu cách (chỉ trên 1 dòng)
  - Dòng thứ 3: chứa số nguyên **x**, biểu thị vị trí của phần tử cần xóa khỏi vector
  - Dòng thứ 4: chứa 2 số nguyên **a** và **b**, biểu thị phạm vi nên được xóa khỏi vector bao gồm a và không bao gồm b.

### Constraints (điều kiện)

  - 1 <= **N** <= 10^5
  - 1 <= x <= **N**
  - 1 <= a < b <= **N**
### Output Format (đầu ra)

  - Dòng đầu: in kích thước vector
  - Dòng thứ 2: In ra các phần tử còn lại của vector sau 2 thao tác xóa(phân cách bởi dấu cách)

### Sample Input
```
6
1 4 6 2 8 9
2
2 4
```

### Sample Output
```
3
1 8 9
```
### Explanation (Giải thích)

  - Lần truy vấn đầu tiên: xóa phần tử thứ 2 của vector là `4` -> vector sau khi xóa `{1, 6, 2, 8, 9}`
  - Lần truy cần thứ 2: xóa phần tử thứ 2 - 4 của vector -> *chỉ xóa phần tử thứ 2 và 3* -> các giá trị tương ứng bị xóa là `6, 2` => vector sau khi xóa: `{1, 8, 9}`

`Các bạn vào linh nguồn để làm (có sẵn ide trên đó) + case luôn nha - mình lười up :)`
### - Nguồn bài gốc (HackerRank - tiếng Anh) - [Click here](https://www.hackerrank.com/challenges/vector-erase)