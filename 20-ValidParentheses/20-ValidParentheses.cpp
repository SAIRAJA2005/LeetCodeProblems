// Last updated: 01/09/2025, 01:06:48
class Solution {
public:
    bool isValid(string s) {
        stack<char>k;
        if (s.size()%2!=0){
            return false;
         }
        else{
            for(int i = 0   ; i < s.size() ; i++){
                if (s[i]=='[' || s[i]=='{' || s[i]=='('){
                    k.push(s[i]);   
                }
                else if (!k.empty()){
                     if (s[i]==']' && k.top()=='['){
                        k.pop();
                    }
                    else if (s[i]=='}' && k.top()=='{'){
                        k.pop();
                    }
                    else if (s[i]==')' && k.top()=='('){
                        k.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if (k.size()==0) return true;
        return false;
    }
};
