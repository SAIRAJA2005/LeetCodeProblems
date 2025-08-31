# Last updated: 01/09/2025, 01:00:26
class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        k = 0
        for i in operations:
            if "++" in i:
                k+=1
            elif "--" in i:
                k-=1
        return k
