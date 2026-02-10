// Last updated: 2/10/2026, 8:40:33 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(n*2);
        for (int i = 0; i < n; i++) {
    ans[2 * i] = nums[i];
    ans[2 * i + 1] = nums[i + n];
}
        return ans;
    }
};