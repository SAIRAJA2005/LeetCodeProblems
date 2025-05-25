# Last updated: 25/05/2025, 23:54:30
class Solution:
    def canWinNim(self, n: int) -> bool:
        if n % 4 == 0:
            return False
        return True