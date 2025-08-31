# Last updated: 01/09/2025, 01:06:46
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if needle in haystack:
            for i in haystack:
                return haystack.index(needle)
        else:
            return -1


