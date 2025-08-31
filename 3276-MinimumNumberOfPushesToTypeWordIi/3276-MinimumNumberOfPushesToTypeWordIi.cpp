// Last updated: 01/09/2025, 00:58:17
class Solution {
public:
    int minimumPushes(string word) {
        vector<int>v(26);
        for(auto i : word){
            v[i - 'a']++;
        }
        sort(v.rbegin(),v.rend());
        int res = 0;
        for(int i = 0;i < v.size();i++){
            res += (i / 8 + 1) * v[i];
        }
        return res;
    }
};