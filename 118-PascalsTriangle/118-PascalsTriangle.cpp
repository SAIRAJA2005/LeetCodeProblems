// Last updated: 01/09/2025, 01:05:47
class Solution {
public:
    vector<int>functionNcR(int n){
        vector<int>One;
        int result = 1;
        One.push_back(1);
        for(int i = 1 ; i < n ; i++){
            result = result * (n - i);
            result = result / i;
            One.push_back(result);
            cout << result << " " ;
        }
        return One;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        //vector<int>ans = {1};
        for(int i = 1 ; i <= numRows ; i++){
            vector<int>ans1 = functionNcR(i);
            res.push_back(ans1);
        }
        return res;
    }
};