// Last updated: 2/11/2026, 9:26:55 PM
#include <vector>
#include <cmath> // Để dùng abs()

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        
        // Bước 1: Đánh dấu các số đã xuất hiện
        for (int i = 0; i < nums.size(); i++) {
            // Lấy giá trị tuyệt đối vì số này có thể đã bị đổi dấu trước đó
            int val = abs(nums[i]); 
            int index = val - 1; // Chuyển về 0-indexed
            
            // Nếu số tại vị trí index còn dương, đổi nó thành âm
            if (nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        
        // Bước 2: Tìm những vị trí vẫn còn dương
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                // Vị trí i còn dương nghĩa là số (i + 1) chưa từng xuất hiện
                result.push_back(i + 1);
            }
        }
        
        return result;
    }
};