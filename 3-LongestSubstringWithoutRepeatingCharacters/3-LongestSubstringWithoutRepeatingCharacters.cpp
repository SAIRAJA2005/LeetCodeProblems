// Last updated: 01/09/2025, 01:07:00
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 0 || n == 1) return n;
        vector<int>mp(255,-1);
        int l = 0;
        int r = 0;
        int mx = INT_MIN;
        while(r < n){
            if(mp[s[r]] != -1){
                if(mp[s[r]] + 1 > l){
                    l = mp[s[r]] + 1;
                }
            }
            mx = max(mx,r-l+1);
            mp[s[r]] = r;
            r++;
        }
        return mx;
    }
};