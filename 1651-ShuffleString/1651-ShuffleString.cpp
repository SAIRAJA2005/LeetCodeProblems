// Last updated: 01/09/2025, 01:01:31
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string NewString = "";
        map<int,char>mp;
        for(int i = 0 ; i < indices.size() ; i++){
            mp[indices[i]] = s[i];
        }
        for(auto i : mp){
            NewString += i.second;
        }
        return NewString;
    }
};