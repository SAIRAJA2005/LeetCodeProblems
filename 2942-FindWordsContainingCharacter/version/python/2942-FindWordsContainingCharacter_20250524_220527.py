# Last updated: 24/05/2025, 22:05:27
class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        ls = []
        k = 0
        for s in words:
            if x in s:
                ls.append(k)
            k += 1
        return ls