// Last updated: 2/11/2026, 9:26:52 PM
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int targetIdx = 0; // Biến theo dõi chúng ta đang cần tìm số nào trong target

        // Duyệt các số từ 1 đến n
        for (int i = 1; i <= n; i++) {
            // Nếu đã tìm đủ các số trong target, dừng lại luôn (quy tắc số 3)
            if (targetIdx == target.size()) break;

            // Mọi số đều phải được "Push" vào đầu tiên
            ans.push_back("Push");

            if (target[targetIdx] == i) {
                // Nếu số hiện tại đúng là số trong target, giữ nó lại
                targetIdx++;
            } else {
                // Nếu không phải, chúng ta phải "Pop" nó ra ngay lập tức
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};