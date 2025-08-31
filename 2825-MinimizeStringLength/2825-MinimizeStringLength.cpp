// Last updated: 01/09/2025, 00:58:49
class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>st(s.begin(),s.end());
        return st.size();   
    }
};