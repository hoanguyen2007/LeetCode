// Last updated: 2/21/2026, 3:55:47 PM
1#include <vector>
2#include <queue>
3
4using namespace std;
5
6class Solution {
7public:
8    bool isPossible(vector<int>& target) {
9        priority_queue<long long> pq;
10        long long total_sum = 0;
11        for (int num : target) {
12            pq.push(num);
13            total_sum += num;
14        }
15
16        while (true) {
17            long long max_val = pq.top();
18            pq.pop();
19            if (max_val == 1) {
20                return true;
21            }
22            long long rest_sum = total_sum - max_val;
23            if (rest_sum == 1) {
24                return true;
25            }
26            // Các trường hợp không hợp lệ:
27            // 1. rest_sum == 0: Mảng chỉ có 1 phần tử > 1
28            // 2. max_val <= rest_sum: Giá trị gốc sẽ <= 0
29            if (rest_sum == 0 || max_val <= rest_sum) {
30                return false;
31            }
32            long long prev_val = max_val % rest_sum;
33            if (prev_val == 0) {
34                return false;
35            }
36            total_sum = rest_sum + prev_val;
37            pq.push(prev_val);
38        }
39    }
40};