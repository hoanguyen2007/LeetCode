# Last updated: 2/2/2026, 11:18:08 PM
class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        l = []
        for x in range(len(nums)):
            l.append(1)
        for x in range(1,len(nums)):#Chay tu 1 toi x
            for y in range(0,x):#Chay tu 0 toi x
                if nums[y] < nums[x]:
                    l[x] = max(l[x],l[y]+1)
        return(max(l))