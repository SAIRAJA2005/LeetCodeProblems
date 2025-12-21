class Solution:
    def mirrorDistance(self, n: int) -> int:
        k = 0
        r = n
        while(n != 0):
            rev = n % 10
            k = k * 10 + rev
            n //= 10 
        return abs(k - r)


        