// Last updated: 2/15/2026, 10:30:18 PM
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> st;
    int maxArea = 0;
    
    // Thêm cột 0 để xử lý hết stack
    heights.push_back(0); 
    
    for (int i = 0; i <= n; i++) {
        // Khi gặp cột thấp hơn, ta tính diện tích của các cột cao hơn trước đó
        while (!st.empty() && heights[i] < heights[st.top()]) {
            int h = heights[st.top()];
            st.pop();
            
            // Tính độ rộng: 
            // Nếu stack trống, nghĩa là cột h thấp nhất từ đầu đến i
            // Nếu không, độ rộng là khoảng cách giữa i và cột thấp hơn bên trái
            int w = st.empty() ? i : i - st.top() - 1;
            
            maxArea = max(maxArea, h * w);
        }
        st.push(i);
    }
    return maxArea;
}
};