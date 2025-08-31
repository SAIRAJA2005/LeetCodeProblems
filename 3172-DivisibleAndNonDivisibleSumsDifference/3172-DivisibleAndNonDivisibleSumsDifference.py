# Last updated: 01/09/2025, 00:58:29
class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        p = 0
        q = 0
        for i in range(1 , n + 1):
            if i % m == 0:
                p += i
            else:
                q += i
        return q - p
        