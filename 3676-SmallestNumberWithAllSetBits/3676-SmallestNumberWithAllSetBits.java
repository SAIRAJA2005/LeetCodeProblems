// Last updated: 27/12/2025, 21:42:35
class Solution {
    public int smallestNumber(int n) {
        int msb = Integer.highestOneBit(n);
        return (msb<<1)-1;
    }
}