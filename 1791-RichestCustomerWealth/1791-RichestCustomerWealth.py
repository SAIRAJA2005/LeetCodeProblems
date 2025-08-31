# Last updated: 01/09/2025, 01:01:19
class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        l = []
        for i in accounts:
            l.append(sum(i))
        return max(l)