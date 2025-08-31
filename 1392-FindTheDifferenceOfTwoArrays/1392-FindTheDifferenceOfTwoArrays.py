# Last updated: 01/09/2025, 01:02:19
class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        list1 = []
        list2 = []
        nums11 = set(nums1)
        nums22 = set(nums2)
        for i in nums11:
            if i not in nums22:
                list1.append(i)
        for i in nums22:
            if i not in nums11:
                list2.append(i)
        final = [list1,list2]
        return final