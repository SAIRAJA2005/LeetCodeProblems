// Last updated: 01/09/2025, 00:57:57
class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(auto i : s){
            if(isdigit(i) == false){
                st.push(i);
            }
            else if(isdigit(i) && st.size() > 0){
                st.pop();
            }
        }
        string result;
        while(!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};