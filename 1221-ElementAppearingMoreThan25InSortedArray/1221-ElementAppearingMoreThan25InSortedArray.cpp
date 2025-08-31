// Last updated: 01/09/2025, 01:02:31
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int cnt=0;
        set<int>s(arr.begin(),arr.end());
        int mx = 0;
        unordered_map<int,int>mp;
        for(auto i=s.begin();i!=s.end();i++){
            int l = count(arr.begin(),arr.end(),*i);
            mp[*i] = l;
            if(l>cnt){
                cnt = l;
                mx = *i;
            }
        }
        return mx;
    }
};