// Last updated: 01/09/2025, 01:04:23
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st(nums1.begin(),nums1.end());
        set<int>st2(nums2.begin(),nums2.end());
        auto it = st.begin();
        auto it2 = st2.begin();
        vector<int>ans;
        while(it != st.end() && it2 != st2.end()){
            if (*it == *it2){
                ans.push_back(*it);
                *it++;
                *it2++;
            }
            else if (*it > *it2){
                *it2++;
            }
            else if(*it < *it2){
                *it++;
            }
        }
        return ans;
    }
};