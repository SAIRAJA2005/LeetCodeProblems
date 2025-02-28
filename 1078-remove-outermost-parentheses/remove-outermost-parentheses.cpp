class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        stack<char>st;
        for(auto i : s){
            if(i == '('){
                if(!st.empty()){
                    result += i;
                }
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()){
                    result += i;
                }
            }
        }
        return result;
    }
};