# Last updated: 01/09/2025, 00:58:25
class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        ls = []
        k = 0
        for s in words:
            if x in s:
                ls.append(k)
            k += 1
        return ls