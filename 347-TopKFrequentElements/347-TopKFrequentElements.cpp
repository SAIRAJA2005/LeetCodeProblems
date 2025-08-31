// Last updated: 01/09/2025, 01:04:24
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int>vec1;
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++) mp[nums[i]]++;
        multimap<int,int>mp2;
        for(auto i : mp) mp2.insert({i.second,i.first});
        for(auto i : mp2) vec1.push_back(i.second);
        int WantedSize = mp.size()-k;
        vector<int>I;
        for(int i = WantedSize ; i<vec1.size();i++) I.push_back(vec1[i]);
        return I;
    }
};