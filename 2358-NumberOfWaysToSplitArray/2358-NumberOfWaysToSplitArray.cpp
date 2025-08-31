// Last updated: 01/09/2025, 00:59:49
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long long>vec;
        long long cnt = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            cnt += nums[i];
            vec.push_back(cnt);
        }
        cnt = 0;
        int n = vec.size();
        for(int i = 0 ; i < vec.size() - 1; i++){
            long long left = vec[i];
            long long right = vec[n-1]  - vec[i];
            if(left >= right) cnt++;
        }
        return cnt;
    }
};