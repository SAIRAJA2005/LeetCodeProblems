# Last updated: 13/07/2025, 23:01:15
class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        reversed_words = [word[::-1] for word in words]
        return ' '.join(reversed_words)