// Last updated: 2/22/2026, 3:10:03 PM
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long> pq;
        long long total_sum = 0;
        for (int num : target) {
            pq.push(num);
            total_sum += num;
        }

        while (true) {
            long long max_val = pq.top();
            pq.pop();
            if (max_val == 1) {
                return true;
            }
            long long rest_sum = total_sum - max_val;
            if (rest_sum == 1) {
                return true;
            }
            // Các trường hợp không hợp lệ:
            // 1. rest_sum == 0: Mảng chỉ có 1 phần tử > 1
            // 2. max_val <= rest_sum: Giá trị gốc sẽ <= 0
            if (rest_sum == 0 || max_val <= rest_sum) {
                return false;
            }
            long long prev_val = max_val % rest_sum;
            if (prev_val == 0) {
                return false;
            }
            total_sum = rest_sum + prev_val;
            pq.push(prev_val);
        }
    }
};