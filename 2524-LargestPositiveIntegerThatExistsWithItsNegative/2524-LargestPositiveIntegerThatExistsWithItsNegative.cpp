// Last updated: 01/09/2025, 00:59:34
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>neg,pos;
        for(int i : nums){
            if(i < 0 ) neg.push_back(i);
            else pos.push_back(i);
        }
        int i = 0, max = -1;
        while(i < pos.size()){
            if (binary_search(neg.begin(), neg.end(), pos[i]*-1)){
                cout<<pos[i]<<" ";
                if(max < pos[i]){
                    max = pos[i];
                }
            }
            i++;
        }
        return max;
    }
};