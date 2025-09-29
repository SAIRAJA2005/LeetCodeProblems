class Solution {
public:
    int longestPalindrome(string s) {
        string s1 = s;
        reverse(s1.begin(),s1.end());
        if(s1 == s) return s.size();
        map<char,int>mp;
        for(char i : s){
            mp[i]++;
        }
        bool yes = false;
        int cnt = 0;
        for(auto ch : mp){
            if(ch.second % 2 == 0){
                cnt += ch.second;
            }
            else{
                cnt += ch.second-1;
                yes = true;
            }
        }
        if(yes) return cnt+1;
        return cnt;
    }
};