// Last updated: 01/09/2025, 01:00:52
class Solution {
public:
    bool Duplicate(string p){
        int q = p.size();
        set<char>st(p.begin(),p.end());
        if(q == st.size()) return true;
        return false;
    }
    int countGoodSubstrings(string s) {
        string k = "";
        int cnt = 0;
        for(int i = 0 ; i < 3 ; i++){
            k += s[i];
        }
        if(Duplicate(k) == true){
            cnt++;
        }
        for(int i = 3 ; i < s.size() ; i++){
            k = k.substr(1);
            k += s[i];
            if(Duplicate(k) == true){
                cnt++;
            }
        }
        return cnt;
    }
};