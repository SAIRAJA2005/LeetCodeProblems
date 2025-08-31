# Last updated: 01/09/2025, 00:58:44
class Solution:
    def numberOfEmployeesWhoMetTarget(self, hours: List[int], target: int) -> int:
        count = 0
        for i in hours:
            if (i >= target):
                count+=1
        return count
