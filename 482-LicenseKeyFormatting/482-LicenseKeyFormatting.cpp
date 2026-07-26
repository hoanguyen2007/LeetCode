// Last updated: 7/26/2026, 4:22:10 PM
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string res = "";
        int count = 0;

        // Duyệt từ phải sang trái
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != '-') {
                // Thêm dấu gạch ngang nếu đã đủ k ký tự trong group hiện tại
                if (count > 0 && count % k == 0) {
                    res += '-';
                }
                res += toupper(s[i]);
                count++;
            }
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};