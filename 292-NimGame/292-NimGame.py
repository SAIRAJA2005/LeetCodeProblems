# Last updated: 01/09/2025, 01:04:33
class Solution:
    def canWinNim(self, n: int) -> bool:
        if n % 4 == 0:
            return False
        return True