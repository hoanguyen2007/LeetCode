// Last updated: 2/15/2026, 10:30:09 PM
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        int n = prices.size();
        int st[500]; // Tuyệt chiêu 1: Stack bằng mảng thô
        int top = -1;

        for (int i = 0; i < n; i++) {
            // Nhớ dùng <= để không bị sai logic như trong ảnh nhé
            while (top >= 0 && prices[i] <= prices[st[top]]) {
                // Tuyệt chiêu 2: Sửa trực tiếp trên mảng đầu vào
                prices[st[top]] -= prices[i];
                top--;
            }
            st[++top] = i;
        }
        
        return prices;
    }
};