// Last updated: 01/09/2025, 00:58:54
class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(int i = 0 ; i < s.size() ; i++){
            if(st.size() > 0 && st.top() == 'A' && s[i] == 'B'){ 
               st.pop();
            }
            else if(st.size() > 0 && st.top() == 'C' && s[i] == 'D'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string newOne = "";
        while(!st.empty()){
            newOne += st.top();
            st.pop();
        }
        if(newOne.size() == s.size()) return s.size();
        return newOne.size();
    }
};