// Last updated: 2/2/2026, 11:18:16 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        // So sánh từng ký tự của needle với đoạn tương ứng trong haystack
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        // Nếu j bằng độ dài needle, nghĩa là đã khớp hoàn toàn
        if (j == m) return i;
    }
    return -1;
}
};