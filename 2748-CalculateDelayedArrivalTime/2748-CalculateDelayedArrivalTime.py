# Last updated: 01/09/2025, 00:58:59
class Solution:
    def findDelayedArrivalTime(self, arrivalTime: int, delayedTime: int) -> int:
        k=arrivalTime+delayedTime
        if(k<24):
            p=k
            return k
        elif(k==0): 
            return 0
        else:
            p=abs(24-k)
            return p