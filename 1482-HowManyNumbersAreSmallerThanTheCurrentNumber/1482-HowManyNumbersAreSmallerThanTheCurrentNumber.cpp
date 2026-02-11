// Last updated: 2/11/2026, 9:26:50 PM
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // Bước 1: Khởi tạo mảng đếm tần suất (từ 0 đến 100)
        vector<int> count(101, 0);
        for (int x : nums) {
            count[x]++;
        }
        
        // Bước 2: Tính mảng cộng dồn (Prefix Sum)
        // count[i] bây giờ sẽ chứa số lượng phần tử <= i
        for (int i = 1; i <= 100; i++) {
            count[i] += count[i - 1];
        }
        
        // Bước 3: Tạo mảng kết quả
        vector<int> result;
        for (int x : nums) {
            if (x == 0) {
                result.push_back(0); // Không có số nào nhỏ hơn 0
            } else {
                // Số lượng số nhỏ hơn x chính là số lượng số <= (x-1)
                result.push_back(count[x - 1]);
            }
        }
        
        return result;
    }
};