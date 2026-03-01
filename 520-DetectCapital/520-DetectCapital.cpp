// Last updated: 3/1/2026, 9:04:01 PM
1class Solution {
2public:
3    string licenseKeyFormatting(string s, int k) {
4        string res = "";
5        int count = 0;
6
7        // Duyệt từ phải sang trái
8        for (int i = s.length() - 1; i >= 0; i--) {
9            if (s[i] != '-') {
10                // Thêm dấu gạch ngang nếu đã đủ k ký tự trong group hiện tại
11                if (count > 0 && count % k == 0) {
12                    res += '-';
13                }
14                res += toupper(s[i]);
15                count++;
16            }
17        }
18        
19        reverse(res.begin(), res.end());
20        return res;
21    }
22};