// Last updated: 01/09/2025, 01:02:59
class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char>st;
        int i = 0;
        while(i < s.size()){
            if(st.size() > 0 && st.top() == '(' && s[i] == ')'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;
        }
        return st.size();
    }
};