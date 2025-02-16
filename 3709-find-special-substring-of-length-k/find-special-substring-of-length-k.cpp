class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        if(s.size() == 1) return true;
        int cnt = 1;
        for(int i = 1 ; i < s.size() ; i++){
            cnt = 1;
            while(s[i-1] == s[i]){
                cnt++;
                i++;
            }
            //cout << cnt << " ";
            if(cnt == k) return true;
        }
        if(k == 1 && s[s.size()-1] != s[s.size()-2]) return true;
        return false;
    }
};