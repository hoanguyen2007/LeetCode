// Last updated: 2/15/2026, 10:30:16 PM
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        // Dùng vector làm stack để tận dụng tốc độ truy cập bộ nhớ
        vector<int> st;
        st.reserve(tokens.size()); // Cấp phát trước để tránh resize

        for (const string& x : tokens) {
            // Kiểm tra xem có phải toán tử không (dựa vào độ dài hoặc ký tự đầu)
            if (x.size() > 1 || isdigit(x[0])) {
                st.push_back(stoi(x));
            } else {
                // Lấy 2 phần tử cuối ra
                int val2 = st.back(); st.pop_back();
                int val1 = st.back(); st.pop_back();
                
                // Thực hiện phép tính
                if (x == "+") st.push_back(val1 + val2);
                else if (x == "-") st.push_back(val1 - val2);
                else if (x == "*") st.push_back(val1 * val2);
                else st.push_back(val1 / val2);
            }
        }
        return st.back();
    }
};