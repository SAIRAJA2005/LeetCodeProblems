# Last updated: 01/09/2025, 01:05:42
class Solution:
    def singleNumber(self, nums: List[int]) -> int:

        for i in range (len(nums)):
            if nums.count(nums[i])==1:
                return nums[i]