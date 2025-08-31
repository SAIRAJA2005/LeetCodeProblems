// Last updated: 01/09/2025, 01:05:44
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>res;
        res.push_back(1);
        long long ans = 1;
        rowIndex++;
        for(int i = 1 ; i < rowIndex; i++){
            ans = ans * (rowIndex - i);
            ans = ans / i;
            res.push_back(ans);
        }
        return res;
    }
};