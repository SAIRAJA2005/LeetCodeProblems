# Last updated: 01/09/2025, 01:06:14
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        o=''
        for i in digits:
            o+=str(i)
        print(o)
        k = str(int(o)+1)

        p = []
        for i in k:
            p.append(int(i))
        return p
