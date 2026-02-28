// Last updated: 2/28/2026, 9:43:57 PM
1class Solution {
2public:
3    bool detectCapitalUse(string word) {
4        int count = 0;
5        int n = word.length();
6
7        // Bước 1: Đếm số lượng chữ hoa trong từ
8        for (int i = 0; i < n; i++) {
9            if (isupper(word[i])) {
10                count++;
11            }
12        }
13
14        // Bước 2: Kiểm tra 3 điều kiện hợp lệ
15        // 1. Tất cả là chữ hoa
16        if (count == n) return true;
17        
18        // 2. Tất cả là chữ thường
19        if (count == 0) return true;
20        
21        // 3. Chỉ chữ cái đầu tiên là chữ hoa
22        if (count == 1 && isupper(word[0])) return true;
23
24        // Nếu không thỏa mãn các điều kiện trên
25        return false;
26    }
27};