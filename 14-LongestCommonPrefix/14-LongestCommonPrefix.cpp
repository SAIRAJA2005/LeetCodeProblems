// Last updated: 01/09/2025, 01:06:53
class Solution {
public:
    bool fun(char s,int i ,vector<string>str){
        for(int j = 1; j < str.size() ; j++){
            if(str[j][i] != s) return false;
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        for(int i = 0 ; i < strs[0].size() ; i++){
            if(fun(strs[0][i],i,strs)){
                str += strs[0][i];
            }
            else  return str;
        }
        return str;
    }
};