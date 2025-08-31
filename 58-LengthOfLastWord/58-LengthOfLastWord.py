# Last updated: 01/09/2025, 01:06:24
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        k = s.split()
        return len(k[-1])