// Last updated: 2/10/2026, 8:40:36 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int max = 0;
        while (right < nums.size()){
            if (nums[right]==1){
                if (right-left+1 > max) max = right-left+1;
                right++;
            }
            else if (nums[right]==0){
                right++;
                left = right;
            }
        }
        return max;
    }
};