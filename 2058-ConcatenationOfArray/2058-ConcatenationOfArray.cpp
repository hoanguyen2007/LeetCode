// Last updated: 2/10/2026, 8:40:32 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
            int n = nums.size();
    vector<int> ans(2 * n);
    for (int i = 0; i < n; ++i) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    return ans;
    }
};