# Last updated: 01/09/2025, 01:04:47
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if sorted(t) == sorted(s):
            return True
        return False