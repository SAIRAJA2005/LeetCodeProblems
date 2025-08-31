# Last updated: 01/09/2025, 00:59:47
class Solution:
    def digitCount(self, num: str) -> bool:
        k = list(num)
        k1 = []
        for i in k:
            k1.append(int(i))
        b = 0
        for i in range(len(k1)):
            a = k1[i]
            if k1.count(i) == a:
                b = b + 1
                
        if b == len(k1):
            return True
        else:
            return False 
        