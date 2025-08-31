// Last updated: 01/09/2025, 01:00:37
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
        }
        int a = mp.begin()->second;
        for(auto i : mp){
            if(a != i.second) return false;
        }
        return true;
    }
};