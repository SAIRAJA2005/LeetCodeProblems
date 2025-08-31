# Last updated: 01/09/2025, 01:05:45
class Solution:
    def isPalindrome(self, s: str) -> bool:
        a = "qwertyuioplkjhgfdsazxcvbnm123456789"
        s1 = ''
        s = s.lower()
        for i in s:
            if i.isalnum()==True:
                s1+=i
        return s1==s1[::-1]