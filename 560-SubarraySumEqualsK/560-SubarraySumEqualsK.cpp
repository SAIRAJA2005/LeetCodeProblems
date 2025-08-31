// Last updated: 01/09/2025, 01:03:48
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>preFreq;
        int cnt = 0, sm = 0;
        preFreq[0] = 1;
        for(auto num : nums){
            sm += num;
            if(preFreq.find(sm - k) != preFreq.end()){
                cnt += preFreq[sm - k];
            }
            preFreq[sm]++;
        }
        return cnt;
    }
};