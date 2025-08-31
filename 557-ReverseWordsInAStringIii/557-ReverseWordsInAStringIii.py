# Last updated: 01/09/2025, 01:03:50
class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        reversed_words = [word[::-1] for word in words]
        return ' '.join(reversed_words)