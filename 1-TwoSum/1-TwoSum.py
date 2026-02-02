# Last updated: 2/2/2026, 11:18:26 PM
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for x in range(0,len(nums)):
            for i in range(x+1,len(nums)):
                if nums[x] + nums[i]==target:
                    return(x,i)
