// Last updated: 01/09/2025, 01:02:38
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>res(heights.begin(),heights.end());
        sort(res.begin(),res.end());
        int cnt = 0 ;
        for(int i = 0 ; i < heights.size() ; i++){
            if(heights[i] != res[i]){
                cnt++;
            }
        }
        return cnt;
    }
};