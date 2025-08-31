// Last updated: 01/09/2025, 01:04:52
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set<int>st;
        for (int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        int k=nums.size()/3;
        int p,h;
        vector<int>vec1;
        for(auto i:st){
            p = count(nums.begin(),nums.end(),i);
            if (p>k){
                h = i;
                vec1.push_back(h);
            }
        }
        return vec1;
    }
};