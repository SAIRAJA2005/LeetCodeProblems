# Last updated: 01/09/2025, 01:05:05
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        if len(set(nums))==len(nums):
            return False
        for i in nums:
            if nums.count(i)>=2:
                return True
        return False