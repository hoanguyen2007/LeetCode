// Last updated: 2/10/2026, 8:40:34 PM
#include <vector>
#include <cmath> // Để dùng hàm abs()

using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate = -1;
        int missing = -1;

        // Bước 1: Tìm số bị lặp bằng cách đánh dấu âm
        for (int i = 0; i < nums.size(); i++) {
            int val = abs(nums[i]); // Lấy giá trị tuyệt đối vì số có thể đã bị đánh dấu âm trước đó
            int index = val - 1;    // Chuyển giá trị thành chỉ số (0-indexed)

            if (nums[index] < 0) {
                // Nếu giá trị tại index đã âm, nghĩa là 'val' đã xuất hiện rồi
                duplicate = val;
            } else {
                // Đánh dấu bằng cách đổi dấu thành âm
                nums[index] = -nums[index];
            }
        }

        // Bước 2: Tìm số bị thiếu
        for (int i = 0; i < nums.size(); i++) {
            // Vị trí nào còn dương chứng tỏ số (i + 1) chưa từng được dùng để đánh dấu
            if (nums[i] > 0) {
                missing = i + 1;
                break;
            }
        }

        return {duplicate, missing};
    }
};