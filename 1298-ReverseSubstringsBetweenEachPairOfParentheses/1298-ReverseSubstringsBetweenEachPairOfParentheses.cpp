// Last updated: 01/09/2025, 01:02:24
class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st; 
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                st.push(i); 
            }
            else if(s[i] == ')'){
                reverse(s.begin() + st.top() , s.begin() + i); 
                st.pop();
            }
        }
        string ans = "";
        for(int i = 0; i < n; i++){
            if(s[i] != '(' && s[i]  != ')'){
                ans += s[i];
            }
        }
        return ans;   
    }
};