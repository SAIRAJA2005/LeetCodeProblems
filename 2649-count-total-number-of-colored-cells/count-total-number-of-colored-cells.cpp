class Solution {
public:
    long long coloredCells(int n) {
        if(n == 1) return 1;
        long long s = static_cast<long long> (n) * (n);
        s += static_cast<long long> (n - 1) * (n - 1);
        return s;
    }
};