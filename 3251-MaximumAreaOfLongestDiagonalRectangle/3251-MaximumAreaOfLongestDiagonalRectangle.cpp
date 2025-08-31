// Last updated: 01/09/2025, 00:58:19
class Solution {
    public:
        int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
            int maxD = 0, res = 0;
            for (auto &dim : dimensions) {
                int l = dim[0], b = dim[1];   
                int d = l*l + b*b;        
                if (d > maxD) {
                    res = l * b;
                    maxD = d;
                } else if (d == maxD) {
                    res = max(res, l * b);
                }
            }
            return res;
        }
};