// Last updated: 01/09/2025, 01:01:28
class Solution {
public:
    int maxDepth(string s) {
        int max = 0;
        int c = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '(') c++;
            else if(s[i] == ')') c--;
            if(c > max) max = c;
        }
        return max;
    }
};